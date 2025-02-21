#include <iostream>

using namespace std;
const int N = 50;

void bubbleSort(int arr[], int n);
void bubbleSort2(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[N], arr1[N];
    int n;

    cout << "Ievadi masīva izmēru: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Iavadi masīva " << i + 1 << ". elementu: ";
        cin >> arr[i];
    }

    copy(begin(arr), end(arr), begin(arr1));

    cout << "Masīvs: ";
    printArray(arr, n);
    cout << endl << "bubble sort1 : ";

    bubbleSort(arr, n);

    cout << endl << "Masivs sakartots no kreisas uz labo pusi: ";
    printArray(arr, n);

    cout << endl << endl << "bubble sort2 : ";
    bubbleSort2(arr1, n);

    cout << endl <<"Masīvs sakartots no labas uz kreiso pusi: ";
    printArray(arr1, n);

    return 0;
}
void bubbleSort(int arr[], int n)
{
    int i, j;

    bool changed = true;
    for (i = 0; i < n && changed; i++)
    {
        changed = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                changed = true;
            }
        }
        printArray(arr, n);
    }
}

void bubbleSort2(int arr[], int n)
{
    int i, j;
    bool changed = true;

    cout << endl;
    for (i = n - 1; i >= 0 && changed; i--)
    {
        changed = false;
        for (j = n - 1; j > n - i - 1; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
                changed = true;
            }
        }
        printArray(arr, n);
    }
}

void printArray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
