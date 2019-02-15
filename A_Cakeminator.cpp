// Fabho
// A_Kalevitch_and_Chess

#include <iostream>
#include <cstdio>
#define  MAX 11
using namespace std;
char grid[MAX][MAX];
int  status[MAX][MAX], cont;

void read(int r, int c)
{
    string tmp, data = "";
    for(int x=0; x<r; x++)
    {
        cin>>tmp;
        data+=tmp;
    }
    int index=0;

    for(int x=0; x<r; x++)
        for(int y=0; y<c; y++, index++)
        {
            grid[x][y] = data[index];
            if(grid[x][y] == '.')
               status[x][y] = -1;
            else
                status[x][y] = 0;
        }
}

bool checkRow(int row, int col)
{
    cont = 0;
    for(int x=0; x<col; x++)
    {
        if(status[row][x] == 0)
            return false;
        else if(status[row][x] == -1)
            cont++;
    }
    for(int x=0; x<col; x++)
    {
     if(status[row][x] == -1)
        status[row][x] = 1;
    }
return true;
}

bool checkCol(int row, int col)
{
    cont = 0;
    for(int x=0; x<row; x++)
    {
        if(status[x][col] == 0)
            return false;
        else if(status[x][col] == -1)
            cont++;
    }
    for(int x=0; x<row; x++)
    {
       if(status[x][col] == -1)
          status[x][col] = 1;
    }
return true;
}

void print(int r, int c)
{
    for(int x=0; x<r; x++)
    {
        for(int y=0; y<c; y++)
        {
            cout<<status[x][y];
        }
        cout<<endl;
    }
}

int main()
{
int row, col;
scanf("%d %d", &row, &col);
read(row, col);

int tot = 0;
for(int a=0; a<row; a++)
{
    if(checkRow(a,col))
       tot += cont;
}

for(int b=0; b<col; b++)
{
    if(checkCol(row,b))
       tot += cont;
}
printf("%d\n", tot);

return 0;
}
