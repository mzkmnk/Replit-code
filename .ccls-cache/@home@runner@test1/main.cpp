#include <bits/stdc++.h>
using namespace std;

// logistic
// algorithm


int main(){
    string S,T;
    cin >> S >> T;
    int INF = 1 << 9;
    int S_len = S.size(),T_len = T.size();
    
    vector<vector<int>> dp(S_len+1,vector<int>(T_len+1,0));
    for(int i = 0; i < S_len + 1; i++){
        dp.at(0).at(i) = i;
    }
    for(int i = 0; i < T_len + 1; i++){
        dp.at(i).at(0) = i;
    }
    for(vector<int> x: dp){
        for(int s: x){
            cout << s << " ";
        }
        cout << endl;
        
    }
}