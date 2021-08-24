#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int countElements(int a[], int n)
{
     
    // Stores the frequencies
    // of array elements
    int cnt[n + 1] = {0};
    memset(cnt, 0, sizeof(cnt));
     
    // Stores required count
    int ans = 0;
 
    // Update frequency of
    // each array element
    for(int i = 0; i < n; i++)
    {
        ++cnt[a[i]];
    }
     
    // Find sum of all subarrays
    for(int l = 0; l < n; ++l)
    {
        int sum = 0;
 
        for(int r = l; r < n; ++r)
        {
            sum += a[r];
 
            if (l == r)
                continue;
 
            if (sum <= n)
            {
                 
                // Increment ans by cnt[sum]
                ans += cnt[sum];
 
                // Reset cnt[sum] by 0
                cnt[sum] = 0;
            }
        }
    }
 
    // Return ans
    return ans;
}

int main(){
	int n;
	
	cout<<"Enter a size of array: ";
	cin>>n;
	
	int *arr = new int[n];
	
	cout<<"Enter a "<<n<<"Elements in array: "<<endl;
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	
	cout<<countElements(arr, n);
	
	
	return 0;
}
