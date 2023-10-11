#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int M, N;

    cout << "¬ведите размер массива A: ";
    cin >> M;
    cout << "¬ведите размер массива B: ";
    cin >> N;
    vector<int> A(M);
    vector<int> B(N);

    
    cout << "¬ведите элементы массива A: ";
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    std::cout << "¬ведите элементы массива B: ";
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }

   
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    
    vector<int> result;

    
    set_difference(A.begin(), A.end(), B.begin(), B.end(), std::back_inserter(result));

    
    cout << "Ёлементы из A, которые не включаютс€ в B: ";
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }

    return 0;
}