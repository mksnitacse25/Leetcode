class Solution {
public:
    bool helper(int i, string &str)
    {
        if(i>=str.size())
          return true;
        if(str[i]!=str[str.size()-i-1])
          return false;
        return helper(i+1,str);
    } 
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.size();i++)
        {
           if(s[i]>='A' && s[i]<='Z')
           {
               char ch=tolower(s[i]);
               str.push_back(ch);
           }
           else if(s[i]>='a' && s[i]<='z')
             str.push_back(s[i]);
           else if(s[i]>='0' && s[i]<='9')
             str.push_back(s[i]);
        }
        return helper(0,str);
    }
};