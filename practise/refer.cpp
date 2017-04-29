#include <cmath>
#include <iostream>
#include <array>
#include <vector>
#include <string> 

using namespace std;
 
 int g = 8;

inline int testF(int a, float b)
{
	return (a * g);
}

float average(int *arr)
{
	int sum = 0;
	for(int i=0; i<3; i++)
	{
		sum += arr[i];
	}
	return (sum/3);
}

float sizeStdArray(array<int, 3> &n)
{
	return n.size();
}

void stdVector()
{
	//std::vector
	vector<int> vint;
	vint = {1, 2, 3, 4};
	vint.resize(6);
	cout << "size of std::vector " << vint.size() << " and capacity " << vint.capacity() << " and maxsize " << vint.max_size() << endl;
}

void stdArray()
{
	//std::array
	array<int, 3> stdarray;
	stdarray = {4, 5, 6};
	cout << "std::array " << stdarray[0] << endl;
	float ret1;
	ret1 = sizeStdArray(stdarray);
	cout << "size from function: " << ret1 << endl;
	cout << "empty(): " << stdarray.empty() << endl;
	stdarray.fill(2);
	cout << "fill(2): " << stdarray[1] << endl;
	cout << "max_size(): " << stdarray.max_size() << endl;
}

void array2d()
{
	//2d array
	int twod[4][6];
	for (int i=0; i<4; i++)
	{
		for (int j=0; j<6; j++)
		{
			twod[i][j] = i*j;
		}
	}
	/*int *twodp;
	*twodp = twod;
	cout << "pointers to twod: " << twodp[1][2] << endl;*/
}

void forEach()
{
	// for each loop
	int loopArr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	for (int m : loopArr)
	{
		cout << "for each loop: " << m << endl;
		break;
	}
}

void normalArrays()
{
	//arrays
	int arr1[10];
	arr1[6] = 5;
	float arr2[] = {'1', '4', '5'};
	cout << "arry 1[6] " << arr1[6] << endl;
	cout << "arr1[7] garbage vlue " << arr1[7] << endl;
	cout << "arr2, value assigned while initilize " << arr2[1] << endl;
	for (int i=1; i<2; i++)
	{
		cout << "array in loop: " << arr1[i] << endl;
	}
}

void pointersArray()
{
	//pointers to array
	int arr3[] = {1, 2, 3, 4, 5};
	int *q = arr3;
	cout << "array pointers: " << *(q + 1) << endl;
	cout << "bool check(*(q + 1) == *(arr3 + 1)): " << (*(q + 1) == *(arr3 + 1)) << endl;
	cout << "array pointers: " << q[2] << endl;
	float ret;
	ret = average(arr3);
	cout << "average from function: " << ret << endl;
}

void ifLoop()
{
	//if loop
	int b;
	if (1)
	{
		b = 4;
	}
}

void functions()
{
	//function, inline and normal
	int b = 4;
	int a = 5;
	g = 1;
	int m = testF(a, b);
	cout << "function return value " << testF(1, 2.0) << endl;
}

void normalPointers()
{
	//POINTERS
	float k = 2.0;
	float *p;
	p = &k;
	cout << "bool check *p == k: " << (*p == k) << endl;
	cout << "mem address: " << *(p + 4) << endl;
	cout << "pointers can be used as arrays " << p[0] << endl;
}

void normalString()
{
	char name [] = {'s', 'a', 'm'};
	cout << "normal string: " << name << endl;
	char anotherone [] = "thomas";
	// bug: how name prints both names above
	cout << "normal string: " << name << endl;
	char another [] = "sherin";
}

void stdString()
{
	cout << "not implemented ###########";
}

void normalStruct()
{
	cout << "not implemented ###########";
}

void structPointers()
{
	cout << "not implemented ###########";
}



int main()
{
	stdString();
	normalStruct();
	structPointers();
	normalString();
	stdVector();
	stdArray();
	array2d();
	forEach();
	normalArrays();
	pointersArray();
	ifLoop();
	functions();
	normalPointers();
}