---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/EratosthenesSieve.md
    document_title: "Sieve of Eratosthenes (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\
      \u306E\u7BE9)"
    links: []
  bundledCode: "#line 1 \"lib/EratosthenesSieve.hpp\"\n/**\n * @brief Sieve of Eratosthenes\
    \ (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9)\n * @docs docs/EratosthenesSieve.md\n\
    \ */\ntemplate<typename T>\nclass EratosthenesSieve {\npublic:\n    T size;\n\
    \    std::vector<bool> p;\n    EratosthenesSieve(T size) : size(size), p(size\
    \ + 1, true) {\n        p[0] = p[1] = false;\n        for (T i = 2; i * i <= size;\
    \ i++) if (p[i])\n            for (T j = i * i; j <= size; j += i)\n         \
    \       p[j] = false;\n    }\n    std::vector<T> get_primes() const {\n      \
    \  std::vector<T> ret;\n        for (T i = 0; i <= size; i++)\n            if\
    \ (p[i]) ret.push_back(i);\n        return ret;\n    }\n};\n"
  code: "/**\n * @brief Sieve of Eratosthenes (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\
    \u30B9\u306E\u7BE9)\n * @docs docs/EratosthenesSieve.md\n */\ntemplate<typename\
    \ T>\nclass EratosthenesSieve {\npublic:\n    T size;\n    std::vector<bool> p;\n\
    \    EratosthenesSieve(T size) : size(size), p(size + 1, true) {\n        p[0]\
    \ = p[1] = false;\n        for (T i = 2; i * i <= size; i++) if (p[i])\n     \
    \       for (T j = i * i; j <= size; j += i)\n                p[j] = false;\n\
    \    }\n    std::vector<T> get_primes() const {\n        std::vector<T> ret;\n\
    \        for (T i = 0; i <= size; i++)\n            if (p[i]) ret.push_back(i);\n\
    \        return ret;\n    }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: lib/EratosthenesSieve.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:11:22+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/EratosthenesSieve.hpp
layout: document
redirect_from:
- /library/lib/EratosthenesSieve.hpp
- /library/lib/EratosthenesSieve.hpp.html
title: "Sieve of Eratosthenes (\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\
  )"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD