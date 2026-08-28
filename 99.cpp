#include<iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int n = 4;
    cout << "Enter the key";
    int key;
    cin >> key;
    for(int i=0;i<n;i++){
        int high=n-1;
        int low=0;
        while(low<=high){
            int mid =low+high/2;
            if(key==arr[i][mid]){
                    cout<<"Element found at "<<i<<","<<mid;   
break;
         }
         else if(key<mid){
            high=mid-1;

         }
         else{
            low=mid+1;
         }
            
         }
        }
    }






