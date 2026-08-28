#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={1,2,3};
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.push_back(4);
    cout << vec.size() << endl;
    cout << vec.capacity() << endl;  
}