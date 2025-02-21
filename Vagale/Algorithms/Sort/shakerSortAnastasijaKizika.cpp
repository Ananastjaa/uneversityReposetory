#include <iostream>

using namespace std;
const int N = 50;

void shakerSort(int arr[], int n);
void printArray(int arr[], int n);

int main()
{
    int arr[N];
    int n;

    cout << "Ievadi masiva izmeru: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Iavadi masiva " << i + 1 << ". elementu: ";
        cin >> arr[i];
    }

    cout << "Masivs: ";
    printArray(arr, n);
    cout << endl;

    shakerSort(arr, n);

    cout << "Sakartots masivs: ";
    printArray(arr, n);

    return 0;
}

void bubbleRight(int j, int end, int arr[], int& swapCount, int& comperisonCount, bool& changed)
{
    for (j; j < end; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
            swapCount++;
            changed = true;
        }
        comperisonCount++;
    }
}

void bubbleLeft(int j, int end, int arr[], int& swapCount, int& comperisonCount, bool& changed)
{
    for (j; j > end; j--)
    {
        if (arr[j] < arr[j - 1])
        {
            swap(arr[j], arr[j - 1]);
            swapCount++;
            changed = true;
        }
        comperisonCount++;
    }
}

void shakerSort(int arr[], int n)
{
    int i, comperisonCount = 0, swapCount = 0, leftBound = 0, rightBound = n - 1;
    bool goRight = true, changed = true;

    for (i = 0; i < n - 1 && changed; i++)
    {
        changed = false;
        if (goRight)
        {
            bubbleRight(leftBound, rightBound, arr, swapCount, comperisonCount, changed);
            printArray(arr, n);
            //cout << "\tgo from " << leftBound << " to " << rightBound;
            rightBound--;
        }
        else
        {
            bubbleLeft(rightBound, leftBound, arr, swapCount, comperisonCount, changed);
            printArray(arr, n);
            //cout << "\tgo from " << rightBound << " to " << leftBound;
            leftBound++;
        }
        goRight = !goRight;
    }

    cout << endl << "salidzinajumu skaits: " << comperisonCount << " apmainu skaits: " << swapCount << endl;
}

void printArray(int arr[], int n)
{
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}