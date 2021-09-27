#include<iostream>

using namespace std;

int c = 0;
int sw = 0;

int Func(int A[], int l, int h)
{
    int pivot = A[l];
    int i = l, j = h;
    while (i < j)
    {
        do {
            i++;
            c++;
        } while (A[i] <= pivot);
        c--;
        do {
            j--;
            c++;
        } while (A[j] > pivot);
        c--;
        if (i < j) {
            swap(A[i], A[j]);
            sw++;
        }
    }
    swap(A[l], A[j]);
    sw++;
    return j;
}

void QUISort(int A[], int l, int h)
{
    int j;
    if (l < h)
    {
        j = Func(A, l, h);
        QUISort(A, l, j);
        QUISort(A, j + 1, h);
    }
}

int main()
{
    int t;
    //cout << "\nEnter the total number of test cases : ";
    cin >> t;
    while (t--)
    {
        int n;
        //cout << "\nEnter the size of the array : ";
        cin >> n;
        int* A = new int[n];
        //cout << "\nEnter the elements in the array : ";
        for (int i = 0; i < n; i++)
            cin >> A[i];
        QUISort(A, 0, n);
        for (int i = 0; i < n; i++)
            cout << A[i] << " ";
        cout << endl;
        cout << "\nCOMPARISONS :  " << c ;
        cout << "\nSWAPS :  " << sw ;
    }
}