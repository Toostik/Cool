#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main() {
    int M, N;
    
    std::cout << "¬ведите размер массива A: ";
    std::cin >> M;
    std::cout << "¬ведите размер массива B: ";
    std::cin >> N;
 
    vector<int> A(M);
    vector<int> B(N);
 
    cout << "¬ведите элементы массива A: ";
    for (int i = 0; i < M; i++) {
        std::cin >> A[i];
    }

    cout << "¬ведите элементы массива B: ";
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

    cout << "Ёлементы из A, которые не включаютс€ в B: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}
