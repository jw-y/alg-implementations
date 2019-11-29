#include <iostream>
#include <assert.h>

using namespace std;

class QuickSort{
public:
    QuickSort(){
    }
    void sort(int arr[], int low, int high){
        if(low<high){
            int pivot = partition(arr, low, high);

            sort(arr, low, pivot - 1);
            sort(arr, pivot + 1, high);
        }
    }
    int partition(int arr[], int low, int high){
        int pivot = arr[high];
        int i = low;

        for(int j=low; j<=high-1;j++){
            if(arr[j]<pivot){
                swap(arr, i, j);
                i++;
            }
        }
        swap(arr, high, i);

        return i;
    }
    void swap(int arr[], int i, int j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
};