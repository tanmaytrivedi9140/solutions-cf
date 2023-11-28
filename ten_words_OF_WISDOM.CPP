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
     vector<pair<int , int >> p;
     for(int i=0;i<n;i++)
     {
        int a , b;
        cin>>a>>b;
        p.push_back(make_pair(b , a));
     }
   
     int max_val = -1;
     int ans = 0;
     for(int i = 0;i<n;i++)
     {
        if(p[i].first > max_val)
        {
            if(p[i].second<=10)
            {
            max_val = p[i].first ;
      
       
            ans = i+1;
            }
        }
     }

     cout<<ans<<endl;
    }

}


