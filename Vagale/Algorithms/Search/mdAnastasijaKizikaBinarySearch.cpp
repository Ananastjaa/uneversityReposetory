#include <iostream>
#include <string>

using namespace std;

const int N = 100;

string binarySearch(int num, int array[], int arrayLength) {
    int left = 0, right = arrayLength - 1, middle;

    while (left <= right)
    {
        middle = (right + left) / 2;
        if (array[middle] == num) return "Atrada!";
        else if (array[middle] > num) right = middle - 1;
        else left = middle + 1;
    }

    return "Neatrada";
}

int main()
{
    int arraySize, searchedNum;
    int numArray[N];

    cout << "Ievadi masiiva izmeeru: ";
    cin >> arraySize;

    for (int i = 0; i < arraySize; i++) {
        numArray[i] = 2*i;
    }

    cout << "\nMasiivs: ";
    for (int i = 0; i < arraySize; i++) cout << " " << numArray[i];

    cout << "\nIevadi mekleejamo skaitli: ";
    cin >> searchedNum;
    cout << endl << binarySearch(searchedNum, numArray, arraySize) << endl;

    return 0;
}