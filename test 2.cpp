//Write a program to find the  max element from the list
#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int n;
    cout<<"enter the number of elements"<<endl;
    cin >> n;

    int arr[n];
    
    for (int i = 0; i < n; ++i) {
    	cout<<"enter the element"<<endl;
        cin >> arr[i];
    }

    int maxElement = findMax(arr, n);
    cout << "the maximum element in the array is: " << maxElement << endl;

    return 0;
}
