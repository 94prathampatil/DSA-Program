#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // properties
    public:
        int health;
        char level;
        char name[100];

public:         //Default Constructor.
    Hero()
    {
        cout << "This is Constructor Calling" << endl;
    }

    Hero(int health){       //Paramaterize Constructor.
        this -> health = health;
        cout << "Health is :- " << this->health << endl;
        cout << "Address of this is:- " << this << endl;
    }

    Hero(Hero &temp){ // Copy constructor
        this->health = temp.health;
        cout << "Health is:- " << this -> health << endl;
    }
};
int main()
{   
    Hero ramesh(70); // object created statically

    cout << "Address of Ramesh is:- " << &ramesh << endl;
    //cout << "Health of ramesh is:- " << ramesh.health << endl;
    // Hero *ramesh = new Hero;

    Hero Suresh(ramesh);
    return 0;
}