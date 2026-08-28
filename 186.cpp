#include<iostream>
#include<queue>

using namespace std;
int main(){
    priority_queue <int> pq;
    pq.push(1);
    pq.push(10);
    pq.push(3);
    pq.push(7);
    pq.push(15);
    pq.push(2);
    pq.push(20);
    pq.push(8);
    pq.push(5);
    pq.push(12);
    pq.push(18);
    pq.push(6);
    pq.push(14);
    pq.push(9);
    pq.push(4);
    pq.push(11);
    pq.push(13);
    pq.push(17);
    pq.push(16);
    pq.push(19);

    while(!pq.empty()){
        cout<<"pq top :  "<<pq.top()<<endl;
        pq.pop();
    }
  //  cout<<pq.top()<<"" ;
    return 0;
}
