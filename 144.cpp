#include<iostream>
using namespace std;
void printArr(int su[][9]){
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<su[i][j]<< " ";
        }
        cout<<endl;
    }
}
bool safe(int su[9][9],int row,int col,int digit){
    for(int i=0;i<=8;i++){
        if(su[i][col]==digit){
            return false;
        }
    }
    for(int i=0;i<=8;i++){
        if(su[row][i]==digit){
            return false;
        }
    }
    int startRow= (row/3)*3;
    int startCol =(col/3)*3;
    for(int i=startRow;i<=startRow+2;i++){
        for(int j=startCol;j<=startCol+2;j++){
            if (su[i][j] == digit)
            {
                return false;
            }
        }
    }
    return true;
}
bool sudu(int su[9][9],int row,int col){
        if(row==9){
            printArr(su);
            return true;
        }
    int nextRow=row;
    int nextCol=col+1;

    if(col+1==9){
        nextRow= row+1;
        nextCol=0;
    }

    if(su[row][col]!=0){
       return sudu(su,nextRow,nextCol);
    }
    for(int digit=1;digit<=9;digit++){
        if(safe(su,row,col,digit)){
            su[row][col]=digit;
            if (sudu(su, nextRow, nextCol)){
                return true;
            }
            su[row][col]=0;
        }
    }
    return false;
}

int main(){
    int su[9][9] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}};
        sudu(su,0,0);
        return 0;
};