#include <iostream>
#include <vector>
using namespace std;
void printboard(vector<vector<char>> chessboard ) {
    int n = chessboard.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<chessboard[i][j]<<" ";
        }
        cout<<endl;
        };
        cout<<"++++++++++++++++++++++++++++++++"<<endl;

    };

    bool issafe(vector<vector<char>> chessboard, int row,int col){
        for(int j=0;j<chessboard.size();j++){
            if(chessboard[row][j]=='Q'){
                return false;
            }
        }
        for(int i=0;i<row;i++){
            if (chessboard[i][col] == 'Q')
            {
                return false;
            }
        }
int k;
        for(int i=row, k=col;i>=0 &&  k>=0 ;i--,k--){
            if (chessboard[i][k] == 'Q')
            {
                return false;
            }
        }

        for(int i=row,k=col;i>=0 && k<chessboard.size();i--,k++){
            if (chessboard[i][k] == 'Q')
            {
                return false;
            }
        }
        return true;
        
    }

        void Nqueens(vector<vector<char>> chessboard, int row)
    {
        int n=chessboard.size();

        if(row==n){
            printboard(chessboard);
                return;
            };
            for (int j = 0; j < n; j++)
            {
                if(issafe(chessboard,row,j)){
                chessboard[row][j]='Q';
                Nqueens(chessboard,row+1);
                chessboard[row][j]='.';
            }
        }

        
        }
    
int main()
{
    vector<vector<char>> chessboard;
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        vector<char> newRow;
        for (int j = 0; j < n; j++)
        {
            newRow.push_back('.');
        }
        chessboard.push_back(newRow);
    }
    Nqueens(chessboard,0);
}