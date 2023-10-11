#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
    int M, N;
    
    std::cout << "������� ������ ������� A: ";
    std::cin >> M;
    std::cout << "������� ������ ������� B: ";
    std::cin >> N;
 
    vector<int> A(M);
    vector<int> B(N);
 
    cout << "������� �������� ������� A: ";
    for (int i = 0; i < M; i++) {
        std::cin >> A[i];
    }

    cout << "������� �������� ������� B: ";
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }
 
    set<int> uniqueElements;

    for (int i = 0; i < M; i++) {
        uniqueElements.insert(A[i]);
    }
    
    for (int i = 0; i < N; i++) {
        uniqueElements.erase(B[i]);
    }

    
    vector<int> result(uniqueElements.begin(), uniqueElements.end());

    cout << "�������� �� A, ������� �� ���������� � B: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
