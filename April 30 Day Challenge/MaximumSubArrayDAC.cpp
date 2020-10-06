class Solution {
public:
    int crossSum(vector<int> a, int l, int m, int r){
        int ls = a[m], rs = a[m+1], cs=a[m];
        for(int i=m-1; i>=l; i--){
            cs += a[i];
            if(cs > ls)
                ls = cs;
        }
        cs = a[m+1];
        for(int i=m+2; i<=r; i++){
            cs += a[i];
            if(cs > rs)
                rs = cs;
        }
        return ls+rs;        
    }
    
    int maxSum(vector<int> a, int l, int r){
        if (l == r)
            return a[l];
        int m = l+(r-l)/2, ls, rs, cs;
        ls = maxSum(a, l, m);
        rs = maxSum(a, m+1, r);
        cs = crossSum(a, l, m, r);
        return max({ls, rs, cs});
    }
    
    int maxSubArray(vector<int>& a) {
        return maxSum(a, 0, a.size()-1);
    }
};
