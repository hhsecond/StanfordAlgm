#include <iostream>
using namespace std;
void display(int marks[]);

int main() 
{
    int marks[5] = {88, 76, 90, 61, 69};
    cout<<marks[2]<<endl;
    display(marks);
    cout<<marks[2]<<endl;
    return 0;
}

void display(int m[]) 
{
    m[2] = 10;
}