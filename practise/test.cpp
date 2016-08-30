#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b, k;
	a = "Sherin";
	b = "Sheri";
	k = "merin";
	if (1)
	{
		cout << a << endl;
		b.assign(k, 0, 2);
		cout << a << b << endl;
	}
}