---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/BinarySearch.md
    document_title: "Binary Search (\u4E8C\u5206\u63A2\u7D22)"
    links: []
  bundledCode: "#line 1 \"lib/BinarySearch.hpp\"\n/**\n * @brief Binary Search (\u4E8C\
    \u5206\u63A2\u7D22)\n * @docs docs/BinarySearch.md\n */\ntemplate<typename T =\
    \ int, typename F>\nT binary_search(T ng, T ok, F func) {\n    while (abs(ok -\
    \ ng) > 1) {\n        T mid = (ng + ok) / 2;\n        (func(mid) ? ok : ng) =\
    \ mid;\n    }\n    return ok;\n}\n"
  code: "/**\n * @brief Binary Search (\u4E8C\u5206\u63A2\u7D22)\n * @docs docs/BinarySearch.md\n\
    \ */\ntemplate<typename T = int, typename F>\nT binary_search(T ng, T ok, F func)\
    \ {\n    while (abs(ok - ng) > 1) {\n        T mid = (ng + ok) / 2;\n        (func(mid)\
    \ ? ok : ng) = mid;\n    }\n    return ok;\n}"
  dependsOn: []
  isVerificationFile: false
  path: lib/BinarySearch.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:11:22+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/BinarySearch.hpp
layout: document
redirect_from:
- /library/lib/BinarySearch.hpp
- /library/lib/BinarySearch.hpp.html
title: "Binary Search (\u4E8C\u5206\u63A2\u7D22)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD