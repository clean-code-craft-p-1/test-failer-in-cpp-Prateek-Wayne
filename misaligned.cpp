#include <iostream>
#include <assert.h>
#include <iomanip>
using namespace std;
int calculateColor(int majorcolor, int minorcolor)
{
    return majorcolor * 5 + minorcolor;
}
int printColorMap()
{
    const char *majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char *minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (calculateColor(i, j) < 10)
            {
                cout << calculateColor(i, j) << " "
                     << " | " << setw(7) << majorColor[i]
                     << setw(5) << " | " << minorColor[i] << "\n";
            }
            else
            {
                cout << calculateColor(i, j)
                     << " | " << setw(7) << majorColor[i]
                     << setw(5) << " | " << minorColor[i] << "\n";
            }
        }
    }
    return i * j;
}

int main()
{
    int result = printColorMap();
    assert(result == 25);
    assert(calculateColor(1,1) == 7);
    cout << "All is well (maybe!)\n";
    return 0;
}
