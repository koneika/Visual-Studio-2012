#include <windows.h>
#include <iostream>
//#include <commctrl.h>
//
//#define IDC_BUTTON 100 // Можете использовать любое целочисленное значение
//HWND hWnd;

//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
//    
//	short hello = MessageBox(0, "CONTINUE?", "CONFIRM", MB_YESNO | MB_ICONQUESTION);
//
//	if(IDYES == 6){
//		MessageBox(NULL, "yes", "MY FIRST GUI", MB_OK);
//	}
//	else if (IDYES == 7){
//		MessageBox(NULL, "no", "MY FIRST GUI", MB_OK);
//	}
//	system("pause");
//	return 0;
//}

//int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow){
//    MessageBox(NULL, "HELLO", "MY FIRST GUI", MB_OK);
//
//	//HWND hButton = CreateWindowEx(0, WC_BUTTON, "Button", WS_VISIBLE | WS_CHILD,
// // 10, 10, 100, 20, hWnd, (HMENU)IDC_BUTTON, hInst, NULL);
//
//    return 0;
//}
//BOOL CheckDlgButton(
//	  [in] HWND hDlg,
//	  [in] int  nIDButton,
//	  [in] UINT uCheck
//	);
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
//	
//}
//
//// Прототип функции окна
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
//    // Регистрация класса окна
//    WNDCLASS wc = {};
//    wc.lpfnWndProc = WindowProc; // Указатель на функцию окна
//    wc.hInstance = hInstance;
//    wc.lpszClassName = "SampleWindowClass";
//
//    RegisterClass(&wc);
//
//    // Создание окна
//    HWND hwnd = CreateWindowEx(
//        0,
//        "SampleWindowClass",   // Имя класса окна
//        "Sample Window",       // Заголовок окна
//        WS_OVERLAPPEDWINDOW,    // Стиль окна
//        CW_USEDEFAULT,          // Позиция X
//        CW_USEDEFAULT,          // Позиция Y
//        400,                    // Ширина
//        300,                    // Высота
//        NULL,                   // Родительское окно
//        NULL,                   // Меню
//        hInstance,              // Дескриптор приложения
//        NULL                    // Дополнительные параметры
//    );
//
//    // Создание кнопок
//    HWND button1 = CreateWindowW(
//        L"BUTTON",              // Тип управляющего элемента
//        L"Yes",                 // Текст кнопки
//        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, // Стиль кнопки
//        50,                     // Позиция X
//        50,                     // Позиция Y
//        100,                    // Ширина
//        50,                     // Высота
//        hwnd,                   // Родительское окно
//        NULL,                   // Меню
//        hInstance,              // Дескриптор приложения
//        NULL                    // Дополнительные параметры
//    );
//
//    HWND button2 = CreateWindowW(
//        L"BUTTON",              // Тип управляющего элемента
//        L"No",                  // Текст кнопки
//        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, // Стиль кнопки
//        200,                    // Позиция X
//        50,                     // Позиция Y
//        100,                    // Ширина
//        50,                     // Высота
//        hwnd,                   // Родительское окно
//        NULL,                   // Меню
//        hInstance,              // Дескриптор приложения
//        NULL                    // Дополнительные параметры
//    );
//	if(HWND button2 == CreateWindowW()){
//		
//	}
//    // Отображение окна
//    ShowWindow(hwnd, nCmdShow);
//
//    // Цикл обработки сообщений
//    MSG msg = {};
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//    }
//
//    return 0;
//}
//
//// Функция окна
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    switch (uMsg) {
//    case WM_DESTROY:
//        PostQuitMessage(0);
//        return 0;
//    case WM_COMMAND:
//        // Обработка сообщений от кнопок
//        if (LOWORD(wParam) == 1) {
//            MessageBox(hwnd, "Yes button clicked!", "Button Clicked", MB_OK);
//        }
//        else if (LOWORD(wParam) == 2) {
//            MessageBox(hwnd, "No button clicked!", "Button Clicked", MB_OK);
//        }
//        break;
//    }
//    return DefWindowProc(hwnd, uMsg, wParam, lParam);
//}