class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = a.size();
        if(n==0)
            return 0;
        int cnt=1;
        
        int id = 0;
        for(int i=0; i<n; i++){
            if(a[i] != a[id]){
                id++;
                a[id] = a[i];
                cnt++; 
            }
        }
        return cnt;
    }
};
