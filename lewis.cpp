#include <iostream>
#include <cstdlib>

using namespace std;
#define LETTERS 27
int main(){

    string code = "";
    string pass = "";
    string ans  = "";
    cin >> code;
    cin >> pass;

    string solver_c="abcdefghijklmnopqrstuvwxyz&";
    char solver[LETTERS][LETTERS];    
    for(int i = 0; i < LETTERS; i++){
        for(int j = 0; j < LETTERS; j++){
            solver[i][j] = solver_c.at((i+j)%solver_c.size());
            cout<<solver[i][j]<<" ";
        }
        cout<<endl;
    }
    for(int i = 0; i < code.size(); i++){
        int pLoc = solver_c.find(pass.at(i%pass.size()));
        int cLoc = 0;
        for(int j = 1; j < LETTERS; j++){
            if(solver[pLoc][j] == code.at(i)){
                cLoc = j;
            }
        }
        cout<<cLoc-1<<" ";
        ans += solver_c.at(cLoc-1);
        cout<<ans<<endl;
    }
    cout<<ans<<endl;/*
    for(int i = 0; i < ans.size(); i++){
        int pLoc = solver_c.find(pass.at(i%pass.size()));
        int aLoc = solver_c.find(ans.at(i));
        cout<<solver[pLoc][aLoc+1];
    }
    cout<<endl;
    */
    //cout<<ans<<endl;
    return 0;
}

/*

 */
