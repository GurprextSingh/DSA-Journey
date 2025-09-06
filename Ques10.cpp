// WAP to find maximum subarray sum using Kadane's Algorithm
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[6]={2,-2,1,-3,5,8};
    int maxs =INT_MIN,currSum=0;
    for (int i = 0; i <6; i++)
    {
     currSum+=arr[i];
     maxs= max(currSum ,maxs);
     if (currSum<0)
     {
        currSum=0;
     }
     
    }
    cout<<maxs;
}