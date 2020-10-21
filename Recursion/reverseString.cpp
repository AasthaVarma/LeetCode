class Solution {
public:
    void reverse(vector<char> &s, int i, int n){
        if(i>=n)
            return ;
        char temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        reverse(s, i+1, n-1);
    }
    void reverseString(vector<char>& s) {
        if(s.size()==1)
            return;
        reverse(s, 0, s.size()-1);
    }
};
