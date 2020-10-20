class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        const int n = a.size();
        if(n<=1)
            return {-1};
        
        for(int i=n-2; i>=0; i--){
            if(a[i] < a[i+1])
                a[i] = a[i+1];
        }
        
        a.erase(a.begin());
        a.push_back(-1);
        return a;
    }
};
