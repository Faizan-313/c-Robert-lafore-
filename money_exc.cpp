#include <iostream>
using namespace std;

int main()
{
    float a;
    cout<<"Enter the amount: ";
    cin>>a;
    cout<<"Pound = "<<a / 1.487<<'\n'
    <<"Franc = "<<a / 0.172<<'\n'
    <<"Deutschemark = "<<a / 0.584<<'\n'
    <<"Yen = "<<a / 0.00955<<'\n';
}