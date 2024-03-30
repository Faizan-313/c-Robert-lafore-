#include <iostream>
using namespace std;

const int MAX_CAPACITY = 1000;

void store_roll_no(int c){
    int roll[c];
    try{
        for(int i = 0; i <  MAX_CAPACITY ; i++){
            cout<<"Enter the roll no.: ";
            cin>>roll[i];
            if(i==c-1){
                throw std::out_of_range("class full");
            }
        }
    }
    catch(const out_of_range) {
        cout << "Class Full" << endl;
        }
}

int main()
{
    int c;
    cout<<"Enter the class capacity: ";
    cin>>c;
    store_roll_no(c);
    cout<<"Have a nice day"<<endl;
}