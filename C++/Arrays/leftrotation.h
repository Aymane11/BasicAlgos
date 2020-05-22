#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Rotating an array to left by n places
    Arguments:
        [vector<int>] -- [intial array]
        [int] -- [number of places]
    Returns:
        [vector<int>] -- [left rotated array]
*/
vector<int> leftrotation(vector<int> arr,int n){
    if(!n || !(n%arr.size())) return arr;
    vector<int> res;
    int size=arr.size();
    for(int i=n%size;i<size;++i)
        res.push_back(arr[i]);
    for(int i=0;i<n%size;++i)
        res.push_back(arr[i]);
    return res;
}