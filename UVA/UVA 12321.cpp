#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-8;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int>P;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
const int N = 500001;
#define endl '\n'
#define F first
#define S second
const ll inf = 2e18;
#define pii pair<int,int>
#define pll pair<ll,ll>
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
ll gcd(ll a, ll b){return !b ? a : gcd(b, a % b);}
ll fixMod(ll a, ll b){ return ((a%b) + b) % b; }
int main(){
	fast
	int g,l;
	while(cin>>l>>g){
        if(!g&&!l)break;
        vector<pii>v;
        for(int i=0;i<g;i++){
            int x,y;
            cin>>x>>y;
            v.push_back({x-y,x+y});
        }
        sort(all(v));
        int i=0,s=0,e=0,ans=0;
        while(i<g&&s<l){
            int st=-1;
            while(i<g&&v[i].first<=s){
                e=max(e,v[i].S);
                st++;
                i++;
            }
            ans+=st;
            if(s==e)break;
            s=e;
        }
        if(s<l)cout<<-1<<endl;
        else cout<<ans+g-i<<endl;
	}
		return 0;
}
