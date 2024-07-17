//Write a program to find the count of 3 multiples in a given input integer array. 
#include <iostream>
using namespace std;

bool isValid(int arr[], int size) {
    if (size <= 0) return false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) return false;
    }
    return true;
}

int divisibleBy3(int arr[], int size) {
    if (!isValid(arr, size)) {
        cout << "Invalid Input" << endl;
        return -1;
    }

    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 3 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    if (n <= 0 || n > 20) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int arr[n];

    for (int i = 0; i < n; ++i) {
    	cout<<"Enter the elements"<<endl;
        cin >> arr[i];
    }

    int count = divisibleBy3(arr, n);
    if (count != -1) {
        cout << "Count of 3 multiples: " << count << endl;
    }

    return 0;
}
