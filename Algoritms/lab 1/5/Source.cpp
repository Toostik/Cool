#include <iostream>
#include <vector>
using namespace std;
void insertBlock(vector<int>& arr, size_t index, const vector<int>& block) {
    if (index <= arr.size()) {
        arr.insert(arr.begin() + index, block.begin(), block.end());
    }
    else {
        cout << "������: ������������ ������." << endl;
    }
}

int main() {
    vector<int> myArray = { 1, 2, 3, 4, 5 };
    vector<int> blockToInsert = { 6, 7, 8 };

    cout << "�������� ������: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    size_t insertionIndex = 2; 
    insertBlock(myArray, insertionIndex, blockToInsert);

    cout << "������ ����� ������� �����: ";
    for (int num : myArray) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}