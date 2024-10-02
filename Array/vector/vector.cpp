#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Syntax:

    // vector<int> vec;
    // cout << vec[0]; // Empty memory

    // vector<int> vec = {2, 3, 5};
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];

    // vector<int> vec(3, 1);
    // cout << vec[0];
    // cout << vec[1];
    // cout << vec[2];

    // Vector Function
    vector<int> marks = {56, 76, 87, 32};

    // 1. size
    cout << marks.size() << endl;

    // 2. push_back
    marks.push_back(32);
    cout << "After push_back " << marks.size() << endl;

    // 3. pop_back
    marks.pop_back();
    cout << "After pop_back " << marks.size() << endl;

    // 4. front
    cout << "Front value " << marks.front() << endl;

    // 5. back
    cout << "Back value " << marks.back() << endl;

    // 6. at
    cout << "Index 2: " << marks.at(2) << endl;

    // Size and Capacity
    marks.push_back(98);
    marks.push_back(76);
    marks.push_back(95);

    cout << "Size: " << marks.size() << endl;
    cout << "Capacity: " << marks.capacity() << endl;

    return 0;
}