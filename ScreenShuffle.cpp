#include <windows.h>
void screenShuffle()
    {
        HDC desk = GetDC(NULL);

        const int sw = GetSystemMetrics(SM_CXSCREEN);
        const int sh = GetSystemMetrics(SM_CYSCREEN);

        while(true)
        {
            int a = rand() % sw, b = rand() % sh;
            BitBlt(desk, a, b, 200, 200, desk, a + rand() % 21 - 10, b + rand() % 21 - 10, SRCCOPY);
        }
    }

int main()
{
FreeConsole();
screenShuffle();
return 0;
}
