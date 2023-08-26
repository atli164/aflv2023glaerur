#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

constexpr int N = 10000, M = 10000;

inline int sum_by_col(int arr[N][M]) {
    int result = 0;
    for (int j = 0; j < M; j++) {
        for (int i = 0; i < N; i++) {
            result += arr[i][j];
        }
    }
    return result;
}

inline int sum_by_row(int arr[N][M]) {
    int result = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            result += arr[i][j];
        }
    }
    return result;
}

int arr[N][M];

int main()
{
    ios_base::sync_with_stdio(false);

    srand(1337);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            arr[i][j] = rand();
        }
    }

    for (int i = 0; i < 10; i++) {
        auto start = high_resolution_clock::now();
        cout << sum_by_row(arr) << endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
        cout << i << " " << duration.count() << endl;
    }

    return 0;
}
