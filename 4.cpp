// You are given an array of elements. Now you need to choose the best index of this array. An index of the array is called best if the special sum of this index is maximum across the special sum of all the other indices. To calculate the special sum for any index you pick the first element that is and add it to your sum. Now you pick next two elements i.e., and and add both of them to your sum. Now you will pick the next elements, and this continues till the index for which it is possible to pick the elements. 
//Find the best index and in the output print its corresponding special sum. Note that there may be more than one best index, but you need to only print the maximum special sum.
// Input First line contains an integer as input. Next line contains space separated integers denoting the elements of the array 
// Output In the output you have to print an integer that denotes the maximum special sum


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSS=0;
    for(int i=0;i<n;i++){
        int sum=0;
        int groupSize=1;
        int index=i;
        while(index+groupSize<=n){
            for(int j=0;j<groupSize;j++){
                sum+=arr[index+j];
            }
            index+=groupSize;
            groupSize+=1;
        }
        if (sum>maxSS)
        {
            maxSS=sum;
        } 
    }
    cout<<maxSS<<endl;
    return 0;
}