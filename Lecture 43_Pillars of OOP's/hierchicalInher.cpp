#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void print(){
            cout << "This is Parent Class" << endl;
        }
};

class B:public A{
    public:
        void printB(){
            cout << "This is Child Class(B)" << endl;
            cout<<endl;
        }
};

class C:public A{
    public:
        void printC(){
            cout << "This is Child Class(C)" << endl;
            cout<<endl;
        }
};

int main()
{
    C obj1;
    B obj2;

    cout << "Excuting for Class B:-" << endl;
    cout<<endl;
    obj2.print();
    obj2.printB();

    cout << "Executing for Class C:- " << endl;
    cout<<endl;
    obj1.print();
    obj1.printC();

    return 0;
}