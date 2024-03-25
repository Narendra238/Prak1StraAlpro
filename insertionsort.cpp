#include<iostream>
using namespace std;
int insertionSort(int array[], int n){
    for(int i = 0; i < n; i++){
        int key = array[i];
        int j = i - 1;
        while (j >= 0  && key < array[j]){
            array[j+1] = array[j];
            j -= 1;
        }
        array[j + 1] = key; 
    }
    return *array;
}
int main() {
    int arr[] = {34, 83, 46, 13, 42, 4, 97};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Insertion Sort : ";
    cout << "Before Sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    insertionSort(arr, n);
    
    cout << "After Sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
