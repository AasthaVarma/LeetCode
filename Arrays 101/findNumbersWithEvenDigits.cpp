class Solution {
public:
    int findNumbers(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int res=0, cnt=0;
        
        for(auto e: nums){
            cnt=0;
            while(e){
                e = e/10;
                cnt++;
            }
            if(cnt%2==0)
                res++;
        }
        return res;
    }
};
