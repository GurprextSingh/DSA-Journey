// WAP to find a target vaule in a vector (it should be dynamic)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;
  int n, input, target;

  cout << "Enter number of elements: ";
  cin >> n;

  cout << "Enter " << n << " elements:\n";
  for (int i = 0; i < n; i++)
  {
    cin >> input;
    vec.push_back(input);
  }
  cout<<"Enter values are: "<<endl;
  for (int val : vec)
  {
    cout << val << " ";
  }

  cout << "Enter the target value to count: ";
  cin >> target;
  cout << target << " is at below indices: " << endl;
  for (int i = 0; i < vec.size(); i++)
  {
    if (vec[i] == target)
    {
      cout << i << " " << endl;
    }
    else{
      cout<<"NO Index";
    }

  }
}
