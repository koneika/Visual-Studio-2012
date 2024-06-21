#include <windows.h>

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow){
    int result = MessageBox(NULL, "HELLO", "MY FIRST GUI", MB_OK);
    
    if (result == IDOK) {
        MessageBox(NULL, "You clicked OK!", "Result", MB_OK);
    } else {
        MessageBox(NULL, "You closed the dialog!", "Result", MB_OK);
    }

    return 0;
}

