#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
    return p1.second<p2.second;
}
int main(){
    vector<int> first ={0,1,3};
    vector<int> second ={9,2,4};
    vector<pair<int,int>> activity(3,make_pair(0,0));
    activity[0]={0,9};
    activity[1]={1,2};
    activity[2]={3,4};
    for(int i=0;i<activity.size();i++){
        cout<<activity[i].first<<" , "<<activity[i].second<<endl;
       }

    sort(activity.begin(),activity.end(),compare);

    cout<<"------sorted-------"<<endl;
    for (int i = 0; i < activity.size(); i++)
    {
        cout << activity[i].first << " , " << activity[i].second << endl;
    }
    return 0;
}
