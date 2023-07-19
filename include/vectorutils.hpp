#include <iostream>
#include <vector>
using namespace std;

typedef std::vector<int> Vector;

void printVector(Vector vector)
{
  cout << "{ ";
  for (int i = 0; i < vector.size(); i++)
  {
    if (i != vector.size() - 1)
    {
      cout << vector[i] << ", ";
    }
    else
    {
      cout << vector[i];
    }
  }
  cout << " }\n";
}