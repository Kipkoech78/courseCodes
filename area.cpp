#include<iostream>
using namespace std;
int main()
{
    int i,j;
    float area;
    cout << "enter the base of triangle";
    cin >> i;
    cout << "enter the width";
    cin >> j;
    area= 0.5 * j *i;
    cout << "area is"<<endl;
    cout << area;
    return 0;
}