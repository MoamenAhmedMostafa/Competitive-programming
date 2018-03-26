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
double arr[100001];
int n, k;
bool okay(double md){
	double sum = 0;
	for (int i = 0; i < n; i++){
		if (arr[i]>md)sum += ((arr[i] - md) *(1.0-k/100.));
		else sum -= md - arr[i];
	}
	return sum >= 0;
}
const double PI = acos(-1.0);
int main(){
	fast
	cin >> n >> k;
	for (int i = 0; i < n; i++)cin >> arr[i];
	sort(arr, arr + n);
	double l = 0, h = arr[n-1],ans=0;
	while (h-l>EPS){
		double md = (l + h) / 2;;
		if (okay(md)){
			ans = md;
			l = md;
		}
		else h = md;
	}
	cout <<fixed<<setprecision(9)<< ans << endl;
	stop();
	return 0;
}