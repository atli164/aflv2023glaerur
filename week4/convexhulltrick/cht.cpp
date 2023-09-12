struct line {
    ll m, b;
    ll get(ll x) { return m*x + b; };
    ll intersect(line other) { return (other.b - b) / (m - other.m); }
};
 
struct convex_hull_trick {
    vector<line> lines;
    ll query(ll x) {
        int lo = 0, hi = static_cast<int>(lines.size()) - 2;
        int ind = hi+1;
        while (lo <= hi) {
            int mid = (lo+hi)/2;
            if (lines[mid].intersect(lines[mid+1]) >= x) {
                ind = mid;
                hi = mid-1;
            }
            else {
                lo = mid+1;
            }
        }
        return lines[ind].get(x);
    }
    void add(line l) {
        auto sz = lines.size();
        while (sz >= 2 && lines[sz-2].intersect(lines[sz-1]) >= lines[sz-2].intersect(l)) {
            lines.pop_back();
            sz--;
        }
        lines.push_back(l);
    }
    size_t size() {
        return lines.size();
    }
};
