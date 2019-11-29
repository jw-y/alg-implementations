#include <iostream>

#include "QuickSort.h"

using namespace std;

int main(){
    int arr[] = {10, 80, 30, 90, 40, 50, 70, 70};

    QuickSort sort;

    for (int i = 0; i < 8; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;

    sort.sort(arr, 0, 7);

    for(int i=0; i<8; i++){
        cout << arr[i]<<" ";
    }
    cout << endl;
}