#include <bits/stdc++.h>
using namespace std;

class Student
{

    public:
        int prn;
        string name;

    void examing(string name){
        this->name = name;
        if(this-> name == "Prathamesh"){
            cout << "Prathamesh is Attempting the exam" << endl;
        }
    }
};

class teacher:public Student{

    public:
        string subject;
    
    void examing(string subject){
        this->subject = subject;
        if(this -> subject == "TOC"){
            cout << "Teacher is setting the paper of TOC" << endl;
        }
        else{
            cout << "Failed" << endl;
        }
    }
};
int main()
{
    teacher t;
    t.examing("TOC");
    return 0;
}