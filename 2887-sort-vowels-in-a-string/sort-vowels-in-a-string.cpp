class Solution {
public:
    string sortVowels(string s) {
        vector<int>upper(26,0);
        vector<int>lower(26,0);

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            {
                upper[s[i]-'A']++;
                s[i]='#';
            }
            
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                lower[s[i]-'a']++;
                s[i]='#';

            }

        }
        string ans;

        for(int i=0;i<26;i++)
        {
            char C='A'+i;
            while(upper[i])
           {
             ans+=C;
            upper[i]--;
           }
        }

         for(int i=0;i<26;i++)
        {
            char c='a'+i;
            while(lower[i])
           {
             ans+=c;
            lower[i]--;
           }
        }
        int j=0;

        for(int i=0;i<s.size();i++)
        {
    
            if(s[i]=='#')
            {
                s[i]=ans[j];
                j++;
        

            }
        }

        return s;

        
    }
};