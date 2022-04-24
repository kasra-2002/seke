#include <iostream>
using namespace std;

int main()
{

    int a, p = 0, sum = 0, b50, b10, b5, b2, b1;
    int x1, x2, x5, x10, x50;
    cout << "please enter your number \t";
    cin >> a;
    x1 = a;
    x2 = a / 2;
    x5 = a / 5;
    x10 = a / 10;
    x50 = a / 50;

    for (b1 = 1; b1 <= x1; b1++)
    {

        for (b2 = 0; b2 <= x2; b2++)
        {
            for (b5 = 0; b5 <= x5; b5++)
            {
                for (b10 = 0; b10 <= x10; b10++)
                {
                    for (b50 = 0; b50 <= x50; b50++)
                    {
                        sum = (b1 * 1) + (b2 * 2) + (b5 * 5) + (b10 * 10) + (b50 * 50);
                        if (sum == a)
                        {
                            if (b1 != 0)
                            {
                                cout << b1 << " * 1";
                                if (b2 != 0 || b5 != 0 || b10 != 0 || b50 != 0)
                                    cout << " + ";
                            }
                            if (b2 != 0)
                            {
                                cout << b2 << " * 2";
                                if (b5 != 0 || b10 != 0 || b50 != 0)
                                    cout << " + ";
                            }
                            if (b5 != 0)
                            {
                                cout << b5 << " * 5";
                                if (b10 != 0 || b50 != 0)
                                    cout << " + ";
                            }
                            if (b10 != 0)
                            {
                                cout << b10 << " * 10";
                                if (b50 != 0)
                                    cout << " + ";
                            }
                            if (b50 != 0)
                                cout << b50 << " * 50";
                            cout << '\n';
                            p++;
                        }
                    }
                }
            }
        }
    }

    cout << "count: " << p << endl;

    return 0;
}