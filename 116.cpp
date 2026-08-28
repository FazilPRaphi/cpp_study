#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the number of rows and cols : ";
    cin>>row>>col;
    int* *matrix=new int*[row];

    for(int i=0;i<row;i++){
        matrix[i]=new int[col];
    }

    int x=0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=x;
            cout<<matrix[i][j]<< "    ";
            x++;
        }
        cout<<endl;
    }

    for (int i = 0; i < row; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}