#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter the year : ";
    cin>>year;
    if(year %400==0){
        cout<<"leap year";

    }
    else if(year %100==0){
        cout<<"Not leap year";

    }
    else if (year %4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"Not leap year";
    }
    
    }
