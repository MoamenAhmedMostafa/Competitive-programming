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
vector<vector<int> >v;
int main() {
	fast
		string s, t = " ";
	getline(cin, s);
	for (int i = 0; i<s.size(); i++){
		if (s[i] == ',' || s[i] == '.' || s[i] == '?' || s[i] == '!'){
			s.insert(i + 1, t, 0, 1);
		}

		if (s[i] == ' '){

			for (int j = i + 1; j<s.size(); j++){
				if (s[i] == s[j]){
					s.erase(j, 1);
					j--;
				}

				else if (s[j] == ',' || s[j] == '.' || s[j] == '?' || s[j] == '!'){
					s.erase(i, 1); s.insert(i + 1, t, 0, 1); break; }
				else
					break;
			}
		}

	}
	cout << s << endl;
	stop();
	return 0;
}