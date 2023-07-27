
#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        
        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int even[5] = {1, 2, 3, 3, 5};
    
    cout << "First occurrence at index: " << firstOccurrence(even, 5, 3) << endl;
    cout << "Last occurrence at index: " << lastOccurrence(even, 5, 3) << endl;
}