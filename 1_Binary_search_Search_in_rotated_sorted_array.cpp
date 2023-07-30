// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?leftPanelTab=1

#include <bits/stdc++.h>

int pivot_index(vector<int>& arr, int n){
    int s = 0;
    int e = n-1;
    int mid;
    while(s<e){
        mid = (s+e)/2;
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
    return s;
}

int binary_search(vector<int> &arr, int start, int end, int target){
    int s = start;
    int e = end;
    while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    // Write your code here.
    // Return the position of K in ARR else return -1.
    int pivot = pivot_index(arr, n);

    //Now apply condition for search to be performed according to the pivot index

    if(k >=arr[pivot] && k<= arr[n-1] ){
        return binary_search(arr, pivot, n-1, k);
    }
    else{
        return binary_search(arr, 0, pivot-1, k);
    }

}
