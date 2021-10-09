#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_5_A"

#include "../../template/template.hpp"

#include "../../lib/modpow.hpp"

int main() {
    using std::cin, std::cout, std::endl, std::ios;
    cin.tie(0);
    ios::sync_with_stdio(false);

    constexpr ll MOD = 1000000007;

    ll n, k;
    cin >> n >> k;

    cout << modpow(k, n, MOD) << endl;

    return 0;
}