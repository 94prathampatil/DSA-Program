#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout << "Animals are speaking" << endl;
        }
};

class Dog:public Animal{
};

class germenShepherd:public Dog{
};
int main()
{
    germenShepherd g;
    g.speak();
    return 0;
}