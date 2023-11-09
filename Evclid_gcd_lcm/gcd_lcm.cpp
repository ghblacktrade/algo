#include<iostream>

using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

int main() {
    std::cout << (gcd(24, 7) == 1);
    std::cout << (gcd(28, 2) == 2);
    std::cout << (gcd(64, 5) == 1);

    std::cout << (lcm(28, 2) == 28);
    std::cout << (lcm(24, 7) == 1);
    std::cout << (lcm(64, 5) == 320);
}
