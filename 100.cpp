#include <iostream>
using namespace std;
int main()
{
    int arr[4][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}, {32, 33, 39, 50}};
    int n = 4;
    cout << "Enter the key";
    int key;
    cin >> key;
    int row=0;
    int col=n-1;
    while(row<n && col>=0 ){
        if(key==arr[row][col]){
            cout<<"Element found at "<<row<<" ,"<<col;
            break;
        }
        else if(key<arr[row][col]){
            col--;
        }
        else{
            row++;
        }
    }

}
