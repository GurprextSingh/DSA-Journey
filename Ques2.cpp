// WAP to find sum of digits of a number
#include<iostream>
using namespace std;
int main(){
    int num, sum=0;
    cout<<"Enter a Number: "<<endl;
    cin>>num;
    while (num!=0)
    {
        int digit = num%10; //get last digit
        sum+=digit; //add to sum
        num/=10;// remove last digit 
    }
    cout<<"Sum of digit: "<<sum<<endl;

}