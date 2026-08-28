#include<iostream>
#include<vector>
using namespace std;
class Heap{
    vector<int>  vec;



    public:
         void push(int val){
                vec.push_back(val);
                int x= vec.size()-1;
                int parI= (x-1)/2;

                while( parI>=0 && vec[x]< vec[parI]){
                    swap(vec[x] , vec[parI]);
                    x=parI;
                    parI = (x - 1) / 2;
                }


         }

         void pop(){


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
    cout << heap.top();

    return 0;
}