class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size(), new_n = n;
        for(int i=0; i<n; i++){
            if(arr[i] == 0){
                for(int j=n-1; j>i+1; j--)
                    arr[j] = arr[j-1];
                i++;
                if(i<n)
                arr[i] = 0; 
            }
        }
    }
};