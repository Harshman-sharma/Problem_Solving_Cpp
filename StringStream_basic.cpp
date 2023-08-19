/* 
Sample Input
23,4,56


Sample Output
23
4
56
*/



#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    char t;
    int i;
    vector<int> v1;
    
    while (ss >> i)
    {
        v1.push_back(i);
        ss >> t;
    }
    
    return v1;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
