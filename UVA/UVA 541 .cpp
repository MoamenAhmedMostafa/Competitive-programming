#include <bits/stdc++.h>
using namespace std;
#define all(v)          ((v).begin()), ((v).end())
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define clr(v,d)		memset(v, d, sizeof(v))
const double EPS = 1e-12;
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
int arr[101][101];
int a[102], b[102];
int main() {
	fast;
	int n;
	while (cin >> n){
		int M[99][99], F[99], C[99], conti, contj, I, J;
		
		if (n == 0) break;
		clr(C, 0);
		for (int i = 0; i < n; i++){
			F[i] = 0;
			for (int j = 0; j<n; j++){
				cin >> M[i][j];
				F[i] += M[i][j];
				C[j] += M[i][j];
			}
		}
		conti = 0;
		contj = 0;
		for (int i = 0; i<n; i++){
			if (F[i] % 2 == 1){
				conti++;
				I = i;
			}
			if (C[i] % 2 == 1){
				contj++;
				J = i;
			}
			if (conti + contj>2) break;
		}
		if (conti + contj == 0) cout << "OK" << endl;
		else if (conti == 1 && contj == 1) cout << "Change bit (" << I + 1 << "," << J + 1 << ")" << endl;
		else if (conti + contj>0) cout << "Corrupt" << endl;
	}
	stop();
	return 0;
}