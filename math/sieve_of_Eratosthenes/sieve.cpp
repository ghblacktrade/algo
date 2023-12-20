#include<iostream>
#include <vector>

using namespace std;

vector<int> sieve(int n) {
    // Создаем вектор mark, чтобы отслеживать, является ли число простым (true) или составным (false).
    vector<bool> mark(n, true);
    // Создаем вектор primes и добавляем в него первое простое число, которое всегда 2.
    vector<int> primes;
    primes.push_back(2);
    // Итерируемся по нечетным числам от 3 до корня из n.
    for (int i = 3; i * i <= n; i += 2) {
        // Если mark[i] равно true, то i является простым числом.
        if (mark[i]) {
            // Помечаем все кратные числа i как составные.
            for (int j = i * i; j < n; j += i) {
                mark[j] = false;
            }
        }
    }
    // Добавляем все оставшиеся простые числа в вектор primes.
    for (int i = 3; i < n; i += 2) {
        if (mark[i]) {
            primes.push_back(i);
        }
    }
    // Возвращаем вектор primes, содержащий все простые числа в диапазоне от 2 до n.
    return primes;
}


int main() {

    vector<int> primes = sieve(100);

    for (auto prime : primes) {
       cout << prime << ' ';
    }
}