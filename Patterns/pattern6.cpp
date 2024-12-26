#include<iostream>
using namespace std;
 
int main()
{
    int n = 0, i = 0;
    cin >> n;

    while (i < n){
        int j = 0;
        while(j<=i){
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
        return 0;
}