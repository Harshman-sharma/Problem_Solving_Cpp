/*
HACKERRANK

Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10
*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,m;
    cin >> n;
    vector<int> v1;
    
    for (int i=0; i<n; i++)
    {
        cin>>m;
        v1.push_back(m);   
    }

    sort(v1.begin(), v1.end());
    
    for(int x:v1)
    {
        cout<<x<<" ";
    }
    return 0;
}
