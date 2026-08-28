#include<iostream>
#include<vector>

using namespace std;
void merge(int *arr,int si,int mid,int ei){
    vector<int> temp;
    int i=si;
    int j=mid+1;
    while(i<=mid && j<=ei){
        if(arr[i]<arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=ei){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=si;k<=ei;k++){
        arr[k]=temp[k-si];
    }
    cout << "Merged from " << si << " to " << ei << endl;
}


void mergesort( int *arr,int si,int ei){
    if(si>=ei){
        return;
    }
    int mid= si +(ei-si)/2;
    mergesort(arr,si, mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,mid,ei);

}
int main(){

    int arr[5]={5,3,4,1,8};
    mergesort(arr,0,4);

    cout << "Sorted array: ";
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}