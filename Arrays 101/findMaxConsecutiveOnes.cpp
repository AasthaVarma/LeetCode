class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& a) {
       int res = INT_MIN, running_cnt = 0;
        for(auto e: a){
            if(e == 0){
                res = max(res, running_cnt);
                running_cnt = 0;
            }
            else
                running_cnt++;
        }
        res = max(res, running_cnt);
        return res;
    }
};
