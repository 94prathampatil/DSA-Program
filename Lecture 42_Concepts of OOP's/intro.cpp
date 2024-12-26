#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // properties
    char level = 'A';
    public:
    int health;
    
    // private:     <--- Unable to print the private variable outside the class.
    void acess(){
        cout << level << endl;
    }
};

int main()
{
    Hero h1;
    cout << h1.health << endl;
    // cout << h1.level << endl;
    h1.acess(); 
    return 0;
}