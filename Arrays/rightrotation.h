#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Rotating an array to right by n places
    Arguments:
        [vector<int>] -- [intial array]
        [int] -- [number of places]
    Returns:
        [vector<int>] -- [right rotated array]
*/
vector<int> rightrotation(vector<int> arr,int n){
    if(!n || !(n%arr.size())) return arr;
    vector<int> res;
    int size=arr.size();
    for(int i=size-(n%size);i<size;i++)
        res.push_back(arr[i]);
    for(int i=0;i<size-n%size;++i)
        res.push_back(arr[i]);
    return res;
}