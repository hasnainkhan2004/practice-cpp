#include <iostream>
using namespace std;
int binsearch(int arr[], int n, int data) {
int l = 0, r = n - 1;
while (l <= r) {
int mid = (l + r) / 2;
if (data == arr[mid]) {
return mid;
} else if (data < arr[mid]) {
r = mid - 1;
} else {
l = mid + 1;
}
}
return -1;
}
int main() {
int arr[10] = {12, 14, 40, 54, 77, 92, 102, 113, 117};
int n = sizeof(arr) / sizeof(arr[0]);
cout << "Enter the number you want to find: ";
int data;
cin >> data;
int index = binsearch(arr, n, data);
if (index != -1) {
cout << "Number found at index: " << index << endl;
} else {
cout << "Number not found in the array." << endl;
}
return 0;
}