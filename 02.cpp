// 分治算法

// 合并排序

#include <iostream>
#include <vector>


using namespace std;

// 对一个数组进行排序
void merge(int a[], int low, int mid, int high);
void mergeSort(int a[], int low, int high);



int main() {
    int arr[] = { 1, 7, 5, 8, 4, 6 };
    int low = 0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int mid = high / 2;
    // cout << mid;
    // merge(arr, low, mid, high);

    mergeSort(arr, low, high);

    for (int i = 0; i <= high; i++) {
        cout << arr[i] << " ";
    }

}


void merge(int a[], int low, int mid, int high) {
    int* b = new int[high - low + 1];
    int i = low, j = mid + 1, k = 0;

    while (i <= mid && j <= high) {
        if (a[i] > a[j]) {
            b[k++] = a[j++];
        }
        else {
            b[k++] = a[i++];
        }
    }
    while (i <= mid) b[k++] = a[i++];
    while (j <= high) b[k++] = a[j++];

    for (i = low, k = 0; i <= high; i++) {
        a[i] = b[k++];
    }
    delete[] b;
}

void mergeSort(int a[], int low, int high) {
    if (low < high) {
        int mid = (low + high) / 2;
        mergeSort(a, low, mid);
        mergeSort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}