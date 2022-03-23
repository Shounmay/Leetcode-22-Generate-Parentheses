#include<iostream>

#include<vector>

using namespace std;

class Solution {
public:
    
    void generate(int n,string str,int open,int close,vector<string>&ans){
        if(open==n && close==n){
            ans.push_back(str);
            return;
        }
        
        if(open<n){
           
            generate(n,str+"(",open+1,close,ans);
            
        }
        
        
        if(close<open){
           
            generate(n,str+")",open,close+1,ans);
            
        
        }
        
        return;
        
    }
    vector<string> generateParenthesis(int n) {
        
        vector<string>ans;
        
        generate(n,"",0,0,ans);
        return ans;
        
    }
};