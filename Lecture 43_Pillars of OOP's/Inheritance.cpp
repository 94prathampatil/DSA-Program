#include <bits/stdc++.h>
using namespace std;

class Human
{

    // Properties;
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }

    void setWeight(int w)
    {
        this->weight = w;
    }
};

class male : public Human
{

public:
    string color;

    void sleep()
    {
        cout << "Man is Sleeping" << endl;
    }
};
int main()
{
    male obj1;
    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;

    obj1.setWeight(70);
    cout << obj1.color << endl;
    cout << obj1.weight << endl;
    obj1.sleep();

    return 0;
}