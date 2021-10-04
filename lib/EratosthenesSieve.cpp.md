---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/EratosthenesSieve.md
    document_title: EratosthenesSieve
    links: []
  bundledCode: "#line 1 \"lib/EratosthenesSieve.cpp\"\n/**\n * @brief EratosthenesSieve\n\
    \ * @docs docs/EratosthenesSieve.md\n */\ntemplate<typename T>\nclass EratosthenesSieve\
    \ {\npublic:\n    T size;\n    std::vector<bool> p;\n    EratosthenesSieve(T size)\
    \ : size(size), p(size + 1, true) {\n        p[0] = p[1] = false;\n        for\
    \ (T i = 2; i * i <= size; i++) if (p[i])\n            for (T j = i * i; j <=\
    \ size; j += i)\n                p[j] = false;\n    }\n    std::vector<T> get_primes()\
    \ {\n        std::vector<T> ret;\n        for (T i = 0; i <= size; i++)\n    \
    \        if (p[i]) ret.push_back(i);\n        return ret;\n    }\n};\n"
  code: "/**\n * @brief EratosthenesSieve\n * @docs docs/EratosthenesSieve.md\n */\n\
    template<typename T>\nclass EratosthenesSieve {\npublic:\n    T size;\n    std::vector<bool>\
    \ p;\n    EratosthenesSieve(T size) : size(size), p(size + 1, true) {\n      \
    \  p[0] = p[1] = false;\n        for (T i = 2; i * i <= size; i++) if (p[i])\n\
    \            for (T j = i * i; j <= size; j += i)\n                p[j] = false;\n\
    \    }\n    std::vector<T> get_primes() {\n        std::vector<T> ret;\n     \
    \   for (T i = 0; i <= size; i++)\n            if (p[i]) ret.push_back(i);\n \
    \       return ret;\n    }\n};"
  dependsOn: []
  isVerificationFile: false
  path: lib/EratosthenesSieve.cpp
  requiredBy: []
  timestamp: '2021-10-05 00:05:24+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/EratosthenesSieve.cpp
layout: document
redirect_from:
- /library/lib/EratosthenesSieve.cpp
- /library/lib/EratosthenesSieve.cpp.html
title: EratosthenesSieve
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD