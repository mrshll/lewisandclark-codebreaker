#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    string code = "";
    string pass = "";
    string ans  = "";
    cin >> ans;
    cin >> pass;

    string solver_c="abcdefghijklmnopqrstuvwxyz&";
    char solver[27][27];    
    for(int i = 0; i < 27; i++){
        for(int j = 0; j < 27; j++){
            solver[i][j] = solver_c.at((i+j)%solver_c.size());
            cout<<solver[i][j]<<" ";
        }
        cout<<endl;
    }/*
    for(int i = 0; i < code.size(); i++){
        int pLoc = solver_c.find(pass.at(i%pass.size()));
        int cLoc = 0;
        for(int j = 0; j < 27; j++){
            if(solver[pLoc][j] == code.at(i)){
                cLoc = j;
            }
        }
        ans += solver_c.at(cLoc-1);
    }
    cout<<ans<<endl;*/
    for(int i = 0; i < ans.size(); i++){
        int pLoc = solver_c.find(pass.at(i%pass.size()));
        int aLoc = solver_c.find(ans.at(i));
        cout<<solver[pLoc][aLoc];
    }
    cout<<endl;
    //cout<<ans<<endl;
    return 0;
}

/*

 */
