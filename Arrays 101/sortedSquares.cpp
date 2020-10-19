class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        ios_base :: sync_with_stdio(false);
        cin.tie(0);
        vector<int> ans = A;
        int i=0;
        int j=A.size()-1;
        int n = j;
        while(i<=j)
        {
            ans[n] = abs(A[i]) > abs(A[j]) ? A[i] * A[i++] : A[j] * A[j--];
            n--;
        }
        return ans;
    }
};
