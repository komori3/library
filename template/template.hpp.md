---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/verify/aoj-grl-1-c.test.cpp
    title: test/verify/aoj-grl-1-c.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/verify/aoj-ntl-1-a.test.cpp
    title: test/verify/aoj-ntl-1-a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"template/template.hpp\"\n#define _CRT_SECURE_NO_WARNINGS\n\
    #define _USE_MATH_DEFINES\n#include <bits/stdc++.h>\n#line 5 \"template/template.hpp\"\
    \n#ifdef _MSC_VER\n#include <ppl.h>\n#else\n#pragma GCC target(\"avx2\")\n#pragma\
    \ GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\")\n#endif\n/* const\
    \ */\nconstexpr double PI = 3.141592653589793238462643;\n/* io */\nnamespace aux\
    \ {\n    template<typename T, unsigned N, unsigned L> struct tp { static void\
    \ print(std::ostream& os, const T& v) { os << std::get<N>(v) << \", \"; tp<T,\
    \ N + 1, L>::print(os, v); } };\n    template<typename T, unsigned N> struct tp<T,\
    \ N, N> { static void print(std::ostream& os, const T& v) { os << std::get<N>(v);\
    \ } };\n}\ntemplate<typename... Ts> std::ostream& operator<<(std::ostream& os,\
    \ const std::tuple<Ts...>& t) { os << '['; aux::tp<std::tuple<Ts...>, 0, sizeof...(Ts)\
    \ - 1>::print(os, t); os << ']'; return os; }\ntemplate <class T, class = typename\
    \ T::iterator, std::enable_if_t<!std::is_same<T, std::string>::value, int> = 0>\
    \ std::ostream& operator<<(std::ostream& os, T const& a);\ntemplate <class T,\
    \ class S> std::ostream& operator<<(std::ostream& os, std::pair<T, S> const& p)\
    \ { return os << '[' << p.first << \", \" << p.second << ']'; }\ntemplate <class\
    \ T, class S> std::istream& operator>>(std::istream& is, std::pair<T, S>& p) {\
    \ return is >> p.first >> p.second; }\ntemplate <class T, class, std::enable_if_t<!std::is_same<T,\
    \ std::string>::value, int>>\nstd::ostream& operator<<(std::ostream& os, T const&\
    \ a) { bool f = true; os << '['; for (auto const& x : a) { os << (f ? \"\" : \"\
    , \") << x; f = false; } os << ']'; return os; }\ntemplate <class T, size_t N,\
    \ std::enable_if_t<!std::is_same<T, char>::value, int> = 0>\nstd::ostream& operator<<(std::ostream&\
    \ os, const T(&a)[N]) { bool f = true; os << '['; for (auto const& x : a) { os\
    \ << (f ? \"\" : \", \") << x; f = false; } os << ']'; return os; }\ntemplate\
    \ <class T, class = decltype(std::begin(std::declval<T&>())), class = typename\
    \ std::enable_if<!std::is_same<T, std::string>::value>::type>\nstd::istream& operator>>(std::istream&\
    \ is, T& a) { for (auto& x : a) is >> x; return is; }\nstruct IOSetup { IOSetup(bool\
    \ f) { if (f) { std::cin.tie(nullptr); std::ios::sync_with_stdio(false); } std::cout\
    \ << std::fixed << std::setprecision(15); } } iosetup(true);\n/* format */\ntemplate<typename...\
    \ Ts> std::string format(const std::string& f, Ts... t) { size_t l = std::snprintf(nullptr,\
    \ 0, f.c_str(), t...); std::vector<char> b(l + 1); std::snprintf(&b[0], l + 1,\
    \ f.c_str(), t...); return std::string(&b[0], &b[0] + l); }\n/* dump */\n#define\
    \ ENABLE_DUMP\n#ifdef ENABLE_DUMP\n#define DUMPOUT std::cerr\nstd::ostringstream\
    \ DUMPBUF;\n#define dump(...) do{DUMPBUF<<\"  \";DUMPBUF<<#__VA_ARGS__<<\" :[DUMP\
    \ - \"<<__LINE__<<\":\"<<__FUNCTION__<<\"]\"<<std::endl;DUMPBUF<<\"    \";dump_func(__VA_ARGS__);DUMPOUT<<DUMPBUF.str();DUMPBUF.str(\"\
    \");DUMPBUF.clear();}while(0);\nvoid dump_func() { DUMPBUF << std::endl; }\ntemplate\
    \ <class Head, class... Tail> void dump_func(Head&& head, Tail&&... tail) { DUMPBUF\
    \ << head; if (sizeof...(Tail) == 0) { DUMPBUF << \" \"; } else { DUMPBUF << \"\
    , \"; } dump_func(std::move(tail)...); }\n#else\n#define dump(...) void(0);\n\
    #endif\nstruct Xorshift {\n    uint64_t x = 88172645463325252LL;\n    Xorshift(unsigned\
    \ seed = 0) { set_seed(seed); }\n    void set_seed(unsigned seed, int rep = 100)\
    \ { x = (seed + 1) * 10007; for (int i = 0; i < rep; i++) next_int(); }\n    unsigned\
    \ next_int() { x = x ^ (x << 7); return x = x ^ (x >> 9); }\n    unsigned next_int(unsigned\
    \ mod) { x = x ^ (x << 7); x = x ^ (x >> 9); return x % mod; }\n    unsigned next_int(unsigned\
    \ l, unsigned r) { x = x ^ (x << 7); x = x ^ (x >> 9); return x % (r - l + 1)\
    \ + l; }\n    double next_double() { return double(next_int()) / UINT_MAX; }\n\
    } rnd;\ntemplate<typename T> void shuffle_vector(std::vector<T>& v, Xorshift&\
    \ rnd) { int n = v.size(); for (int i = n - 1; i >= 1; i--) { int r = rnd.next_int(i);\
    \ std::swap(v[i], v[r]); } }\nstd::vector<std::string> split(std::string str,\
    \ const std::string& delim) { for (char& c : str) if (delim.find(c) != std::string::npos)\
    \ c = ' '; std::istringstream iss(str); std::vector<std::string> parsed; std::string\
    \ buf; while (iss >> buf) parsed.push_back(buf); return parsed; }\ntemplate<typename\
    \ T, typename ...Args> auto make_vector(T x, int arg, Args ...args) { if constexpr\
    \ (sizeof...(args) == 0)return std::vector<T>(arg, x); else return std::vector(arg,\
    \ make_vector<T>(x, args...)); }\ntemplate<typename T> bool chmax(T& a, const\
    \ T& b) { if (a < b) { a = b; return true; } return false; }\ntemplate<typename\
    \ T> bool chmin(T& a, const T& b) { if (a > b) { a = b; return true; } return\
    \ false; }\ntemplate<typename A, size_t N, typename T> inline void Fill(A(&array)[N],\
    \ const T& val) { std::fill((T*)array, (T*)(array + N), val); }\n\nusing ll =\
    \ long long;\nusing pii = std::pair<int, int>;\nusing pll = std::pair<ll, ll>;\n\
    using pdd = std::pair<double, double>;\n"
  code: "#define _CRT_SECURE_NO_WARNINGS\n#define _USE_MATH_DEFINES\n#include <bits/stdc++.h>\n\
    #include <unordered_set>\n#ifdef _MSC_VER\n#include <ppl.h>\n#else\n#pragma GCC\
    \ target(\"avx2\")\n#pragma GCC optimize(\"O3\")\n#pragma GCC optimize(\"unroll-loops\"\
    )\n#endif\n/* const */\nconstexpr double PI = 3.141592653589793238462643;\n/*\
    \ io */\nnamespace aux {\n    template<typename T, unsigned N, unsigned L> struct\
    \ tp { static void print(std::ostream& os, const T& v) { os << std::get<N>(v)\
    \ << \", \"; tp<T, N + 1, L>::print(os, v); } };\n    template<typename T, unsigned\
    \ N> struct tp<T, N, N> { static void print(std::ostream& os, const T& v) { os\
    \ << std::get<N>(v); } };\n}\ntemplate<typename... Ts> std::ostream& operator<<(std::ostream&\
    \ os, const std::tuple<Ts...>& t) { os << '['; aux::tp<std::tuple<Ts...>, 0, sizeof...(Ts)\
    \ - 1>::print(os, t); os << ']'; return os; }\ntemplate <class T, class = typename\
    \ T::iterator, std::enable_if_t<!std::is_same<T, std::string>::value, int> = 0>\
    \ std::ostream& operator<<(std::ostream& os, T const& a);\ntemplate <class T,\
    \ class S> std::ostream& operator<<(std::ostream& os, std::pair<T, S> const& p)\
    \ { return os << '[' << p.first << \", \" << p.second << ']'; }\ntemplate <class\
    \ T, class S> std::istream& operator>>(std::istream& is, std::pair<T, S>& p) {\
    \ return is >> p.first >> p.second; }\ntemplate <class T, class, std::enable_if_t<!std::is_same<T,\
    \ std::string>::value, int>>\nstd::ostream& operator<<(std::ostream& os, T const&\
    \ a) { bool f = true; os << '['; for (auto const& x : a) { os << (f ? \"\" : \"\
    , \") << x; f = false; } os << ']'; return os; }\ntemplate <class T, size_t N,\
    \ std::enable_if_t<!std::is_same<T, char>::value, int> = 0>\nstd::ostream& operator<<(std::ostream&\
    \ os, const T(&a)[N]) { bool f = true; os << '['; for (auto const& x : a) { os\
    \ << (f ? \"\" : \", \") << x; f = false; } os << ']'; return os; }\ntemplate\
    \ <class T, class = decltype(std::begin(std::declval<T&>())), class = typename\
    \ std::enable_if<!std::is_same<T, std::string>::value>::type>\nstd::istream& operator>>(std::istream&\
    \ is, T& a) { for (auto& x : a) is >> x; return is; }\nstruct IOSetup { IOSetup(bool\
    \ f) { if (f) { std::cin.tie(nullptr); std::ios::sync_with_stdio(false); } std::cout\
    \ << std::fixed << std::setprecision(15); } } iosetup(true);\n/* format */\ntemplate<typename...\
    \ Ts> std::string format(const std::string& f, Ts... t) { size_t l = std::snprintf(nullptr,\
    \ 0, f.c_str(), t...); std::vector<char> b(l + 1); std::snprintf(&b[0], l + 1,\
    \ f.c_str(), t...); return std::string(&b[0], &b[0] + l); }\n/* dump */\n#define\
    \ ENABLE_DUMP\n#ifdef ENABLE_DUMP\n#define DUMPOUT std::cerr\nstd::ostringstream\
    \ DUMPBUF;\n#define dump(...) do{DUMPBUF<<\"  \";DUMPBUF<<#__VA_ARGS__<<\" :[DUMP\
    \ - \"<<__LINE__<<\":\"<<__FUNCTION__<<\"]\"<<std::endl;DUMPBUF<<\"    \";dump_func(__VA_ARGS__);DUMPOUT<<DUMPBUF.str();DUMPBUF.str(\"\
    \");DUMPBUF.clear();}while(0);\nvoid dump_func() { DUMPBUF << std::endl; }\ntemplate\
    \ <class Head, class... Tail> void dump_func(Head&& head, Tail&&... tail) { DUMPBUF\
    \ << head; if (sizeof...(Tail) == 0) { DUMPBUF << \" \"; } else { DUMPBUF << \"\
    , \"; } dump_func(std::move(tail)...); }\n#else\n#define dump(...) void(0);\n\
    #endif\nstruct Xorshift {\n    uint64_t x = 88172645463325252LL;\n    Xorshift(unsigned\
    \ seed = 0) { set_seed(seed); }\n    void set_seed(unsigned seed, int rep = 100)\
    \ { x = (seed + 1) * 10007; for (int i = 0; i < rep; i++) next_int(); }\n    unsigned\
    \ next_int() { x = x ^ (x << 7); return x = x ^ (x >> 9); }\n    unsigned next_int(unsigned\
    \ mod) { x = x ^ (x << 7); x = x ^ (x >> 9); return x % mod; }\n    unsigned next_int(unsigned\
    \ l, unsigned r) { x = x ^ (x << 7); x = x ^ (x >> 9); return x % (r - l + 1)\
    \ + l; }\n    double next_double() { return double(next_int()) / UINT_MAX; }\n\
    } rnd;\ntemplate<typename T> void shuffle_vector(std::vector<T>& v, Xorshift&\
    \ rnd) { int n = v.size(); for (int i = n - 1; i >= 1; i--) { int r = rnd.next_int(i);\
    \ std::swap(v[i], v[r]); } }\nstd::vector<std::string> split(std::string str,\
    \ const std::string& delim) { for (char& c : str) if (delim.find(c) != std::string::npos)\
    \ c = ' '; std::istringstream iss(str); std::vector<std::string> parsed; std::string\
    \ buf; while (iss >> buf) parsed.push_back(buf); return parsed; }\ntemplate<typename\
    \ T, typename ...Args> auto make_vector(T x, int arg, Args ...args) { if constexpr\
    \ (sizeof...(args) == 0)return std::vector<T>(arg, x); else return std::vector(arg,\
    \ make_vector<T>(x, args...)); }\ntemplate<typename T> bool chmax(T& a, const\
    \ T& b) { if (a < b) { a = b; return true; } return false; }\ntemplate<typename\
    \ T> bool chmin(T& a, const T& b) { if (a > b) { a = b; return true; } return\
    \ false; }\ntemplate<typename A, size_t N, typename T> inline void Fill(A(&array)[N],\
    \ const T& val) { std::fill((T*)array, (T*)(array + N), val); }\n\nusing ll =\
    \ long long;\nusing pii = std::pair<int, int>;\nusing pll = std::pair<ll, ll>;\n\
    using pdd = std::pair<double, double>;"
  dependsOn: []
  isVerificationFile: false
  path: template/template.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:49:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/verify/aoj-ntl-1-a.test.cpp
  - test/verify/aoj-grl-1-c.test.cpp
documentation_of: template/template.hpp
layout: document
redirect_from:
- /library/template/template.hpp
- /library/template/template.hpp.html
title: template/template.hpp
---
