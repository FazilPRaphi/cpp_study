#include<iostream>
using namespace std;
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=4;
    int m=4;
    int srow=0,scol=0;
    int erow=n-1,ecol=m-1;
    while(erow>=srow && ecol>=scol){
        for(int j=scol;j<=ecol;j++){
            cout<<arr[srow][j]<<" ";
        }
        for (int i = srow+1; i <= erow; i++)
        {
            cout << arr[i][ecol] << " ";
        }
        for (int j = ecol-1; j >=scol; j--)
        {
            if(srow==erow){
                break;
            }
            cout << arr[erow][j] << " ";
        }
        for (int i = erow -1; i >= srow; i--)
        {
            if (scol == ecol)
            {
                break;
            }
            cout << arr[i][scol] << " ";
        }

        srow++;
        scol++;
        erow--;
        ecol--;
}
}