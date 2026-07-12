// Problem Understanding :

// There are 3 friends : Petya, Vastya, Tonya
// n = no : of ques
// row = ques , col = person ( know ans or not ) 
// if they know ans to that particular ques = 1
// if not = 0
// max 2 people should know ans, so then only they will implement 
// that ques


#include <bits/stdc++.h>
using namespace std;

int team(int n, vector<vector<int>>& ansGraph){
    
    int cnt = 0;
    vector<int> vis(n+1, 0);
    for(int i=0; i<n; i++){
    	for(int j=0; j<3; j++){
    		if(ansGraph[i][j] == 1){
    			vis[i]++;
    		}
    	}
    }

    for(int i=0; i<vis.size(); i++){
    	if(vis[i] >= 2) cnt++;
    }


    return cnt;

}

int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    // no : of ques
	int n;
	cin >> n;

	//graph of ans's they know per ques
	vector<vector<int>> ansGraph(n, vector<int>(3));
    for(int i=0; i<n; i++){
    	for(int j=0; j<3; j++){
    		cin >> ansGraph[i][j];
    	}
    }

    int cntAns = team(n, ansGraph);
    cout << cntAns;
    
    return 0;

}

