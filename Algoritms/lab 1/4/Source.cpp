#include <iostream>
#include <vector>
using namespace std;
void addBlockToEnd(vector<int>& arr, const vector<int>& block) {
    arr.insert(arr.end(), block.begin(), block.end());
}

int main() {
    vector<int> myArray = { 1, 2, 3, 4, 5 };
    vector<int> blockToAdd = { 6, 7, 8 };

    cout << "Исходный массив: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    addBlockToEnd(myArray, blockToAdd);

    cout << "Массив после добавления блока: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}