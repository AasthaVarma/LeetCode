class Solution {
public:
    void moveZeroes(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        const int n = a.size();
        int id=0;
        for(int i=0; i<n; i++){
            if(a[i] != 0){
                swap(a[id++], a[i])      ;
            }
                
        }
    }
};
