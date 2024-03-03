//Panagram Checking
// Given a string s check if it is "Panagram" or not.

// A "Panagram" is a sentence containing every letter in the English Alphabet.

// Example 1:

// Input:
// s = "Bawds jog, flick quartz, vex nymph"
// Output: 
// 1
// Explanation: 
// In the given input, there
// are all the letters of the English
// alphabet. Hence, the output is 1.

#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        int n=s.length();
        if(n<26){
            return false;
        }
        
        vector<int>vis(26,0);
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                vis[s[i]-'a']++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                vis[s[i]-'A']++;
            }
            
        }
        for(int i=0;i<26;i++){
            if(!vis[i]) return false;
        }
        return true;
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends