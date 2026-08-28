#include<iostream>
#include<vector>
using namespace std;
int first(vector <int> vec,int key,int i){
    if(i==vec.size()){
        return -1;
    }
    if(key==vec[i]){
        return i;


    }
    return first(vec,key,i+1);
}
int main(){

    vector <int> vec={1,2,3,3,3,4};
    cout<<first(vec,2,0);
}