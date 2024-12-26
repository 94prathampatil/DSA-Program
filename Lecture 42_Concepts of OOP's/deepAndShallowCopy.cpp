#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // properties
public:
    char level = 'A';
    int health;
    char *name;

    Hero()
    {
        name = new char[100];
    }

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

    void print()
    {
        cout << endl;
        cout << "[ Name:- " << this->name << ", ";
        cout << "health:- " << this->health << ", ";
        cout << "level:- " << this->level << " ]";
        cout << endl
             << endl;
    }

    Hero(Hero &temp)
    {
        char *ch = new char[strlen(temp.name) + 1]; // Example of Deep Copy.
        strcpy(ch, temp.name);
        this->name = ch;
        this->health = temp.health;
        this->level = temp.level;
    }
};

int main()
{
    Hero h1;

    h1.setHealth(70);
    h1.setLevel('A');
    char name[10] = "Rajesh";
    h1.setName(name);

    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'S'; // Example of Shallow Copy
    h1.print();
    h2.print();
    /*
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('B');
    cout << "Getting health:- " << h1.getHealth() << endl;
    cout << "Getting level:- " << h1.getLevel() << endl;
    // cout << h1.health << endl;
    // cout << h1.level << endl;
    // h1.acess();
    */
    return 0;
}