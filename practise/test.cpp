#include <iostream>
#include <string>
using namespace std;
int main()
{
	int i = 10;
	int *k;
	k = &i;
	int *j = k;
	cout << i << endl << k << endl << j << endl;
}