
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl '\n'

char chr[27]={'a','b','c','d','e','f','g','h','i',
'j','k','l','m','n','o','p','q','r','s','t','u',
'v','w','x','y','z'};

int dp[110][110];
int yo(int a,int b)
{
    if(a<=0) return 0;
    if(b<=0) return 0;
    if(dp[a][b]!=-1) return dp[a][b];
    return dp[a][b]=1+max(yo(a-2,b+1),yo(a+1,b-2));
}

void solve()
{
   int n,k,m;
   cin>>n>>k>>m;
   string s;
   cin>>s;
   map<char,int>mp;

   for(int i=0;i<s.size();i++)
   {
        mp[s[i]]++;
   }
   for(int i=0;i<k;i++)
   {
        if(mp['a'+i]<k)
        {
            cout<<"NO"<<endl;
            for(int j=0;j<k;j++)
            {
                cout<<char('a'+i);
            }
            cout<<endl;
            return;
        }
   }
   cout<<"YES"<<endl;
   
}


int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    ll t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

}
