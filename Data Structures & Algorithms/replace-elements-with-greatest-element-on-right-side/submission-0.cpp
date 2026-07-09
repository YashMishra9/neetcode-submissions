#include<bits/stdc++.h>
class Solution {
public:
    int maxi(int l,vector<int>&arr){
        int mx=INT_MIN;
        for(int i=l;i<arr.size();i++){
            mx=*max_element(arr.begin()+l,arr.end());
        }
        return mx;
    }
    vector<int> replaceElements(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            arr[i]=maxi(i+1,arr);
        }
        arr[arr.size()-1]=-1;
        return arr;
    }
};