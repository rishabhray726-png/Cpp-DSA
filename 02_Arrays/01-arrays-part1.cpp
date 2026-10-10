#include <iostream>
using namespace std;

int main() {
    int marks[] = {92, 80, 77, 98, 65};
    marks[0] = 100;
    for (int i = 0; i < size(marks);i++) {
        cout << marks[i] << "\n";
    }
}