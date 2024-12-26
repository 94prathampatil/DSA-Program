#include <bits/stdc++.h>
using namespace std;

class Hero
{

    // Properties
    /*
        Static datatypes declare inside the class and intialize outside the class
        static function only access static variables
        static function has no need to create the obejct to acess them 
        it has no THIS Keyword.
    */
public:
    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }
};

int Hero ::timeToComplete = 10;
int main()
{
    cout << Hero::timeToComplete << endl;
    cout << Hero::random() << endl;
    
    return 0;
}