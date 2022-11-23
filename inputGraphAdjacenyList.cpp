#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long;


/*

/*
INPUT
5 3
3 2
4 1
2 5


OUTPUT
1 : 4 
2 : 3 5 
3 : 2 
4 : 1 
5 : 2 



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

    vector<int> adj_list[n+1];
    
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

    // print adjacency list
    for(int i=1; i<n+1; i++){
        cout<<i<<" : ";
        for (int j = 0; j < adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}