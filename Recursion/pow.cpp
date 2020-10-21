class Solution {
public:
    double _pow_(double x, long int n){
        if(n==0)
            return 1;
        if(n==1)
            return x;
        
        if(n%2==0)
            return _pow_(x*x, n/2);
        
        return x*_pow_(x*x, (n-1)/2);
    }
    double myPow(double x, int n) {
        long int ln = n;
        double ans = _pow_(x, abs(ln));
        if(n<0)
            ans = 1/ans;
        return ans;
    }
};
