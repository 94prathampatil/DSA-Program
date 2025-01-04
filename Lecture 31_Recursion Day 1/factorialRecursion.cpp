#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 1)
        return 1;

    int smallProblemSolution = fact(n - 1);              //dividing problem solution 
    int bigProblemSolution = n * smallProblemSolution;
    return bigProblemSolution;

    // return n * fact(n - 1);
}
int main()
{
    int n = -1;
    cout << "Enter the number:-";
    cin >> n;

    cout << "Factorial of Entered Number is:- " << fact(n) << endl;
    return 0;
}