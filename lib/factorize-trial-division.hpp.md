---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/verify/aoj-ntl-1-a.test.cpp
    title: test/verify/aoj-ntl-1-a.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/factorize-trial-division.md
    document_title: "factorize-trial-division (\u8A66\u3057\u5272\u308A\u306B\u3088\
      \u308B\u7D20\u56E0\u6570\u5206\u89E3)"
    links: []
  bundledCode: "#line 1 \"lib/factorize-trial-division.hpp\"\n/**\n * @brief factorize-trial-division\
    \ (\u8A66\u3057\u5272\u308A\u306B\u3088\u308B\u7D20\u56E0\u6570\u5206\u89E3)\n\
    \ * @docs docs/factorize-trial-division.md\n */\ntemplate<typename T = int>\n\
    std::map<T, int> factorize(T n) {\n    std::map<T, int> factor_map;\n    for (T\
    \ i = 2; i * i <= n; i++) {\n        while (!(n % i)) {\n            factor_map[i]++;\
    \ n /= i;\n        }\n    }\n    if (n > 1) factor_map[n]++;\n    return factor_map;\n\
    }\n"
  code: "/**\n * @brief factorize-trial-division (\u8A66\u3057\u5272\u308A\u306B\u3088\
    \u308B\u7D20\u56E0\u6570\u5206\u89E3)\n * @docs docs/factorize-trial-division.md\n\
    \ */\ntemplate<typename T = int>\nstd::map<T, int> factorize(T n) {\n    std::map<T,\
    \ int> factor_map;\n    for (T i = 2; i * i <= n; i++) {\n        while (!(n %\
    \ i)) {\n            factor_map[i]++; n /= i;\n        }\n    }\n    if (n > 1)\
    \ factor_map[n]++;\n    return factor_map;\n}"
  dependsOn: []
  isVerificationFile: false
  path: lib/factorize-trial-division.hpp
  requiredBy: []
  timestamp: '2021-10-06 03:41:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/verify/aoj-ntl-1-a.test.cpp
documentation_of: lib/factorize-trial-division.hpp
layout: document
redirect_from:
- /library/lib/factorize-trial-division.hpp
- /library/lib/factorize-trial-division.hpp.html
title: "factorize-trial-division (\u8A66\u3057\u5272\u308A\u306B\u3088\u308B\u7D20\
  \u56E0\u6570\u5206\u89E3)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD