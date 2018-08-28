// Fabho
// A_Game_With_Sticks.cpp

#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int rows, cols;

    scanf("%d %d", &rows, &cols);

    string winner = "Malvika";

    while(true){
        if(rows >= 1 && cols >= 1){
            rows--;
            cols--;

            if(winner == "Malvika")
                winner = "Akshat";
            else
                winner = "Malvika";
        }
        else
            break;
    }

    cout<<winner<<endl;
return 0;
}
