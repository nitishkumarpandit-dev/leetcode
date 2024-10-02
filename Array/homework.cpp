#include <iostream>
using namespace std;

// WAP to calculate sum & product of all numbers in an array.

int sumOfArray(int num[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += num[i];
    }

    return sum;
}

int productOfArray(int num[], int size)
{
    int product = 1;

    for (int i = 0; i < size; i++)
    {
        product *= num[i];
    }

    return product;
}

// WAF to swap the max & min number of an array.

void swapMinAndMaxNumber(int num[], int size)
{
    int minNum = INT8_MAX;
    int maxNum = INT8_MIN;
    int minIndex = -1;
    int maxIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (num[i] < minNum)
        {
            minNum = num[i];
            minIndex = i;
        }

        if (num[i] > maxNum)
        {
            maxNum = num[i];
            maxIndex = i;
        }
    }

    num[minIndex] = maxNum;
    num[maxIndex] = minNum;
}

// WAF to print all the unique values in an array.

void printUniqueValue(int num[], int size)
{

    bool isUnique;

    for (int i = 0; i < size; i++)
    {
        isUnique = true; // Assure the current element is unique

        for (int j = 0; j < i; j++)
        {
            if (num[i] == num[j])
            {
                isUnique = false; // Element is not unique
                break;
            }
        }

        // If the element is unique, print it

        if (isUnique)
        {
            cout << num[i] << " ";
        }
    }
}

int main()
{

    int num[] = {1, 2, 1, 3, 2};
    int size = 5;

    // cout << "Sum of array: " << sumOfArray(num, size) << endl;

    // cout << "Project of array: " << productOfArray(num, size) << endl;

    // Wrap
    // cout << "Before: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << num[i] << " ";
    // }

    // swapMinAndMaxNumber(num, size);

    // cout << "After: ";
    // for (int i = 0; i < size; i++)
    // {
    //     cout << num[i] << " ";
    // }

    printUniqueValue(num, size);

    return 0;
}