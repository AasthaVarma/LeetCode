class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int n = a.size();
        
        int maxSum=a[0], currSum=a[0];
        
        for(int i=1; i<n; i++){
            currSum = max(a[i], currSum+a[i]);
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};
