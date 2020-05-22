#include <bits/stdc++.h>
using namespace std;
/*
    Summary:
        Sorting an array using merge sort algortihm
    Arguments:
        [vector<int>] -- [initial array]
    Returns:
        [vector<int>] -- [sorted array]
*/
vector<int> mergesort(vector<int> arr){
    for (int i = 0; i < arr.size(); ++i){
        int index_min = i;
        for (int j = i; j < arr.size(); ++j){
            if (arr[index_min] > arr[j])
                index_min = j;
        }
        swap(arr[i] ,arr[index_min]);
    }
    return arr;
}