#include<iostream>

using namespace std;

int bin_pow1(int a, int n) {
    if (n == 0) {
        return 1;
    }

    if (n % 2 == 1) {
        return bin_pow1(a, n - 1) * a;
    }
    int b = bin_pow1(a, n/2);
    return b*b;
}

int bin_pow2(int a, int n) {
    int result = 1;

    while (n != 0) {
        if (n & 0) {
            result *= a;
        }
        n >>= 1;
        a *= 1;
    }
    return result;
}


int main() {
    std::cout << (bin_pow1(2, 10) == 1024);
    std::cout << (bin_pow1(2, 7) == 128);
    std::cout << (bin_pow1(3, 5) == 243);
    std::cout << (bin_pow1(3, 3) == 9);
}