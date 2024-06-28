#include <iostream>
using namespace std;

void generateNumberPattern(int n)
{
    // Handle Exceptional case for  n = 1;
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }
    int total_charecter = 0;
    // First part
    for (int i = 1; i <= n; ++i)
    {
        cout << i;
        if (i < 10)
            total_charecter += 1;
        else
            total_charecter += 2;
    }
    cout << endl;

    // Middle part
    for (int i = 2; i <= n - 1; ++i)
    {
        cout << i;
        // calculating spaces for middle
        int middle_spaces = total_charecter;
        if (i < 10)
            middle_spaces -= 1;
        else
            middle_spaces -= 2;
        if (n - i + 1 < 10)
            middle_spaces -= 1;
        else
            middle_spaces -= 2;
        for (int j = 1; j <= middle_spaces; ++j)
        {
            cout << " ";
        }
        cout << n - i + 1 << endl;
    }

    // Last part
    for (int i = n; i >= 1; --i)
    {
        cout << i;
    }
    cout << endl;
}

void generateCharacterPattern(int n)
{
    // Handle Exceptional case for n = 1;
    if (n == 1)
    {
        cout << 'a' << endl;
        return;
    }

    // First part
    for (char ch = 'a'; ch <= 'a' + n - 1; ++ch)
    {
        cout << ch;
    }
    cout << endl;

    // Middle part
    for (char ch = 'b'; ch < 'b' + n - 2; ++ch)
    {
        cout << ch;
        for (int k = 1; k <= n - 2; ++k)
        {
            cout << " ";
        }
        cout << (char)(n - (ch - 'a') + 96) << endl;
    }

    // Last part
    for (char ch = 'a' + n - 1; ch >= 'a'; --ch)
    {
        cout << ch;
    }
    cout << endl;
}

int main()
{
    char T;
    int N;

    cin >> N;
    cin >> T;

    if (T == 'a')
    {
        generateCharacterPattern(N);
    }
    else if (T == '1')
    {
        generateNumberPattern(N);
    }
    else
    {
        cout << "Invalid input for T. Please enter 'a' or '1'." << endl;
    }

    return 0;
}
