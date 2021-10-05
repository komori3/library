#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_primes"

#include "../../template/template.hpp"

#include "../../lib/eratosthenes-sieve.hpp"

int main() {
    using std::cin, std::cout, std::endl, std::ios;
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, A, B;
    cin >> N >> A >> B;
    auto ps = EratosthenesSieve(N).get_primes();
    std::ostringstream oss;
    for (int i = 0; A * i + B < (int)ps.size(); i++) {
        if (i) cout << ' ';
        cout << ps[A * i + B];
    }
    cout << '\n';

    return 0;
}