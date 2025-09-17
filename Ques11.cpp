// Write a program to find second largest element in array

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;

    cout << "Enter Size of Array: " << endl;
    cin >> n;
    int arr[n];

    cout << "Enter " << n << "values: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
    int Max,SMAx, Min= INT_MIN;
    for (int i = 0; i <n; i++)
    {
        if (arr[i]>Min)
        {
          Max= arr[i];
        }
        
    }
    cout<<"Largest Element in array is: "<<Max<<endl;
     for (int i = 0; i <n; i++)
    {
        if (arr[i]>Min&&arr[i]!=Max)
        {
          SMAx= arr[i];
        }
        
    }
    cout<<"2nd Largest in array is: "<<SMAx;
    
}