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
int main() {
	fast;
	map<string, int>mp;
	int m = 1;
	string x = "";
	for (char i = 'a'; i <= 'z'; i++){
		x =i;
		mp[x] = m++;
	}
	for (char i = 'a'; i <= 'z'; i++){
		for (char j = i + 1; j <= 'z'; j++){
			x = "";
			x += i;
			x += j;
			mp[x] = m++;
		}
	}
	for (char i = 'a'; i <= 'z'; i++){
		for (char j = i + 1; j <= 'z'; j++){
			for (char k = j + 1; k <= 'z'; k++){
				x = "";
				x += i;
				x += j;
				x += k;
				mp[x] = m++;
			}
		}
	}
	for (char i = 'a'; i <= 'z'; i++){
		for (char j = i + 1; j <= 'z'; j++){
			for (char k = j + 1; k <= 'z'; k++){
				for (char f = k + 1; f <= 'z'; f++){
					x = "";
					x += i;
					x += j;
					x += k;
					x += f;
					mp[x] = m++;
				}
			}
		}
	}

	for (char i = 'a'; i <= 'z'; i++){
		for (char j = i + 1; j <= 'z'; j++){
			for (char k = j + 1; k <= 'z'; k++){
				for (char f = k + 1; f <= 'z'; f++){
					for (char y = f + 1; y <= 'z'; y++){
						x = "";
						x += i;
						x += j;
						x += k;
						x += f;
						x += y;
						mp[x] = m++;
					}
				}
			}
		}
	}
	string s;
	while (cin >> s)cout << mp[s] << endl;
	stop();
	return 0;
}