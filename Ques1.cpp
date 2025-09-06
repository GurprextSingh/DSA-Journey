//WAP to find smallest/ Largest in Array
#include<iostream>
#include<climits>
using namespace std;
int main(){
  // -infinite = INT_MAx
  int size;
  cout<<"Entter size of Array: "<<endl;
  cin>>size;
  int nums[size];
  
  int smallest =INT_MAX;
  int largest =INT_MIN;
  cout<<"Enter Value for array"<<endl;
  for (int i = 0; i <size; i++)
  {
    cin>>nums[i];
  }
  cout<<"You Entered: "<<endl;
  for (int i = 0; i <size; i++)
  {
   cout<<nums[i]<<"\n";
  }
  for (int i = 0; i <size; i++)
  {
    //  smallest=min(nums[i],smallest);
     if (nums[i]<smallest)
     {
       smallest=nums[i];
     }
     if (nums[i]>largest)
     {
       largest=nums[i];
     }
     
     
  }
  cout<<"Smallest Number is: "<<smallest<<endl;
  cout<<"Largest Number is: "<<largest<<endl;
}