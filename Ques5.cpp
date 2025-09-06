//WAP to find a target Value in an Array
#include<iostream>
using namespace std;
int linearSearch(int arr[], int sz, int target){
    for(int i=0;i<sz;i++){
        if (arr[i]==target)
        {
           return i;
        }
        
    }
    return -1;
} 

int main(){
    int size;
    cout<<"Enter Size of array: ";
    cin>>size;
    int arr[size];
   cout<<"Enter Values:"<<endl;
    
    for (int i = 0; i < size; i++)
     {
        cin>>arr[i];
    }
    int target;
    cout<<"Enter Target Value: "<<endl;
    cin>>target;
    int index =linearSearch(arr,size,target);
    if (index!=-1)
    {
       cout<<"Target found at index: " << index << endl;
    } else {
        cout << "Target not found in the array." << endl;
    }

    return 0;
}

    

       
