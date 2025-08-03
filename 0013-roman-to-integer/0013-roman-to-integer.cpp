class Solution {
public:
    int romanToInt(string s) {
        map<char, int>mp;
        mp['I']=1; mp['V']=5; mp['X']=10; mp['L']=50; mp['C']=100; mp['D']=500; mp['M']=1000;
        int ans=0,check=1;
        for (int i=0;i<size(s)-1;i++){
            if(s[i]=='I' && (s[i+1]=='V'||s[i+1]=='X')){
                ans+=mp[s[i+1]]-mp[s[i]];
                i++;
                if(i==size(s)-1) check=0;
            }
            else if(s[i]=='X' && (s[i+1]=='L'||s[i+1]=='C')){
                ans+=mp[s[i+1]]-mp[s[i]];
                i++;
                if(i==size(s)-1) check=0;
            }
            else if(s[i]=='C' && (s[i+1]=='D'||s[i+1]=='M')){
                ans+=mp[s[i+1]]-mp[s[i]];
                i++;
                if(i==size(s)-1) check=0;
            }
            else{
                ans+=mp[s[i]];
            }
        }
        if(check) ans+=mp[s[size(s)-1]];
        return ans;
    }
};