//WAP to find Fibonacci series for a given number;
#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    int a=0,b=1;
    cout<<"Fibnacci Series: ";
    for (int i =0; i < num; i++)
    {
    cout<<a<<" "<<endl;;
       int c=a+b;
       a=b;
       b=c;
    }
   
}