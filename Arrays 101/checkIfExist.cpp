class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        set<int> s;
        for(auto a: arr){
            if(s.find(2*a)!=s.end() || (a%2==0 && s.find(a/2)!=s.end()))
                return true;
            s.insert(a);
        }
        return false;
    }
};
