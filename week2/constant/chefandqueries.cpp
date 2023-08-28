#include <bits/stdc++.h>
using namespace std;

constexpr size_t max_val{ 1ull<<31 };
bitset<max_val> nums;
int main() {
    unsigned int q, s, a, b;
    cin >> q >> s >> a >> b;
    size_t sm = 0;
    while (q--) {
        size_t ind = s / 2;
        sm -= ind * nums[ind];
        nums[ind] = (s & 1);
        sm += ind * nums[ind];
        s = (a*s + b) % (1ull<<32);
    }
    
    cout << sm << endl;
	return 0;
}

