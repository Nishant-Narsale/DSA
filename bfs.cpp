#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long;

/*

INPUT
5 5
0 2
4 1
2 3
0 1
1 4

OUTPUT
0 2 1 3 4 


*/


// taking input adjacency list and number of nodes in graph and starting node for bfs
vector<int> bfs(int V, vector<int> adj_list[], int start_node){
    vector<int> ans;
    int vis[V] = {0};
    queue<int> q;
    q.push(start_node);
    vis[start_node] = 1;

    while (!q.empty())
    {
        int node = q.front();
        ans.push_back(node);
        q.pop();
        for(int neighbour: adj_list[node]){
            if(!vis[neighbour]){
                vis[neighbour] = 1;
                q.push(neighbour);
            }
        }
    }
    
    return ans;
    
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    bool isDirected = true;

    int n,m;
    cin>>n>>m;

    vector<int> adj_list[n];
    
    int first, second;

    for(int i=0; i<m; i++){
        cin>>first>>second;
        if(isDirected){
            adj_list[first].push_back(second);
        }
        else{
            adj_list[first].push_back(second);
            adj_list[second].push_back(first);
        }
    }

    vector<int> bfsAns = bfs(n,adj_list,0);

    for(int i: bfsAns){
        cout<<i<<" ";
    }

    return 0;
}