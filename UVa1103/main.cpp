#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

char bin[256][5];

const int maxh = 200 + 5;
const int maxw = 50 * 4 + 5;

int H, W, pic[maxh][maxw], color[maxh][maxw];
char line[maxw];

void decode(char ch, int row, int col)
{
    for (int i = 0; i < 4; i++)
        pic[row][col + i] = bin[ch][i] - '0';
}

const int dr[] = { -1, 1, 0, 0 };
const int dc[] = { 0, 0, -1, 1 };

void dfs(int row, int col, int c)
{
    color[row][col] = c;
    for (int i = 0; i < 4; i++)
    {
        int row2 = row + dr[i];
        int col2 = col + dc[i];
    }
}
int main()
{
    printf("%s 向你问好!\n", "UVa1103");
    return 0;
}