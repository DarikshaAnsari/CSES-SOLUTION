#include <bits/stdc++.h>
using namespace std;
const int n = 7;
const int total_steps = 48;
bool visited[n][n];
int reserved[49];
string path;

void move(int row, int col, int &ans, int &steps)
{
    if (row == n - 1 && col == 0)
    {
        if (steps == total_steps)
        {
            ans++;
        }
        return;
    }
    if (((row + 1 == n || (visited[row - 1][col] && visited[row + 1][col])) && col - 1 >= 0 && col + 1 < n && !visited[row][col - 1] && !visited[row][col + 1]))
    {
        return;
    }
    if (((col + 1 == n || (visited[row][col - 1] && visited[row][col + 1])) && row - 1 >= 0 && row + 1 < n && !visited[row - 1][col] && !visited[row + 1][col]))
    {
        return;
    }
    if (((row == 0 || (visited[row + 1][col] && visited[row - 1][col])) && col - 1 >= 0 && col + 1 < n && !visited[row][col - 1] && !visited[row][col + 1]))
    {
        return;
    }
    if (((col == 0 || (visited[row][col + 1] && visited[row][col - 1])) && row - 1 >= 0 && row + 1 < n && !visited[row - 1][col] && !visited[row + 1][col]))
    {
        return;
    }

    visited[row][col] = true;

    if (path[steps] != '?')
    {
        if (path[steps] == 'U')
        {
            if (row - 1 >= 0)
            {
                if (!visited[row - 1][col])
                {
                    steps++;
                    move(row - 1, col, ans, steps);
                    steps--;
                }
            }
        }
        else if (path[steps] == 'R')
        {
            if (col + 1 < n)
            {
                if (!visited[row][col + 1])
                {
                    steps++;
                    move(row, col + 1, ans, steps);
                    steps--;
                }
            }
        }

        else if (path[steps] == 'D')
        {
            if (row + 1 < n)
            {
                if (!visited[row + 1][col])
                {
                    steps++;
                    move(row + 1, col, ans, steps);
                    steps--;
                }
            }
        }

        else if (path[steps] == 'L')
        {
            if (col - 1 >= 0)
            {
                if (!visited[row][col - 1])
                {
                    steps++;
                    move(row, col - 1, ans, steps);
                    steps--;
                }
            }
        }
    }
    else
    {
        // move down
        if (row + 1 < n)
        {
            if (!visited[row + 1][col])
            {
                steps++;
                move(row + 1, col, ans, steps);
                steps--;
            }
        }

        // move right
        if (col + 1 < n)
        {
            if (!visited[row][col + 1])
            {
                steps++;
                move(row, col + 1, ans, steps);
                steps--;
            }
        }

        // move up
        if (row - 1 >= 0)
        {
            if (!visited[row - 1][col])
            {
                steps++;
                move(row - 1, col, ans, steps);
                steps--;
            }
        }

        // move left
        if (col - 1 >= 0)
        {
            if (!visited[row][col - 1])
            {
                steps++;
                move(row, col - 1, ans, steps);
                steps--;
            }
        }
        // visited[r][c] = false;
    }
    visited[row][col] = false;
}

int main()
{
    cin >> path;
    for (int i = 0; i < path.length(); i++)
    {
        if (path[i] == '?')
            reserved[i] = -1;
        else if (path[i] == 'U')
            reserved[i] = 0;
        else if (path[i] == 'R')
            reserved[i] = 1;
        else if (path[i] == 'D')
            reserved[i] = 2;
        else if (path[i] == 'L')
            reserved[i] = 3;
    }
    int ans = 0, steps = 0;
    move(0, 0, ans, steps);
    cout << ans << endl;
    return 0;
}