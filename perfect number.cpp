//AdemHosama
#include <iostream>
using namespace std;

bool is_perfect(int n) {
    int sum = 1; // 1 is always a divisor (except for 1 itself)
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }
    return sum == n;
}

int main() {
    int counter = 0, n = 2;
    while (counter < 4) { // The first 4 perfect numbers take large values
        if (is_perfect(n)) {
            counter++;
            cout << n << endl;
        }
        n++; // Ensure `n` increases, avoiding an infinite loop
    }
    return 0;
}
