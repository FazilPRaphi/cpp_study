#include<iostream>
#include<list>
#include<iterator>

using namespace std;
int main(){
    list<int> ll;
    list<int> :: iterator itr;
    ll.push_front(2);
    ll.push_front(3);
    ll.push_front(4);
    ll.push_front(5);
    ll.push_front(6);

    ll.push_back(1);
    for (list<int>::iterator itr = ll.begin(); itr != ll.end(); ++itr){

        cout<<*itr<<" ";
    }
    cout<<endl;
    cout<<ll.front()<<" ";
    cout<<ll.back();
    cout<<endl;
    ll.insert(ll.begin(),1);
    for (list<int>::iterator itr = ll.begin(); itr != ll.end(); ++itr)
    {

        cout << *itr << " ";
    }
        return 0;


}
