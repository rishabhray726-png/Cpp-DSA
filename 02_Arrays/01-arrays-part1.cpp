#include <iostream>
using namespace std;

// Q: Find smallest/largest elements in the array
void max_min_elements(int arr[], int n) {
  int min = arr[0];
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    } else if (arr[i] > max) {
      max = arr[i];
    }
  }
  cout << "max: " << max << "min: " << min;
}
// LINEAR SEARCH

int linear_search(int arr[], int n, int target) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == target) {
      return i;
    }
  }
  return -1;
}

int main() {
  int marks[] = {92, 80, 77, 98, 65};
  marks[0] = 100;
  for (int i = 0; i < size(marks); i++) {
    cout << marks[i] << "\n";
  }
  max_min_elements(marks, size(marks));
  return 0;
}
