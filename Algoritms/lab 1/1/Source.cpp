#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int M, N;

    cout << "������� ������ ������� A: ";
    cin >> M;
    cout << "������� ������ ������� B: ";
    cin >> N;
    vector<int> A(M);
    vector<int> B(N);

    
    cout << "������� �������� ������� A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    std::cout << "������� �������� ������� B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

   
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    
    vector<int> result;

    
    set_difference(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(result));

    
    cout << "�������� �� A, ������� �� ���������� � B: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}