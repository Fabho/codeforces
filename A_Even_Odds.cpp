// Fabho
// A_Even_Odds.cpp

#include <iostream>
using namespace std;

int main(){
    long long numbers, query;
    long long ans, tmp;
    cin>>numbers>>query;

    if(numbers%2 == 0) {
        if(query <= numbers/2){
            tmp = query - 1;
            ans = query + tmp;
        }
        else{
            tmp = numbers - query;
            ans = query - tmp;
        }
    }
    else {
        if(query <= numbers/2 + 1){
            tmp = query - 1;
            ans = query + tmp;
        }
        else{
            tmp = numbers - query;
            ans = query - tmp - 1;
        }
    }

    cout<<ans<<'\n';
return 0;
}
