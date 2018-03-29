#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-8;
typedef long long ll;
typedef unsigned long long ull;
const ll mod = ll(1e9 + 7);
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
void stop(){
#ifndef ONLINE_JUDGE
	system("pause");
#endif
}
void run(){
#ifndef ONLINE_JUDGE
	freopen("intput.txt", "r", stdin);
#endif

}
int arr[5];
int solve(int i, ll sum){
	if (i == 5){
		if (sum == 23)return 1;
		return 0;
	}
	int ret = 0;
	  ret+=solve(i + 1, sum + arr[i]);
	  ret+= solve(i + 1, sum - arr[i]);
	  ret+=solve(i + 1, sum * arr[i]);
	  return ret;
}
int main(){
	fast
		
	while (1){
		int c = 0;
		for (int i = 0; i < 5; i++){
			cin >> arr[i];
			if (!arr[i])c++;
		}
		if (c == 5)break;
		sort(arr, arr + 5);
		bool ans = 0;
		do{

			if (solve(1,arr[0])){
				ans = 1;
				break;
			}
		} while (next_permutation(arr,arr+5));
		if (!ans)cout << "Impossible" << endl;
		else cout << "Possible" << endl;
	}
	stop();
	return 0;
}