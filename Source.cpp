#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	cout << "\nВведите кол-во товаров до 1000ш.т\n";
	cin >> n;
	while (n > 1000)
	{
		cout << "Неверное кол-во товаров\n";
		cout << "\nВведите кол-во товаров до 1000ш.т\n";
		cin >> n;
	}
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Ввдите цену " << i + 1 << " товара\n";
		cin >> array[i];
	}
	for (int i = 1; i < n; i++)
	{
		int temp = array[i], j;
		for (j = i - 1; j >= 0; j--)
		{
			if (array[j] < temp)
			{
				array[j + 1] = array[j];
			}
			else
			{
				break;
			}
		}
		array[j + 1] = temp;
	}
	int* array1 = new int[n];
	int i, k = 0;
	for (i = 0; i < n; i++, k++)
	{
		array1[i] = array[i / 2];
		for (int j = 0; j < 1; j++)
		{
			array1[i + 1] = array[n - 1 - k];
		}
		i += 1;
	}
	cout << "Чек ";
	for (int i = 0; i < n; i++)
	{
		cout << " " << array1[i];
	}
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (i % 2 == 0)
		{
			sum += array1[i];
		}
	}
	cout << "Сумма чека" << sum;
}
