#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> rs={1,2,5,10,20,50,100,500,2000};
    int ans=0;
    int n=rs.size();
    int v=590;

    for(int i=n-1;i>=0 &&v>0;i-- ){
        if(v>=rs[i]){
            ans+= v/rs[i];
            v%=rs[i];
        }
    }

cout<<ans;



    return 0;
}