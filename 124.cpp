#include<iostream>
using namespace std;
class Car{
    string name;
    int car_model;
    public:
    Car(string carname,int model){
        cout<<"The car is running";
        carname=name;
    car_model=model;
    }

    void display(){
        cout<<name<<endl;
        cout<<car_model<<endl;
    }
    

};
int main(){
    Car c1("Maruti 800",123);
    c1.display();
}