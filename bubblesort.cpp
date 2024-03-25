#include<iostream>
using namespace std;
int bubbleSort(int array[], int n){//    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n;i++){
        for(int j = 0; j < n - i - 1;j++){
            if (array[j] > array[j+1]){
                int temp =  array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }           
        }
    }
    return *array;
}
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Bubble Sort : ";
    cout << "Before Sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    bubbleSort(arr, n);
    
    cout << "After Sort : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
