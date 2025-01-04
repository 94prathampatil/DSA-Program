#include <bits/stdc++.h>
using namespace std;
class Hero
{

    // properties
public:
    int health = 80;
    char level;
    char name[100];
};

int main()
{
    Hero *h1 = new Hero;
    cout << "Health is :- " << (*h1).health << endl; // printing by dereferencing the object
    cout << "Health is :- " << h1->health << endl;
    return 0;
}