#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define all(v) ((v).begin()), ((v).end())
#define clr(v,d ) memset(v, d, sizeof(v))
typedef long long ll;
typedef unsigned long long ull;
int mod(int x, int N){
	return (x % N + N) % N;
}
int arr[26];
int main(){
	fast
		ll ans = 0;
	string s;
	cin >> s;
	int q = -1;
	for (int i = 0; i < 26; i++)cin >> arr[i];

	int n = s.size();
	char a = '1';
	for (int i = 0; i < n; i++){
		if (s[i] == '?'){
			if (i == 0){
				int j = 0;
				for ( j = i; j < n; j++){
					if (s[j] != '?'){
						for (int k = i; k < j; k++)s[k] = s[j];
						break;
					}
				}
				if (j == n){
					for (int k = i; k < j; k++)s[k] = 'a';
					break;
				}
			}
			else {
				int j = 0;
				for ( j = i; j < n; j++){
					if (s[j] != '?'){
						int mn = 1e8;
						char aa;
						for (int k = 'a'; k <= 'z'; k++){
							int x = abs(arr[a - 'a'] - arr[k - 'a']) + abs(arr[s[j] - 'a'] - arr[k - 'a']);
							if (x < mn){
								mn = x;
								aa = k;
							}
						}
						if (j != n){
							for (int k = i; k < j; k++)s[k] = aa;
							break;
						}
						else {
							for (int k = i; k < j; k++)s[k] = a;
							break;
						}
					}
				}

			}
		}
		else q = i;
		a = s[i];
	}
	for (int i = q; i < n&&q != -1; i++)s[i] = s[q];
	for (int k = 0; k < n-1; k++)
		ans += abs(arr[s[k] - 'a'] - arr[s[k + 1] - 'a']);
	cout << ans << endl;
	cout << s << endl;
	//system("pause");
	return 0;
}