class Solution {
public:
    
    void moveZeroes(vector<int>& a) {
        int n = a.size();
        int j = -1, t;
        for(int i=0; i<n; i++){
            if(a[i]!=0){
                t = a[i];
                a[i] = a[j+1];
                a[j+1] = t;
                j++;
            }
        }
    }
};
