class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n = a.size();
        int cnt=0;
        for(int i=0; i<n; i++){
            while(i < n && a[i] == val){
                cnt++;
                i++;
            }
            cout << i << " " << cnt << endl;
            if(i<n)
            a[i-cnt] = a[i];    
        }
        return n-cnt;
    }
};
