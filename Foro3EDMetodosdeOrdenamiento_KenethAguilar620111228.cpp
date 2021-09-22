#include<bits/stdc++.h>
using namespace std;


//Algoritmo de ordenación binaria
int binarySearch(int a[], int x, int low, int high)
{
    if (high <= low)
        return (x > a[low]) ?
               (low + 1) : low;

    int mid = (low + high) / 2;

    if (x == a[mid])
        return mid + 1;

    if (x > a[mid])
        return binarySearch(a, x,
                            mid + 1, high);
    return binarySearch(a, x, low,
                        mid - 1);
}

void binarySort(int a[], int n)
{
    for (int i = 1; i < n; ++i)
    {
        int j = i - 1;
        int key = a[i];
        int pos = binarySearch(a, key, 0, j);
        while (j >= pos)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {

    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Input arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    binarySort(arr, n); // Sort elements in ascending order
    cout << "Output arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
//Algoritmo ordenamiento burbuja
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main() {

    int n = 5;
    int arr[5] = {5, 3, 4, 2, 1};
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubble_sort(arr, n); // Sort elements in ascending order
    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
//Algoritmo ordenamiento burbuja recursiva
void bubbleSort(int arr[], int n)
{
    if (n == 1)return;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
        }
    }

    bubbleSort(arr, n - 1);
}
int main() {

    int n = 8;
    int arr[8] = {9, 8 , 3 , 7, 5, 6, 4, 1};
    cout << "Input arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    bubbleSort(arr, n); // Sort elements in ascending order
    cout << "Output arr: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
//Algoritmo ordenamiento mezcla
void merge(int arr[], int beg, int mid, int end) {
    int output[end - beg + 1];
    int i = beg, j = mid + 1, k = 0;
    // add smaller of both elements to the output
    while (i <= mid && j <= end) {
        if (arr[i] <= arr[j]) {
            output[k] = arr[i];
            k += 1; i += 1;
        }
        else {
            output[k] = arr[j];
            k += 1; j += 1;
        }
    }
    // remaining elements from first array
    while (i <= mid) {
        output[k] = arr[i];
        k += 1; i += 1;
    }
    // remaining elements from the second array
    while (j <= end) {
        output[k] = arr[j];
        k += 1; j += 1;
    }
    // copy output to the original array
    for (i = beg; i <= end; i += 1) {
        arr[i] = output[i - beg];
    }
    }

    void mergeSort(int arr[], int beg, int end) {

    if (beg < end) {
        int mid = (beg + end) / 2;
        //divide and conquer
        mergeSort(arr, beg, mid);    // divide : first half
        mergeSort(arr, mid + 1, end);  // divide: second half
        merge(arr, beg, mid, end);   // conquer
    }
    }
    int main() {

    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    mergeSort(arr, 0, n - 1); // Sort elements in ascending order
    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
//Algoritmo ordenamiento selección
void selectionSort(int arr[], int n) {
 
    for (int i = 0; i < n-1; i++)  
    {  
        // Find the minimum element for index i  
        int min = i;  
        for (int j = i+1; j < n; j++)  
        if (arr[j] < arr[min])  
            min = j;
        // Put element in sorted position  
        swap(arr[min], arr[i]);  
    }  
}
int main() {

    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    selectionSort(arr, n); // Sort elements in ascending order
    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
//Algoritmo ordenamiento inserción
void insertion_sort(int arr[], int n) {

    for (int i = 1; i < n; i++) 
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) 
        {
            int key = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = key;
            j--;
        }
    }
}

int main() {

    int n = 5;
    int arr[5] = {5, 3, 4, 2, 1};
    cout << "Input array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    insertion_sort(arr, n); // Sort elements in ascending order
    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
