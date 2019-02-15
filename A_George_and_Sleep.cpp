// Fabho
// A_George_and_Sleep

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
int ch, cm, dh, dm, bh, bm;
scanf("%d:%d", &ch, &cm);

    scanf("%d:%d", &dh, &dm);

    bh = ch - dh;
    if(bh < 0)
       bh = 24 + bh;

    bm = cm - dm;
    if(bm < 0)
    {
       bm = 60 + bm;
       bh--;
        if(bh < 0)
            bh = 24 + bh;
    }
    if(bh<10)
       printf("0");
    printf("%d:", bh);
    if(bm<10)
      printf("0");
    printf("%d\n", bm);

return 0;
}
