#include <bits/stdc++.h>
using namespace std;

void fastio(bool read = false) 
{
    if(read) 
    {
        #ifndef ONLINE_JUGDE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        freopen("error.txt","w",stderr);
        #endif  
    }
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return;
}
void print(int arr[][4], int n, int m)
{
    int startRow = 0;
    int endRow = n - 1;
    int startCol = 0;
    int endCol = m - 1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // 1st loop: Print top row
        for (int col = startCol; col <= endCol; col++)
        {
            cout << arr[startRow][col] << " ";
        }

        // 2nd loop: Print right column
        for (int row = startRow + 1; row <= endRow; row++)
        {
            cout << arr[row][endCol] << " ";
        }

        // 3rd loop: Print bottom row
        if (startRow < endRow)
        {
            for (int col = endCol - 1; col >= startCol; col--)
            {
                cout << arr[endRow][col] << " ";
            }
        }

        // 4th loop: Print left column
        if (startCol < endCol)
        {
            for (int row = endRow - 1; row > startRow; row--)
            {
                cout << arr[row][startCol] << " ";
            }
        }

        // Update boundaries
        startRow++;
        endRow--;
        startCol++;
        endCol--;
    }
}


int main() 
{
    fastio(true);

    int arr[][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int n = 4, m = 4;
    print(arr, 4,4);

    return 0;
}
