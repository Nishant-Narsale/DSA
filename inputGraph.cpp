#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long;

/*
INPUT
5 3
3 2
4 1
2 5


OUTPUT
0 0 0 0 0 0 
0 0 0 0 1 0 
0 0 0 1 0 1 
0 0 1 0 0 0 
0 1 0 0 0 0 
0 0 1 0 0 0 


*/


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    bool isDirected = false;

    int n,m;
    cin>>n>>m;

    vector<vector<int>>adj_mat(n+1,vector<int>(n+1,0));
    int first, second;
    for(int i=0; i<m; i++){
        cin>>first>>second;
        if(isDirected){
            adj_mat[first][second]=1;
        }
        else{
            adj_mat[first][second]=1;
            adj_mat[second][first]=1;
        }
    }

    // print adjacency matrix
    for(int i=0; i<n+1; i++){
        for (int j = 0; j < n+1; j++)
        {
            cout<<adj_mat[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}