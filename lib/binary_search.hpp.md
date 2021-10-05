---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/binary_search.md
    document_title: "Binary Search (\u4E8C\u5206\u63A2\u7D22)"
    links: []
  bundledCode: "#line 1 \"lib/binary_search.hpp\"\n/**\n * @brief Binary Search (\u4E8C\
    \u5206\u63A2\u7D22)\n * @docs docs/binary_search.md\n */\ntemplate<typename T\
    \ = int, typename F>\nT binary_search(T ng, T ok, F func) {\n    while (abs(ok\
    \ - ng) > 1) {\n        T mid = (ng + ok) / 2;\n        (func(mid) ? ok : ng)\
    \ = mid;\n    }\n    return ok;\n}\n"
  code: "/**\n * @brief Binary Search (\u4E8C\u5206\u63A2\u7D22)\n * @docs docs/binary_search.md\n\
    \ */\ntemplate<typename T = int, typename F>\nT binary_search(T ng, T ok, F func)\
    \ {\n    while (abs(ok - ng) > 1) {\n        T mid = (ng + ok) / 2;\n        (func(mid)\
    \ ? ok : ng) = mid;\n    }\n    return ok;\n}"
  dependsOn: []
  isVerificationFile: false
  path: lib/binary_search.hpp
  requiredBy: []
  timestamp: '2021-10-06 02:43:42+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/binary_search.hpp
layout: document
redirect_from:
- /library/lib/binary_search.hpp
- /library/lib/binary_search.hpp.html
title: "Binary Search (\u4E8C\u5206\u63A2\u7D22)"
---
