#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
typedef unsigned long long ull;
int mod(int x,int N){
    return (x % N + N) %N;
}
ll m,n,mn=1e18;
bool visit[100005];
ll arr[100005];
vector<vector<ll> > v;
void dfs(int t){
      visit[t]=true;
       mn=min(arr[t],mn);
    for(int i=0;i<v[t].size();i++){
             mn=min(arr[v[t][i]],mn);
        if(visit[v[t][i]]==true)continue;
         dfs(v[t][i]);
    }
  }
int main(){
   fast
    ll x,y,c=0;
  cin >>n>>m;
  v.resize(n+1);
  for(int i=0;i<n;i++)
    cin>>arr[i];
  for(int i=0;i<m;i++){
    cin>>x>>y;
    x--;y--;
    v[x].push_back(y);
    v[y].push_back(x);
  }
  for(int i=0;i<n;i++){
    if(visit[i]==false){
            dfs(i);
            c+=mn;
            mn=1e18;
    }
    mn=1e18;
  }
  cout<<c<<endl;
 return 0;
}