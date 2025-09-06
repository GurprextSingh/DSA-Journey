// WAP to find Single Number in a Vector
#include <iostream>

#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    int size,input;
    cout << "Enter size of Vector: ";
    cin >> size;
    cout<<"Enter "<<size<<" values: "<<endl;
    for (int i = 0; i < size; i++)
    {   cin>>input;
      vec.push_back(input);
    }
    cout<<"Entered values are :";
    for (int val:vec)
    {
       cout<<val<<" ";
    }
    cout<<endl;
    int nums=0;
    for (int val:vec)
    {
      nums=nums^val;
    }
    
    cout<<"The Single Number in vector is: "<<nums<<endl;
    
}