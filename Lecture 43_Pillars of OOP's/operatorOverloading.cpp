#include <bits/stdc++.h>
using namespace std;

class Demo{

    public:
        int a;
        int b;

    void operator-(Demo &temp){
        int val1 = this->a;
        int val2 = temp.a;

        cout << "Addition of the two objects is:- " << val1 + val2 << endl;
    }
};
int main()
{
    Demo d1, d2;

    d1.a = 10;
    d2.a = 20;

    d1 - d2;
    return 0;
}