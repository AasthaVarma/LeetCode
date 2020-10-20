class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n = a.size();
        int evenEnd = 0;
        
        for(int i=0; i<n; i++){
            if(a[i] %2 ==0)
                swap(a[i], a[evenEnd++]);
        }
        return a;
    }
};
