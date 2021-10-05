/**
 * @brief Binary Search (二分探索)
 * @docs docs/binary_search.md
 */
template<typename T = int, typename F>
T binary_search(T ng, T ok, F func) {
    while (abs(ok - ng) > 1) {
        T mid = (ng + ok) / 2;
        (func(mid) ? ok : ng) = mid;
    }
    return ok;
}