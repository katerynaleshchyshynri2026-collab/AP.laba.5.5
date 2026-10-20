#include <iostream>

using namespace std;

int C(const int n, const int k, const int level, int& depth)
{
    if (level > depth)
        depth = level;
    cout << " C(" << n << "," << k << ") level = " << level << endl;
    if (k == 0 || k == n)
        return 1;
    else
        return C(n - 1, k - 1, level + 1, depth) + C(n - 1, k, level + 1, depth);
}

int f(const int n, const int level, int& depth)
{
    if (level > depth)
        depth = level;
    cout << " f(" << n << ") level = " << level << endl;
    if (n == 0 || n == 1)
        return 1;
    else
        return f(n - 1, level + 1, depth) + f(n - 2, level + 1, depth);
}

int main()
{
    int n;
    cout << "n = "; cin >> n;

    int S = 0;
    for (int k = 0; k <= n / 2; k++)
    {
        int depth = 0;
        int c = C(n - k, k, 1, depth);
        cout << "C(" << n - k << "," << k << ") = " << c << endl;
        cout << "depth = " << depth << endl;
        S += c;
    }
    cout << "S = " << S << endl;

    int depth = 0;
    int F = f(n, 1, depth);
    cout << "F = " << F << endl;
    cout << "depth = " << depth << endl;

    if (S == F)
        cout << "S = F" << endl;
    else
        cout << "S != F" << endl;
    return 0;
}
