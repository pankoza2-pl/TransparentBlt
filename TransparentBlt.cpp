#include <windows.h>
#pragma comment(lib, "Msimg32.lib")

DWORD WINAPI TransparentBltExample(LPVOID Example)
{
    HDC hdcScreen = GetDC(0);
    int sw = GetSystemMetrics(0), sh = GetSystemMetrics(1);
    COLORREF TransparentBltColor = (RGB(rand() % 255, rand() % 255, rand() % 255));
    while (1) {
        TransparentBlt(hdcScreen, rand() % 255, rand() % 255, sw, sh, hdcScreen, rand() % 255, rand() % 255, rand() % 255, rand() % 255, TransparentBltColor);
    }
}

int __stdcall WinMain(HINSTANCE hInstance, HINSTANCE hPrev, LPSTR szCmdNShow, int nCmdShow)
{
    HANDLE TransparentBltSimpleExample = CreateThread(0, 0, (LPTHREAD_START_ROUTINE)TransparentBltExample, 0, 0, 0);
    Sleep(-1);
}
