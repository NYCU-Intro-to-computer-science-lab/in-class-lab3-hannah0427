// 題目 3：破解數學家的謎題 (Cracking the Mathematician's Puzzle) - 30分

#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;  //把2以下ㄕㄞ掉   
    if (n == 2) return true;      
    if (n % 2 == 0) return false; 

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;  

    long long a = 0, b = 0;

    for (int j = 2; j <= n / 2; ++j) {
        if (isPrime(j) && isPrime(n - j)) {
            a = j;
            b = n - j;
            break; 
        }
    }

    cout << a << " " << b << endl;
    return 0;
}
