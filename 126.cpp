#include <iostream>
using namespace std;
int show(int n){
    if(n==0){
        return 0;

    }
    else{
        cout<<n<<" ";
        return show(n-1);
    }
}
int main(){
    int n=20;
    int m=show(n);
    cout<<m;
}