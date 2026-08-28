#include<iostream>
#include<string.h>
using namespace std;
class student{
    public : 
    string name;
    int rollno;

    void display(){
        cout<<name<<" "<<rollno;
    }

};
int main(){
    student s1;
    s1.name="Joseph";
    s1.rollno=21;
    s1.display();

}