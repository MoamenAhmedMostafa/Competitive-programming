#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
typedef long long ll;
typedef unsigned long long ull;
//const int oo = 2e9;
//const ll k = -9e18;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
/*template<typename T>
class M{
private:
	T a, b;
public:
	M(T x,T y){
		M ::a = x;
		M :: b = y;
	};
	~M(){};
	T sum(){ return a + b; }
};*/
int arr[100003], arr2[100005];
int main(){
	fast
		int n, q;
	cin >> n;
	for (int i = 1; i <= n; i++)cin >> arr[i];
	cin >> q;
	while (q--){
		int l, r;
		cin >> l >> r;
		arr2[l]++; arr2[r + 1]--;
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		arr2[i] += arr2[i - 1];
		if (arr2[i] == 0)ans++;
	}
	cout << ans << endl;
	for (int i = 1; i <= n; i++)if (arr2[i]==0)cout << arr[i] << " ";
	//	system("pause");
	return 0;
}