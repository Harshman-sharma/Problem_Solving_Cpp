/*
Sample Input 0

07:05:45PM
Sample Output 0

19:05:45
*/


#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int num1 = int(s[0])-48;
    int num2 = int(s[1])-48;
    
    if(num1==1 && num2==2 && s[8]=='A')
    {
        num1=0;
        num2=0;
    }
    else if(num1==1 && num2==2 && s[8]=='P')
    {
        num1=1;
        num2=2;
    }
    else if(s[8]=='P')
    {
        if(num2>7){
            num1=num1+2;
        }
        else{
            num1 = num1+1;
        }
        num2 = (num2+2)%10;
        
    }
    string hourstr1 = to_string(num1);
        string houtstr2 = to_string(num2);
        string time = hourstr1 + houtstr2 + s[2]+ s[3]+ s[4]+ s[5]+ s[6]+ s[7];
    
    return time;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
