#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
        int weight;
        int age;

    public:
        void speak(){
            cout << "Animal is speaking";
        }
};

class Dog:public Animal{

};
int main()
{
    Dog d;
    d.speak();
    return 0;
}