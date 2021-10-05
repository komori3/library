#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
#include <unordered_set>
#ifdef _MSC_VER
#include <ppl.h>
#else
#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#endif
/* const */
constexpr double PI = 3.141592653589793238462643;
/* io */
namespace aux {
    template<typename T, unsigned N, unsigned L> struct tp { static void print(std::ostream& os, const T& v) { os << std::get<N>(v) << ", "; tp<T, N + 1, L>::print(os, v); } };
    template<typename T, unsigned N> struct tp<T, N, N> { static void print(std::ostream& os, const T& v) { os << std::get<N>(v); } };
}
template<typename... Ts> std::ostream& operator<<(std::ostream& os, const std::tuple<Ts...>& t) { os << '['; aux::tp<std::tuple<Ts...>, 0, sizeof...(Ts) - 1>::print(os, t); os << ']'; return os; }
template <class T, class = typename T::iterator, std::enable_if_t<!std::is_same<T, std::string>::value, int> = 0> std::ostream& operator<<(std::ostream& os, T const& a);
template <class T, class S> std::ostream& operator<<(std::ostream& os, std::pair<T, S> const& p) { return os << '[' << p.first << ", " << p.second << ']'; }
template <class T, class S> std::istream& operator>>(std::istream& is, std::pair<T, S>& p) { return is >> p.first >> p.second; }
template <class T, class, std::enable_if_t<!std::is_same<T, std::string>::value, int>>
std::ostream& operator<<(std::ostream& os, T const& a) { bool f = true; os << '['; for (auto const& x : a) { os << (f ? "" : ", ") << x; f = false; } os << ']'; return os; }
template <class T, size_t N, std::enable_if_t<!std::is_same<T, char>::value, int> = 0>
std::ostream& operator<<(std::ostream& os, const T(&a)[N]) { bool f = true; os << '['; for (auto const& x : a) { os << (f ? "" : ", ") << x; f = false; } os << ']'; return os; }
template <class T, class = decltype(std::begin(std::declval<T&>())), class = typename std::enable_if<!std::is_same<T, std::string>::value>::type>
std::istream& operator>>(std::istream& is, T& a) { for (auto& x : a) is >> x; return is; }
struct IOSetup { IOSetup(bool f) { if (f) { std::cin.tie(nullptr); std::ios::sync_with_stdio(false); } std::cout << std::fixed << std::setprecision(15); } } iosetup(true);
/* format */
template<typename... Ts> std::string format(const std::string& f, Ts... t) { size_t l = std::snprintf(nullptr, 0, f.c_str(), t...); std::vector<char> b(l + 1); std::snprintf(&b[0], l + 1, f.c_str(), t...); return std::string(&b[0], &b[0] + l); }
/* dump */
#define ENABLE_DUMP
#ifdef ENABLE_DUMP
#define DUMPOUT std::cerr
std::ostringstream DUMPBUF;
#define dump(...) do{DUMPBUF<<"  ";DUMPBUF<<#__VA_ARGS__<<" :[DUMP - "<<__LINE__<<":"<<__FUNCTION__<<"]"<<std::endl;DUMPBUF<<"    ";dump_func(__VA_ARGS__);DUMPOUT<<DUMPBUF.str();DUMPBUF.str("");DUMPBUF.clear();}while(0);
void dump_func() { DUMPBUF << std::endl; }
template <class Head, class... Tail> void dump_func(Head&& head, Tail&&... tail) { DUMPBUF << head; if (sizeof...(Tail) == 0) { DUMPBUF << " "; } else { DUMPBUF << ", "; } dump_func(std::move(tail)...); }
#else
#define dump(...) void(0);
#endif
struct Xorshift {
    uint64_t x = 88172645463325252LL;
    Xorshift(unsigned seed = 0) { set_seed(seed); }
    void set_seed(unsigned seed, int rep = 100) { x = (seed + 1) * 10007; for (int i = 0; i < rep; i++) next_int(); }
    unsigned next_int() { x = x ^ (x << 7); return x = x ^ (x >> 9); }
    unsigned next_int(unsigned mod) { x = x ^ (x << 7); x = x ^ (x >> 9); return x % mod; }
    unsigned next_int(unsigned l, unsigned r) { x = x ^ (x << 7); x = x ^ (x >> 9); return x % (r - l + 1) + l; }
    double next_double() { return double(next_int()) / UINT_MAX; }
} rnd;
template<typename T> void shuffle_vector(std::vector<T>& v, Xorshift& rnd) { int n = v.size(); for (int i = n - 1; i >= 1; i--) { int r = rnd.next_int(i); std::swap(v[i], v[r]); } }
std::vector<std::string> split(std::string str, const std::string& delim) { for (char& c : str) if (delim.find(c) != std::string::npos) c = ' '; std::istringstream iss(str); std::vector<std::string> parsed; std::string buf; while (iss >> buf) parsed.push_back(buf); return parsed; }
template<typename T, typename ...Args> auto make_vector(T x, int arg, Args ...args) { if constexpr (sizeof...(args) == 0)return std::vector<T>(arg, x); else return std::vector(arg, make_vector<T>(x, args...)); }
template<typename T> bool chmax(T& a, const T& b) { if (a < b) { a = b; return true; } return false; }
template<typename T> bool chmin(T& a, const T& b) { if (a > b) { a = b; return true; } return false; }
template<typename A, size_t N, typename T> inline void Fill(A(&array)[N], const T& val) { std::fill((T*)array, (T*)(array + N), val); }

using ll = long long;
using pii = std::pair<int, int>;
using pll = std::pair<ll, ll>;
using pdd = std::pair<double, double>;

using namespace std;