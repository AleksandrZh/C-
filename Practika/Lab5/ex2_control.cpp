#include <iostream>

using std::cout;
using std::endl;

int* maxVect(int, int[], int[]);

int main() {
    int a[] = { 1,2,3,4,5,6,7,2 };
    int b[] = { 7,6,5,4,3,2,1,3 };
    int kc = sizeof(a) / sizeof(a[0]);
    int* c;
    c = maxVect(kc, a, b);
    for (int i = 0; i < kc; i++)
        cout << c[i] << " ";
    cout << endl;
    delete[]c;
}

int* maxVect(int len, int arr1[], int arr2[]) {
    int* array = new int[len];

    for (int i = 0; i < len; i++) {
        if (arr1[i] > arr2[i]) {
            array[i] = arr1[i];
        } else {
            array[i] = arr2[i];
        }
    }

    return array;
}