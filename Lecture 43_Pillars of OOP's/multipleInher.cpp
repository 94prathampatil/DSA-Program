#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    int age;
    int weight;

public:
    void Barking()
    {
        cout << "Animals are barking" << endl;
    }
};

class Human{
    public:
        string color;

    public:
        void speak(){
            cout << "Humans are Speaking" << endl;
        }
};

// Multiple Inheritance
class hybrid:public Animal, public Human{
};
int main()
{
    hybrid h;
    h.speak();
    h.Barking();
    return 0;
}