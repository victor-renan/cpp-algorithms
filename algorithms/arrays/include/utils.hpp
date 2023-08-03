#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> vec)
{
  cout << "{ ";
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << " ";
  }
  cout << "}\n";
}