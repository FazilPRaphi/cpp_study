#include<iostream>
#include<vector>
#include<string>
using namespace std;


class Heap{
    vector<int> vec;

    public:
    void push(int val){
        vec.push_back(val);

        int x= vec.size()-1;
        int parI= (x-1)/2;

        while(parI>=0  && vec[x] > vec[parI]){
            swap(vec[x],vec[parI]);
            x=parI;
            parI = (x - 1) / 2;
        }
    }
    void heapify(int i){
        if(i>=vec.size()){
            return;
        }

        int l=2*i+1;
        int r=2*i+2;

        int maxidx= i;
        if(l<vec.size() && vec[l]>vec[maxidx]){
            maxidx= l;
        }
        if(r<vec.size() && vec[r]>vec[maxidx]){
            maxidx= r;
        }
        swap(vec[i],vec[maxidx]);
        if(maxidx!=1){

        }


    }

    void pop(){
        swap(vec[0],vec[vec.size()-1]);
        vec.pop_back();
        heapify(0);
    }

    int top(){
        return vec[0];
    }

    bool empty(){
        return vec.size()==0;
    }
};
int main(){
    Heap heap;
    heap.push(50);
    heap.push(51);
    heap.push(54);
    heap.push(53);
   cout<<  heap.top();

    return 0;
}