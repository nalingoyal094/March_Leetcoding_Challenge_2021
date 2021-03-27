class Solution {
public:
    int countSubstrings(string s) {
        
        int n=s.size();
        
        int m[n][n];
        
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                m[i][j]=-1;
            }
            
        }
        int count=0;
        for (int i=0;i<n;i++)
        {
            m[i][i]=1;
            count++;
        }
        
        for (int i=n-2;i>=0;i--)
        {
            for (int j=i+1;j<n;j++)
            {
                if (s[i]==s[j])
                {
                    if (m[i+1][j-1]==0)
                    {
                        m[i][j]=0;
                    }
                    else
                    {
                        m[i][j]=1;
                        count++;
                    }
                }
                else
                {
                    m[i][j]=0;
                }
            }
        }
        
        
        
        
        return count;
        
    }
};
