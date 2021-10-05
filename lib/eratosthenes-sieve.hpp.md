---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/verify/yosupo-enumerate-primes.test.cpp
    title: test/verify/yosupo-enumerate-primes.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    _deprecated_at_docs: docs/eratosthenes-sieve.md
    document_title: "sieve of Eratosthenes (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\
      \u306E\u7BE9)"
    links: []
  bundledCode: "#line 1 \"lib/eratosthenes-sieve.hpp\"\n/**\n * @brief sieve of Eratosthenes\
    \ (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9)\n * @docs docs/eratosthenes-sieve.md\n\
    \ */\ntemplate<typename T>\nclass EratosthenesSieve {\npublic:\n    T size;\n\
    \    std::vector<bool> p;\n    EratosthenesSieve(T size) : size(size), p(size\
    \ + 1, true) {\n        p[0] = p[1] = false;\n        for (T i = 2; i * i <= size;\
    \ i++) if (p[i])\n            for (T j = i * i; j <= size; j += i)\n         \
    \       p[j] = false;\n    }\n    std::vector<T> get_primes() const {\n      \
    \  std::vector<T> ret;\n        for (T i = 0; i <= size; i++)\n            if\
    \ (p[i]) ret.push_back(i);\n        return ret;\n    }\n};\n"
  code: "/**\n * @brief sieve of Eratosthenes (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\
    \u30B9\u306E\u7BE9)\n * @docs docs/eratosthenes-sieve.md\n */\ntemplate<typename\
    \ T>\nclass EratosthenesSieve {\npublic:\n    T size;\n    std::vector<bool> p;\n\
    \    EratosthenesSieve(T size) : size(size), p(size + 1, true) {\n        p[0]\
    \ = p[1] = false;\n        for (T i = 2; i * i <= size; i++) if (p[i])\n     \
    \       for (T j = i * i; j <= size; j += i)\n                p[j] = false;\n\
    \    }\n    std::vector<T> get_primes() const {\n        std::vector<T> ret;\n\
    \        for (T i = 0; i <= size; i++)\n            if (p[i]) ret.push_back(i);\n\
    \        return ret;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/eratosthenes-sieve.hpp
  requiredBy: []
  timestamp: '2021-10-06 03:41:28+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/verify/yosupo-enumerate-primes.test.cpp
documentation_of: lib/eratosthenes-sieve.hpp
layout: document
redirect_from:
- /library/lib/eratosthenes-sieve.hpp
- /library/lib/eratosthenes-sieve.hpp.html
title: "sieve of Eratosthenes (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\
  )"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD