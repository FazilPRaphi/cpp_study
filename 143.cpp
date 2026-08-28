#include<iostream>
#include<string>
#include<vector>
using namespace std;
int ways(int r,int c,int n,int m){
    if(r==n-1 && c==m-1){
        return 1;
    }
    if(c>=m){
        return 0;
    }
    if(r>=n){
        return 0;
    }

    int v1= ways(r+1, c,n,m);
    int v2=ways(r,c+1,n,m);
    return v1+v2;
    
}

int main(){
int n=3;
int m=3;
  cout<<  ways(0,0,n,m);
return 0;

}