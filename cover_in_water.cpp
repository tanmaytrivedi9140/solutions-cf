#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int ans = 0;
     int i = 0;
     int dots = 0,max_dots = 0;
    for(int i=0;i<n;i++)
    {
           if(s[i] == '.' && s[i+1] == '.' && s[i-1] == '.')
        {
               dots = 2;
                break;  
        }
        else if(s[i] == '#')
        {
            continue;
        }
        else if(s[i] == '.')
        {
            dots++;
        }
    
       
     
      
    }
     cout<<dots<<endl;
    }

}


