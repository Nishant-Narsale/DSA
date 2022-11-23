#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

	int arr[5];

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    

    int temp;
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

	return 0;
}
