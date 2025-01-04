#include <bits/stdc++.h>
using namespace std;

class Demo
{

public:
    void say()
    {
        cout << "Hello Prathamesh.." << endl;
    }
    void say(string name)
    {
        cout << "Hello, " << name << endl;
    }
};
int main()
{
    Demo d;
    d.say();
    d.say("Prathamesh Patil");
    return 0;
}