#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> A ={ 1,2,3};
    vector<int> B ={ 3,1,2};


    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    int abdiff=0;
    for(int i=0;i<A.size();i++){
        abdiff+=abs(A[i]-B[i]);
    }
    cout<<abdiff;

    return 0;
}