#include <iostream>

using namespace std;

int partition(int a[], int left, int right) {
    int pivot = --right;
    while (true) {
        while (a[left] < a[pivot])
            ++left;
        while (left < right && a[right - 1] >= a[pivot])
            --right;
        if (left >= right)
            break;
        swap(a[left], a[right - 1]);
    }
    swap(a[left], a[pivot]);
    return left;
}

int main() {
  int arr[10] = {88, 34, 77, 20, 53, 45, 12, 76, 29, 61};
    partition(arr, 0, 10);
    for(auto& i : arr) {
        cout << i << '\n';
    }
}
