#include <iostream>
#include <Windows.h>

int main()
{
    std::cout << "Pres f to start and press p to end\n";
    bool en = false;
    while (true)
    {
        if (GetAsyncKeyState('F')) {
            en = true;
        }

        else if (GetAsyncKeyState('P')) {
            en = false;
        }
        if (en == true)
        {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(1);
        }
    }
}