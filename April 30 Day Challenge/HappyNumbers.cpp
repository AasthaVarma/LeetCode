class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        int sum = 0, m=n, d;
        while(m != 1){
            sum =0;
            while(m!=0){
                d = m%10;
                m = m/10;
                sum += d*d;
            }
            
            if(s.find(sum) != s.end())
                return false;
            else
                s.insert(sum);
            
            m = sum;
        }
        return true;
    }
};
