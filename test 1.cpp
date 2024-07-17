//Write a program to display the array element.
#include <iostream>
using namespace std;

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; ++i) {
        cout<<"Enter the element"<<endl;
		cin >> arr[i];
    }

    cout << "Array elements: ";
    displayArray(arr, n);

    return 0;
}
