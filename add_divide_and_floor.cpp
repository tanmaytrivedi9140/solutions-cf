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
         vector<int> v;
         for(int i=0;i<n;i++)
         {
            int temp;
            cin>>temp;
            v.push_back(temp);
         }
         int minm = v[0];
         int maxm = v[0];
      for(int i=0;i<n;i++)
      {
             maxm = max(maxm , v[i]);
             minm = min(minm , v[i]);
      }
    
         vector<int> ans;
         while(minm!=maxm)
        {
            if(maxm%2 == 0)
            {
                ans.push_back(1);
                maxm+=1;
                minm+=1;
            }
           else if(maxm%2 ==  minm%2)
            {
                ans.push_back(0);
            }
            else{
                ans.push_back(0);
            }
            maxm/=2;
            minm/=2;
        }
        cout<<ans.size()<<endl;
        if(ans.size() > n || ans.size() == 0)
        {
          
        }
        else{
        
            for(int i=0;i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
     










    }

}


