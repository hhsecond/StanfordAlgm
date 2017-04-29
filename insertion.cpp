#include <iostream>
using namespace std;

void display(int arr[], int size)
{
	for (int i=0; i<size; i++)
	{
		cout << arr[i] << endl;
	}
}


int main()
{
	int size = 8;
	int arr [8] = {6, 3, 1, 0, 2, 9, 8, 7};
	int temp;
	int j;

	for (int i=0; i<size; i++)
	{
		j = i;
		while (j!=0 && arr[j] < arr[j-1])
		{
			temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
	display(arr, size);
}