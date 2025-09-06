// WAP to reverse an Array
#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter Size of Array: " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter "<<size <<" elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout<<"Original Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    int start = 0, end = size - 1;
    while (start < end) //Reverse 
    {
        swap(arr[start], arr[end]);
        start++, end--;
    }
    cout<<"Reversed Array: ";
    for (int i = 0; i < size; i++)
    {
       
        cout << arr[i]<<" ";
    }
  
}
