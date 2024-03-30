#include <iostream>
using namespace std;

class _distance
{
    int d;
    public:
    _distance():d(0)
    {}
    void get()
    {
        cout<<"Enter the distance: ";
        cin>>d;
    }
    void show()
    {
        cout<<"Distance: "<<d;
    }
    _distance operator -(_distance n)
    {
        _distance temp;
        temp.d = d-n.d;
        return temp;
    }
};
int main()
{
    _distance d1,d2,d3;
    d1.get();
    d2.get();
    d3= d1-d2;
    d3.show();
}