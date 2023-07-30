// https://www.codingninjas.com/studio/problems/maximum-sum-rectangle_1082564

#include <bits/stdc++.h> 

int kadane(vector<int> arr){
	int sum = 0;
	int maxi = INT_MIN;
	for(auto i:arr){
		sum+=i;
		maxi = max(sum, maxi);
		if(sum<0){
			sum = 0;
		}
		
	}
	return maxi;
}

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
	int maxi = INT_MIN;
	for(int i=0; i<n; i++){
		vector<int> ans(m);
		for(int j = i; j<n; j++){
			for(int col = 0; col<m; col++){
				ans[col] += arr[j][col];
			}
			maxi = max(maxi, kadane(ans));

		}
	}
	return maxi;
}
