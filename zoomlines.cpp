#include <windows.h>
#include <cstdlib>
#include <ctime>




int main()
{
	FreeConsole();
    srand(static_cast<unsigned int>(time(0)));

    HDC desk;
    int x, t, sw, sh;

    while (true) {
        desk = GetDC(0);
        sw = GetSystemMetrics(SM_CXSCREEN);
        sh = GetSystemMetrics(SM_CYSCREEN);


        int vay = GetSystemMetrics(SM_CYVIRTUALSCREEN);
        int vax = GetSystemMetrics(SM_CXVIRTUALSCREEN);

        t = (rand() % sh);
        x = (rand() % 2);
        if (x == 0) {
       
            StretchBlt(desk, 0, t, sw, t, desk, 5, t, sh + 1, t, SRCCOPY);
        }
        else if (x == 1) {
            StretchBlt(desk, 0, t, sw, t, desk, 1, t, sw + 2, t, SRCCOPY);
        };
    };
}
