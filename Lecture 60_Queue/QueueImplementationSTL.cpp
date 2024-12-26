#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;

    q.push(11);
    q.push(13);
    q.push(2);

    cout << "Size of the Queue:-" << q.size() << endl;

    q.pop();
    q.front();
    q.back();

    return 0;
}