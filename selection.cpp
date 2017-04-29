#include <iostream>
using namespace std;

void display(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}


int main()
{
	int size = 7;
	int arrayin [size] = {1, 3, 9, 5, 2, 0, 6};
	int temp;
	for (int i = 0; i < size; i++)
	{
		int min = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arrayin[j] < arrayin[min])
			{
				min = j;
			}
		}
		// Swap
		temp = arrayin[i];
		arrayin[i] = arrayin[min];
		arrayin[min] = temp;
	}
	display(arrayin, size);
}
