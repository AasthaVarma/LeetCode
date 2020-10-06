class Solution{
	public:
		int countElements(vector<int> &a){
			ios_base::sync_with_stdio(false);
			cin.tie(NULL);

			map<int, int> m;
			int n = a.size();
			for(int i=0; i<n; i++){
				m[a[i]]++;
			}
			int cnt=0;
			for(auto x:m){
				if(m.find(x+1) != m.end())
					cnt += m[x+1].second;
			}
			return cnt;
		}	
};
