#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define MP make_pair
#define sz(x) ((int)((x).length()))
#define fi first
#define se second
#define  rep(i,n)      for(int i=0;i<n;i++)
const double PI = acos(-1.0);
typedef long long ll;
/*
	#########################################################
	#                                        _____          #
	#|\    /|    ____    /\     |\    /|    |         |\  | #
	#| \  / |   |    |  /__\    | \  / |    |-----    | \ | #
	#|  \/  |   |____| /    \   |  \/  |    |_____    |  \| #
	#########################################################
	*/
string t_string(int x)
{
    stringstream ss;
    ss << x;
    string y;
    ss >> y;
    return y;
}
void fast()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
set<int>st;
main()
{
    fast();
int n,k,a,b; pair<int,int> p[10000];
cin>>k>>n;
rep(i,n){
cin>>p[i].fi>>p[i].se;
}
sort(p,p+n);
rep(i,n){
if(k>p[i].fi)k+=p[i].se;
else {cout<<"NO"; return 0;}
}
cout<<"YES";
        return 0;
    }