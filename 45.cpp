#include<iostream>
using namespace std;
void sayHello(){
    cout<<"Hello \n";
}
void assistant(){
    sayHello();
    cout<<"Hi";
}
int main(){
    assistant();

}