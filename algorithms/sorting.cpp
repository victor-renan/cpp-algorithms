#include <iostream>
#include <vector>
#include <utils.hpp>
using namespace std;

/*
 * Bubble Sort
 *
 * Complexidade de tempo: O(n^2)
 * Complexidade de espaço: O(1)
 */

vector<int> bubbleSort(vector<int> vector)
{
  for (int i = 0; i < vector.size(); i++)
  {
    for (int j = i; j < vector.size(); j++)
    {
      if (vector[i] > vector[j])
      {
        int vecI = vector[i];
        int vecJ = vector[j];
        vector[i] = vecJ;
        vector[j] = vecI;
      }
    }
  }
  return vector;
}

int main()
{
  printVector(
      bubbleSort({1, 5, 12, 7}));

  return 0;
}
