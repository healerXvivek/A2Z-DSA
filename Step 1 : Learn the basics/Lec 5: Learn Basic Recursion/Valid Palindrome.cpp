class Solution {
public:
    string reverse(string Str) { 
        if(Str.size() == 0)
        return Str;
        
        return reverse(Str.substr(1))+Str[0]; 
    }  

    bool isPalindrome(string S) {
        string str;
        for(char ch : S){
            char c=tolower(ch);
            if(isalnum(c))
            str.push_back(c);
        }
        string temp="";
        string ans=reverse(str);
        return (ans==str);
    }
};
