#include<iostream>
using namespace std;
int selectionSort(int array[], int n){
    for(int i = 0; i < n; i++){
        int minIdx = i;
        for(int j = i+1;j<n;j++){
            if (array[minIdx] > array[j]){
                minIdx = j;
            }
        }
        int temp = array[i];
        array[i] = array[minIdx];
        array[minIdx] = temp;
    }
    return *array;
}

int main() {
    int arr[] = {34, 83, 46, 13, 42, 4, 97};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Selection Sort : ";
    cout << "Before Sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    selectionSort(arr, n);
    
    cout << "After Sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
