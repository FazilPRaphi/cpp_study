#include<iostream>
using namespace std;
int main(){
    float pencil,pen,eraser;
    cout<<"enter the cost of the items";
    cin>>pencil>>pen>>eraser;
    cout<<"Cost after calculation is "<<pen+pencil+eraser<<endl;;
    float x = pen + pencil + eraser;
    float gst = x*.18;
    cout<<"After taxation :"<<gst+x;
}
