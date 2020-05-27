#include <iostream>

using namespace std;
template <class T>
void insertionSort(T a[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

              while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j = j - 1;
        }
        a[j + 1] = key;
    }
}
template <class T>
void printElem(T a[], int n)
{
    cout << " Sorted array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
int main()
{
    int a[5] = {10, 50, 30, 40, 20};
    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);

    printElem(a,n);

    char b[5] = {'b', 'a', 'h', 'n', 't'};
    int arr_size = sizeof(b) / sizeof(b[0]);
    insertionSort(b,arr_size);
    printElem(b,n);


  return 0;

    return 0;
}
