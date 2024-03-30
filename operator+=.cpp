#include <iostream>
using namespace std;

class Point
{
    int a;
    public:
    Point(): a(0){}
    void get(){
        cout<<"Enter the number: ";
        cin>>a;
    }
    void show(){
        cout<<a<<endl;
    }
    Point operator +=(Point m){
        Point temp;
        temp.a = a += m.a;
        return temp;
    }
};

int main()
{
    Point s1,s2,s3;
    s1.get();
    s2.get();
    s3 = s1 += s2;
    s1.show();
    s2.show();
    s3.show();
}