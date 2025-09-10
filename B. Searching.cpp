#include <iostream>
using namespace std;

int main() {

    long long N;
    long long A[10000];
    long long x;

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cin >> x;
    int position = -1;
    for (int i = 0; i < N; i++) {
        if (x == A[i]) {
            position = i; 
            break;      
        }
    }

    cout << position << endl;

    return 0;


}
