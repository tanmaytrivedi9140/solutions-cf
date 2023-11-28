#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
     int n,x;
     cin>>n>>x;
     int arr[n+1];
     arr[0] = 0;
     int max_diff = -999;
     for(int i=1;i<=n;i++)
     {
        cin>>arr[i];
        max_diff = max(arr[i]-arr[i-1],max_diff);
     }
     int nx = 2*(x-arr[n]);
     max_diff = max(nx,max_diff);
     cout<<max_diff<<endl;
    
    
    }

}


