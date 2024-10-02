#include <iostream>
using namespace std;

int smallestNumber(int num[], int size)
{
    int smallestNum = INT8_MAX;
    // int index = 0;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < smallestNum)
        {
            smallestNum = num[i];
            // index = i;
        }

        //    smallestNum = min(num[i], smallestNum);
    }
    return smallestNum;
}

int leanerSearch(int num[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (num[i] == target)
        {
            return i;
        }
    }
    return -1;
}

void reverseArray(int num[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i >= size - 1 - i)
            break;
        int swap[1];
        swap[0] = num[i];
        num[i] = num[size - 1 - i];
        num[size - 1 - i] = swap[0];
    }
}

int main()
{
    int num[] = {12, 32, -43, 23, 43, 53};
    int size = 6;

    // int smallestNum = smallestNumber(num, size);

    // cout << "Smallest Number: " << smallestNum << endl;

    // cout << leanerSearch(num, size, 23) << endl;

    // Reverse An Array
    reverseArray(num, size);

    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}