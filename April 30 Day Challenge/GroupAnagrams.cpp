class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string, vector<string>> um;
        vector<vector<string>> v;
        int n = s.size();
        string q;
        for(int i=0; i<n; i++){
            q = s[i];
            sort(q.begin(), q.end());
            um[q].push_back(s[i]);
        }
                    
        for(auto x: um){
            v.push_back(x.second);
        }
        return v;
    }
};
