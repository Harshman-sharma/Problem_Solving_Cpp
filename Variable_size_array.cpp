/*
HACKERRANK

Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

SAMPLE INPUT
2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output

5
9
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>

using namespace std;

int main() {

    int n,q,temp2, row, col;

    cin >>n>>q;
// taking size of vector from user

    int a;
    vector<vector<int>> arr(n);
    // we can also mention size here like
    // vector<int> v(n);
    for(int i=0 ; i<n ; i++)
    {
        cin>>a;
        arr[i].push_back(a);

        for (int j=0; j<arr[i].at(0);j++)
        {
            cin>>temp2;
            arr[i].push_back(temp2);
        }
    }

    //Search method
    for (int k=0; k<q; k++)
    {
        cin>>row>>col;
        cout<<arr[row][col+1]<<endl;
    }
    return 0;
}
