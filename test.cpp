#include<iostream>
#include<string>
using namespace std;
int main()
{
    {const string s = "me ";
    string c = "hai";
    {string k = "again";
    cout << s + c + k << endl;}}
    return 0;
}