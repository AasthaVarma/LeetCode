class Solution {
public:
    unordered_map<int, int> um;
    int fib(int N) {
        if(um.find(N) != um.end())
            return um[N];
        
        int res;
        if(N<2)
            res = N;
        else{
            res = fib(N-1)+fib(N-2);
        }
        um[N] = res;
        return res;
    }
};
