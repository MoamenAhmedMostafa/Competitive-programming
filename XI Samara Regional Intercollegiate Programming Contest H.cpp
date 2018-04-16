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
#define endl '\n'
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
const double PI = acos(-1.0);
struct node{
	int i, j, d;
};
int n, m, dis;
bool valid(int i, int j){ return i >= 0 && i < n&&j >= 0 && j < m; }
vector<vector<char> >g;

queue<node>Mon;

int xs, ys, xf, yf;

void BFS_Mon(){
	while (Mon.size()){
		node cur = Mon.front();
		Mon.pop();
		g[cur.i][cur.j] = 'M';
		if (!cur.d)continue;
		for (int i = 0; i < 4; i++){
			int x = dx[i] + cur.i, y = dy[i] + cur.j;
			if (valid(x, y) && g[x][y] != 'M'){
				g[x][y] = 'M';
				Mon.push({ x, y, cur.d-1});
			}
		}
	}

}
int BFS(){
	vector<vector<bool> >vis(n, vector<bool>(m,0));

	queue<node>q;
	q.push({ xs, ys, 0 });
	while (q.size()){
		node cur = q.front();
		q.pop();
		if (g[cur.i][cur.j] == 'M')continue;
		if (g[cur.i][cur.j] == 'F')return cur.d;
		vis[cur.i][cur.j] = 1;
		for (int i = 0; i < 4; i++){
			int x = dx[i] + cur.i, y = dy[i] + cur.j;
			if (valid(x, y) && g[x][y] != 'M'&& !vis[x][y] ){
				q.push({ x, y, cur.d + 1 });
				vis[x][y] = 1;
			}
		}

	}
	return -1;
}
int main(){
	fast
		/* Moamen */
		cin >> n >> m >> dis;
	g = vector<vector<char> >(n, vector<char>(m));
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			char a;
			cin >> a;
			if (a == 'M')Mon.push({ i, j, dis });
			if (a == 'S')xs = i, ys = j;
			g[i][j] = a;
		}
	}
	BFS_Mon();
	cout << BFS() << endl;
	stop();
	return 0;
}