#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int a ,b , c , d , e , f;
        cin>> a>>b>>c;
        int sum =  a+b+c;
        d =  sum-a;
        e = sum-b;
        f = sum-c;
        if(d>=10 || e>=10 || f>=10)
        {
           cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

}


