#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

constexpr int N{ 100'000'000 };
int arr[N];
int regular_loop(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] % 3 == 0) sm -= arr[i];
        else if (arr[i] % 3 == 2) sm += arr[i];
    }
    return sm;
}

int unroll_2_loop(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i+=2) {
        if (arr[i] % 3 == 0) sm -= arr[i];
        else if (arr[i] % 3 == 2) sm += arr[i];
        if (arr[i+1] % 3 == 0) sm -= arr[i+1];
        else if (arr[i+1] % 3 == 2) sm += arr[i+1];
    }
    return sm;
}

int unroll_4_loop(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i+=4) {
        if (arr[i] % 3 == 0) sm -= arr[i];
        else if (arr[i] % 3 == 2) sm += arr[i];
        if (arr[i+1] % 3 == 0) sm -= arr[i+1];
        else if (arr[i+1] % 3 == 2) sm += arr[i+1];
        if (arr[i+2] % 3 == 0) sm -= arr[i+2];
        else if (arr[i+2] % 3 == 2) sm += arr[i+2];
        if (arr[i+3] % 3 == 0) sm -= arr[i+3];
        else if (arr[i+3] % 3 == 2) sm += arr[i+3];
    }
    return sm;
}

int unroll_16_loop(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i+=16) {
        if (arr[i] % 3 == 0) sm -= arr[i];
        else if (arr[i] % 3 == 2) sm += arr[i];
        if (arr[i+1] % 3 == 0) sm -= arr[i+1];
        else if (arr[i+1] % 3 == 2) sm += arr[i+1];
        if (arr[i+2] % 3 == 0) sm -= arr[i+2];
        else if (arr[i+2] % 3 == 2) sm += arr[i+2];
        if (arr[i+3] % 3 == 0) sm -= arr[i+3];
        else if (arr[i+3] % 3 == 2) sm += arr[i+3];
        if (arr[i+4] % 3 == 0) sm -= arr[i+4];
        else if (arr[i+4] % 3 == 2) sm += arr[i+4];
        if (arr[i+5] % 3 == 0) sm -= arr[i+5];
        else if (arr[i+5] % 3 == 2) sm += arr[i+5];
        if (arr[i+6] % 3 == 0) sm -= arr[i+6];
        else if (arr[i+6] % 3 == 2) sm += arr[i+6];
        if (arr[i+7] % 3 == 0) sm -= arr[i+7];
        else if (arr[i+7] % 3 == 2) sm += arr[i+7];
        if (arr[i+8] % 3 == 0) sm -= arr[i+8];
        else if (arr[i+8] % 3 == 2) sm += arr[i+8];
        if (arr[i+9] % 3 == 0) sm -= arr[i+9];
        else if (arr[i+9] % 3 == 2) sm += arr[i+9];
        if (arr[i+10] % 3 == 0) sm -= arr[i+10];
        else if (arr[i+10] % 3 == 2) sm += arr[i+10];
        if (arr[i+11] % 3 == 0) sm -= arr[i+11];
        else if (arr[i+11] % 3 == 2) sm += arr[i+11];
        if (arr[i+12] % 3 == 0) sm -= arr[i+12];
        else if (arr[i+12] % 3 == 2) sm += arr[i+12];
        if (arr[i+13] % 3 == 0) sm -= arr[i+13];
        else if (arr[i+13] % 3 == 2) sm += arr[i+13];
        if (arr[i+14] % 3 == 0) sm -= arr[i+14];
        else if (arr[i+14] % 3 == 2) sm += arr[i+14];
        if (arr[i+15] % 3 == 0) sm -= arr[i+15];
        else if (arr[i+15] % 3 == 2) sm += arr[i+15];
    }
    return sm;
}

int branchless(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i++) {
        sm += (arr[i] % 3 - 1) * arr[i];
    }
    return sm;
}

int branchless_4(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i+=4) {
        sm += (arr[i] % 3 - 1) * arr[i];
        sm += (arr[i+1] % 3 - 1) * arr[i+1];
        sm += (arr[i+2] % 3 - 1) * arr[i+2];
        sm += (arr[i+3] % 3 - 1) * arr[i+3];
    }
    return sm;
}

int branchless_16(int arr[N]) {
    int sm = 0;
    for (int i = 0; i < N; i+=16) {
        sm += (arr[i] % 3 - 1) * arr[i];
        sm += (arr[i+1] % 3 - 1) * arr[i+1];
        sm += (arr[i+2] % 3 - 1) * arr[i+2];
        sm += (arr[i+3] % 3 - 1) * arr[i+3];
        sm += (arr[i+4] % 3 - 1) * arr[i+4];
        sm += (arr[i+5] % 3 - 1) * arr[i+5];
        sm += (arr[i+6] % 3 - 1) * arr[i+6];
        sm += (arr[i+7] % 3 - 1) * arr[i+7];
        sm += (arr[i+8] % 3 - 1) * arr[i+8];
        sm += (arr[i+9] % 3 - 1) * arr[i+9];
        sm += (arr[i+10] % 3 - 1) * arr[i+10];
        sm += (arr[i+11] % 3 - 1) * arr[i+11];
        sm += (arr[i+12] % 3 - 1) * arr[i+12];
        sm += (arr[i+13] % 3 - 1) * arr[i+13];
        sm += (arr[i+14] % 3 - 1) * arr[i+14];
        sm += (arr[i+15] % 3 - 1) * arr[i+15];
    }
    return sm;
}


