#include <iostream>
#include <string>

using namespace std;

const int N = 100;

string interpolationSearch(int num, int array[], int arrayLength) {
    int left = 0, right = arrayLength - 1, pos;

    while (left < right)
    {
        pos = left + (num - array[left]) * (right - left) / (array[right] - array[left]);
        if (array[pos] == num) return "Atrada!";
        else if (array[pos] > num) right = pos - 1;
        else left = pos + 1;
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
    cout << endl << interpolationSearch(searchedNum, numArray, arraySize) << endl;

    return 0;
}