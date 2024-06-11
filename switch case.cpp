#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;

    switch (a)
    {
    case 1:
    cout<<"The value of a is 1";
        break;
    case 2:
    cout<<"The value of b i 2";
        break;
    case 3:
    cout<<"The value of c is 3";
    break;
    
    default:
    cout<<"default will allways to be printed";
        break;
    }

    return 0;
}