ostream& operator<<(ostream& outs, __m128i& x) {
    outs << _mm_cvtsi128_si32(_mm_bsrli_si128(x, 0)) << " ";
    outs << _mm_cvtsi128_si32(_mm_bsrli_si128(x, 4)) << " ";
    outs << _mm_cvtsi128_si32(_mm_bsrli_si128(x, 8)) << " ";
    outs << _mm_cvtsi128_si32(_mm_bsrli_si128(x, 12));
    return outs;
}

#include <x86intrin.h>
int simd(int arr[N]) {
    __m128i sm = _mm_setzero_si128();
    __m128i one = _mm_set_epi32(1, 1, 1, 1);
    for (size_t i = 0; i < N; i+=4) {
        __m128i nums = _mm_loadu_si128((__m128i*) (arr+i));
        __m128i to_add = _mm_set_epi32(arr[i+3]%3, arr[i+2]%3, arr[i+1]%3, arr[i]%3);
        to_add = _mm_sub_epi32(to_add, one);
        to_add = _mm_mullo_epi32(to_add, nums);
        sm = _mm_add_epi32(sm, to_add);
    }
    int res= 0;
    res += _mm_cvtsi128_si32(sm);
    res += _mm_cvtsi128_si32(_mm_bsrli_si128(sm, 4));
    res += _mm_cvtsi128_si32(_mm_bsrli_si128(sm, 8));
    res += _mm_cvtsi128_si32(_mm_bsrli_si128(sm, 12));
    return res;
}

int simd_4(int arr[N]) {
    __m128i sm = _mm_setzero_si128();
    __m128i one = _mm_set_epi32(1, 1, 1, 1);
    for (size_t i = 0; i < N; i+=4) {
        __m128i nums = _mm_loadu_si128((__m128i*) (arr+i));
        __m128i to_add = _mm_set_epi32(arr[i+3]%3, arr[i+2]%3, arr[i+1]%3, arr[i]%3);
        to_add = _mm_sub_epi32(to_add, one);
        to_add = _mm_mullo_epi32(to_add, nums);
        sm = _mm_add_epi32(sm, to_add);
        
        i+=4;
        nums = _mm_loadu_si128((__m128i*) (arr+i));
        to_add = _mm_set_epi32(arr[i+3]%3, arr[i+2]%3, arr[i+1]%3, arr[i]%3);
        to_add = _mm_sub_epi32(to_add, one);
        to_add = _mm_mullo_epi32(to_add, nums);
        sm = _mm_add_epi32(sm, to_add);
        
        i+=4;
        nums = _mm_loadu_si128((__m128i*) (arr+i));
        to_add = _mm_set_epi32(arr[i+3]%3, arr[i+2]%3, arr[i+1]%3, arr[i]%3);
        to_add = _mm_sub_epi32(to_add, one);
        to_add = _mm_mullo_epi32(to_add, nums);
        sm = _mm_add_epi32(sm, to_add);
        
        i+=4;
        nums = _mm_loadu_si128((__m128i*) (arr+i));
        to_add = _mm_set_epi32(arr[i+3]%3, arr[i+2]%3, arr[i+1]%3, arr[i]%3);
        to_add = _mm_sub_epi32(to_add, one);
        to_add = _mm_mullo_epi32(to_add, nums);
        sm = _mm_add_epi32(sm, to_add);
    }
    int res= 0;
    res += _mm_cvtsi128_si32(sm);
    res += _mm_cvtsi128_si32(_mm_bsrli_si128(sm, 4));
    res += _mm_cvtsi128_si32(_mm_bsrli_si128(sm, 8));
    res += _mm_cvtsi128_si32(_mm_bsrli_si128(sm, 12));
    return res;
}

int main() {
    srand(1337);
    for(int i = 0; i < N; i++) {
        arr[i] = rand();
    }

    auto correct = regular_loop(arr);
    cout << correct << endl;

    int cnt = 100;
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = regular_loop(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branching: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = unroll_2_loop(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branching 2: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = unroll_4_loop(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branching 4: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = unroll_16_loop(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branching 16: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = branchless(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branchless: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = branchless_4(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branchless 4: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = branchless_16(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "Branchless 16: " << total.count()/cnt << endl;
    }

    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = simd(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "SIMD: " << total.count()/cnt << endl;
    }
    
    {
        microseconds total{ 0 };
        for (int i = 0; i < cnt; i++) {
            auto start = high_resolution_clock::now();
            auto result = simd_4(arr);
            auto stop = high_resolution_clock::now();
            assert(correct == result);
            auto duration = duration_cast<microseconds>(stop - start);
            total += duration;
        }
        cout << "SIMD 4: " << total.count()/cnt << endl;
    }
    
	return 0;
}

