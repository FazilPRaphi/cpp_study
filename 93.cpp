#include<iostream>
using namespace std;
int main(){
    int student[3][3]={{78,81,90},{73,31,46},{57,83,86}};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<student[i][j]<<" ";
        }
        cout<<endl;
    }
}