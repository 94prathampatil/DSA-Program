#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void print()
    {
        cout << "This is class A" << endl;
    }
};

class B
{
public:
    void print()
    {
        cout << "This is class B" << endl;
    }
};

class C : public A, public B{
};

int main()
{
    C obj;

    obj.A::print();
    obj.B::print();
    // obj.print();     gives ambiguity error
    return 0;
}