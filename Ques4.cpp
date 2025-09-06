// WAP to reverse a number
#include <iostream>
using namespace std;
int main()
{
    int num, reverse = 0;
    cout << "Enter a Number: ";
    cin >> num;

    while (num != 0)
    {
        int digit = num % 10;           // Gives last digit
        reverse = reverse * 10 + digit; // Add number;
        num = num / 10;                 // remove digits
    }
    cout << "Reverse of given number is " << reverse;
}