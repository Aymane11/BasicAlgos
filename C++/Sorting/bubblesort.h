#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Sorting an array using bubble sort algortihm
    Arguments:
        [vector<int>] -- [initial array]
    Returns:
        [vector<int>] -- [sorted array]
*/
vector<int> bubblesort(vector<int> arr){
    bool sorted=false;
    int comps=arr.size() - 1;
    while(!sorted){
        sorted=true;
        for (int j = 0; j < comps; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                sorted=false;
            }
        }
        comps--;
    }
    return arr;
}