#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
bool compare(pair<double, int> p1, pair<double, int> p2){
return p1.first>p2.first;
}



int knapsack(vector<int> value, vector<int> weight, int w)
{
    int n=value.size();
    int total=0;
    
    vector<pair<double,int>> ratio (n,make_pair(0,0));
    for(int i=0;i<n;i++){
        double r = (double)(value[i] / weight[i]);
        ratio[i] = make_pair(r, i);
    }
    sort(ratio.begin(),ratio.end(),compare);

    for(int i=0;i<n;i++){
        int idx=ratio[i].second;
        if(weight[idx]<=w){
            total+=value[idx];
            w-=weight[idx];
            
        }
        else{
            total+= ratio[i].first * w;
            w=0;
            break;
        }
    }
   return total;


}
int main(){
    vector<int> value={60,100,120};
    vector<int> weight={10,20,30};
    int w = 50;
   cout<< knapsack(value,weight,w);
    return 0;
}