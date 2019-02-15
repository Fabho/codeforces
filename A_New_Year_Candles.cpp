// Fabho
// A_New_Year_Candles

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int candle, toMake, minutes, reserve;

cin>>candle>>toMake;
    minutes = reserve = 0;
    while(1)
    {
        minutes+=candle;
        reserve+=candle;
        candle = reserve/toMake;
        reserve %= toMake;
        if(candle == 0)
           break;
    }
    printf("%d\n", minutes);

return 0;
}
