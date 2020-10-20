class Solution {
public:
    bool validMountainArray(vector<int>& a) {
        bool isIn = false, isDec = false;
        const int sz = a.size();
        int i =1;
        while(i<sz) {    
            if(a[i-1]< a[i] && isDec == false)
                isIn = true; 
            else if (a[i-1] > a[i] && isIn == true)
                isDec = true; 
            else
                return false;
            i++;
        }
        if(isIn && isDec) return true;      
        return false;
    }
};
