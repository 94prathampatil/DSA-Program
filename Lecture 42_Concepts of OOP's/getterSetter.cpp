#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // properties
public:
    char level = 'A';
    int health;
    char *name;

    // private:     <--- Unable to print the private variable outside the class
    void acess()
    {
        cout << level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }

    void setHealth(int h)
    {
        health = h;
    }

    void setLevel(char l)
    {
        level = l;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('B');
    cout << "Getting health:- " << h1.getHealth() << endl;
    cout << "Getting level:- " << h1.getLevel() << endl;
    // cout << h1.health << endl;
    // cout << h1.level << endl;
    // h1.acess();
    return 0;
}