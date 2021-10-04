---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    _deprecated_at_docs: docs/compress.md
    document_title: "Compress (\u5EA7\u6A19\u5727\u7E2E)"
    links: []
  bundledCode: "#line 1 \"lib/compress.cpp\"\n/**\n * @brief Compress (\u5EA7\u6A19\
    \u5727\u7E2E)\n * @docs docs/compress.md\n */\ntemplate<typename T>\nstruct Compress\
    \ {\n    std::vector<T> values;\n    std::map<T, int> indices;\n    Compress(const\
    \ std::vector<T>& v) {\n        std::set<T> st(v.begin(), v.end()); // unique\n\
    \        values = std::vector<T>(st.begin(), st.end());\n        for (int i =\
    \ 0; i < (int)values.size(); i++) indices[values[i]] = i;\n    }\n    T get_value(int\
    \ index) const { return values[index]; }\n    int get_index(T value) const { return\
    \ indices.at(value); }\n};\n"
  code: "/**\n * @brief Compress (\u5EA7\u6A19\u5727\u7E2E)\n * @docs docs/compress.md\n\
    \ */\ntemplate<typename T>\nstruct Compress {\n    std::vector<T> values;\n  \
    \  std::map<T, int> indices;\n    Compress(const std::vector<T>& v) {\n      \
    \  std::set<T> st(v.begin(), v.end()); // unique\n        values = std::vector<T>(st.begin(),\
    \ st.end());\n        for (int i = 0; i < (int)values.size(); i++) indices[values[i]]\
    \ = i;\n    }\n    T get_value(int index) const { return values[index]; }\n  \
    \  int get_index(T value) const { return indices.at(value); }\n};"
  dependsOn: []
  isVerificationFile: false
  path: lib/compress.cpp
  requiredBy: []
  timestamp: '2021-10-04 23:40:31+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: lib/compress.cpp
layout: document
redirect_from:
- /library/lib/compress.cpp
- /library/lib/compress.cpp.html
title: "Compress (\u5EA7\u6A19\u5727\u7E2E)"
---
## 概要

TBD

## 使い方

TBD

## 計算量

TBD