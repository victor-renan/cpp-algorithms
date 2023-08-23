#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> array, int item) {
  int start = 0,
      end = array.size() - 1;
      
  while (start < end) {
    int mid = start + (end - start) / 2;
    
    if (array[mid] == item) {
      return mid;
    }
    else if (array[mid] < item) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
  }

  return -1;
}

int main() {
  cout << binarySearch({1, 3, 5, 7, 9}, 7) << endl;
  return 0;
}