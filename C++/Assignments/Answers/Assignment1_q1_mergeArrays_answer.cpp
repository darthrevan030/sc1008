///////// Student Info/////////
//
//           Your Name: Samarth Bhatia
//      Your NTU Email: samarth009@e.ntu.edu.sg
//
//
//


#include <iostream>
#include <string>
using namespace std;

////// To-do: Write Your Code Here//////////////
// Template function mergeArrays()  to merge two arrays
template <typename T>
T* mergeArrays(T* arr1, int size1, T* arr2, int size2, T*& mergedArray){
    int i, j;
    
    mergedArray = new T[size1 + size2];
    
    for (i = 0; i < size1; i++){
        mergedArray[i] = arr1[i];
    }
    for (j = 0; j < size2; j++){
        mergedArray[size1 + j] = arr2[j];
    }

    return mergedArray;
}


////// To-do: Write Your Code Here//////////////
// Template function printAndDeallocate() to print and deallocate the merged array
template <typename T>
void printAndDeallocate(T* mergedArray, int size) {
    if (mergedArray != nullptr) {
        for (int i = 0; i < size; i++) {
            cout << mergedArray[i];
            if (i < size - 1){
                cout << " ";
            }
        }
        cout << endl;
        delete[] mergedArray;
    } else {
        cout << "Empty array" << endl;
    }
}


int main() {
    // Case 1: Integers
    int* arr1 = new int[3];
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;
    int size1 = 3;
    int arr2[] = {4, 5, 6};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int* mergedArray = nullptr;
    // Merging arrays
    mergeArrays(arr1, size1, arr2, size2, mergedArray);
    // Printing and deallocating the merged array
    printAndDeallocate(mergedArray, size1 + size2);
    delete[] arr1;

    // Case 2: doubles
    double arr3[] = {1.1, 2.2, 3.3};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    double arr4[] = {4.4, 5.5};
    int size4 = sizeof(arr4) / sizeof(arr4[0]);
    double* mergedArray2 = nullptr;
    mergeArrays(arr3, size3, arr4, size4, mergedArray2);
    printAndDeallocate(mergedArray2, size3 + size4);

    return 0;
}