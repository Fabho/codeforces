// Fabho
// A_Ksenia_and_Pan_Scales

#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
string input, toCheck;
int sLeft, sRight, mid, dif, index;
bool flag;

while(cin>>input>>toCheck)
{
    string left, right, answer;
    left = right = answer = "";
    flag = false;
    for(int x=0; x<input.size(); x++)
    {
        if(!flag && input[x] != '|')
           left += input[x];
        else if(flag && input[x] != '|')
                right += input[x];
        else
            flag = true;
    }
    sLeft  = left.size();
    sRight = right.size();
    mid    = toCheck.size();

    if((sLeft + sRight + mid)%2 != 0)
       printf("Impossible\n");
    else if(sLeft == sRight && mid%2 == 0)
    {
        for(int x=0; x<toCheck.size()/2; x++)
            left += toCheck[x];
        for(int x=toCheck.size()/2; x<toCheck.size(); x++)
            right += toCheck[x];
        cout<<left<<'|'<<right<<endl;
    }
    else if(sLeft == sRight && mid%2 != 0)
            printf("Impossible\n");
    else
    {
        index = 0;
        if(sLeft > sRight)
        {
            dif = sLeft - sRight;

            for(int y=index, cont = 0; y<toCheck.size() && cont < dif; y++, cont++, index++)
                right += toCheck[index];

            for(int z=index; z<toCheck.size(); z++, index++)
            {
                if(z%2 == 0)
                   right += toCheck[z];
                else
                    left += toCheck[z];
            }
            if(right.size() == left.size())
               cout<<left<<'|'<<right<<endl;
            else
                printf("Impossible\n");
        }
        if(sLeft < sRight)
        {
            dif = sRight - sLeft;

            for(int y=index, cont = 0; y<toCheck.size() && cont < dif; y++, cont++, index++)
                left += toCheck[index];

            for(int z=index; z<toCheck.size(); z++, index++)
            {
                if(z%2 == 0)
                   right += toCheck[z];
                else
                    left += toCheck[z];
            }
            if(right.size() == left.size())
               cout<<left<<'|'<<right<<endl;
            else
                printf("Impossible\n");
        }
    }
}
return 0;
}
