class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int f = m-1;
        int s = n-1;
        
        for(int i=m+n-1; i>=0; i--){
            if(s < 0)
                break;
            if(f>=0 && nums1[f] > nums2[s])
                nums1[i] = nums1[f--];
            else
                nums1[i] = nums2[s--];
        }
        
    }
};
