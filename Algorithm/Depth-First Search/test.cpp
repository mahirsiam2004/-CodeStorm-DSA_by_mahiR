#include<bits/stdc++.h>
using namespace std;
bool vis[20][20];
char a[20][20];
void dfs(int si,int sj){

}
int main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int n,m;
       cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int si, sj;
    cin >> si >> sj;
    memset(vis, false, sizeof(vis));
    dfs(si, sj);
        
    }
    return 0;
}