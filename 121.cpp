#include <iostream>
#include<vector>
using namespace std;
vector<int> pairsum(vector<int> vec,int target){
    int st=0;
    int end=vec.size()-1;
    int currsum=0;
    vector<int> ans;
    while(st<=end){

        currsum=vec[st]+vec[end];
        if(target==currsum){
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        if(target<currsum){
            end--;
        }
        else{
            end++;
        }
    }
}
int main()
{
    vector<int> vec={2,7,11,15};
    int target=9;
    vector<int> ans2=pairsum(vec,target);
    for(int i=0;i<ans2.size();i++){
        cout<<i<<" ";

    }
}