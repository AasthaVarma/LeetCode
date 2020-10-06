class Solution{
	public:
		int countElements(vector<int> &a){
			ios_base::sync_with_stdio(false);
			cin.tie(NULL);
			int n = a.size();
			if(n<=1)
				return 0;

			sort(a.begin(),a.end());

			int left=0, right=1, cnt=0;

			while(right<n){
				if(a[right] == a[left]+1){
					cnt += right - left;
					left = right;
					right ++;
				}

				else if (a[left] == a[right])
					right++ ;

				else{
					left = right;
					right ++;
				}
				
			}

			return cnt;
		}	
};
