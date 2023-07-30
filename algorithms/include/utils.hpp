#include <iostream>
#include <vector>

using namespace std;

void printVector(vector<int> vec)
{
  cout << "{ ";
  for (int i = 0; i < vec.size(); i++)
  {
    if (i != vec.size() - 1)
    {
      cout << vec[i] << ", ";
    }
    else
    {
      cout << vec[i];
    }
  }
  cout << " }\n";
}