#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s,temp="";
  cin>>s;
  sort(s.begin() , s.end());
  for(int i=0;i<s.size();i++)
  {
    if(s[i]!='+')
    {
        temp += s[i];
    }
  }
   sort(temp.begin(),temp.end());
   s = "";
   for(int i=0;i<temp.size();i++)
   {
    s += temp[i];
    s += '+';
   }
   s.pop_back();
   cout<<s<<endl;
}


