---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/verify/aoj-dpl-1-a.test.cpp
    title: test/verify/aoj-dpl-1-a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/modpow.md
    document_title: modpow
    links: []
  bundledCode: "#line 1 \"lib/modpow.hpp\"\n/**\n * @brief modpow \n * @docs docs/modpow.md\n\
    \ */\ntemplate<typename T = int64_t>\nT modpow(T n, T power, T mod) {\n    T res\
    \ = 1;\n    while (power > 0) {\n        if (power & 1) res = res * n % mod;\n\
    \        power >>= 1;\n        n = n * n % mod;\n    }\n    return res;\n}\n"
  code: "/**\n * @brief modpow \n * @docs docs/modpow.md\n */\ntemplate<typename T\
    \ = int64_t>\nT modpow(T n, T power, T mod) {\n    T res = 1;\n    while (power\
    \ > 0) {\n        if (power & 1) res = res * n % mod;\n        power >>= 1;\n\
    \        n = n * n % mod;\n    }\n    return res;\n}"
  dependsOn: []
  isVerificationFile: false
  path: lib/modpow.hpp
  requiredBy: []
  timestamp: '2021-10-09 16:38:32+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/verify/aoj-dpl-1-a.test.cpp
documentation_of: lib/modpow.hpp
layout: document
redirect_from:
- /library/lib/modpow.hpp
- /library/lib/modpow.hpp.html
title: modpow
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD