// Implement Atoi

// Given a string, s, the objective is to convert it into integer format without utilizing any built-in functions. If the conversion is not feasible, the function should return -1.

// Note: Conversion is feasible only if all characters in the string are numeric or if its first character is '-' and rest are numeric.

// Example 1:

// Input:
// s = "-123"
// Output: 
// -123
// Explanation:
// It is possible to convert -123 into an integer 
// and is so returned in the form of an integer
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int sign=1;
        int i=0;
        if(s[0]=='-'){
            sign=-1;
            i++;
        }
        int ans=0;
        for(;i<s.length();i++){
            if(s[i]>='0' && s[i]<='9'){
                ans=ans*10+(s[i]-'0');
            }
            else{
                return -1;
            }
        }
        return ans*sign;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends