#include <windows.h>
#include <iostream>
//#include <commctrl.h>
//
//#define IDC_BUTTON 100 // ������ ������������ ����� ������������� ��������
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
//// �������� ������� ����
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
//
//int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
//    // ����������� ������ ����
//    WNDCLASS wc = {};
//    wc.lpfnWndProc = WindowProc; // ��������� �� ������� ����
//    wc.hInstance = hInstance;
//    wc.lpszClassName = "SampleWindowClass";
//
//    RegisterClass(&wc);
//
//    // �������� ����
//    HWND hwnd = CreateWindowEx(
//        0,
//        "SampleWindowClass",   // ��� ������ ����
//        "Sample Window",       // ��������� ����
//        WS_OVERLAPPEDWINDOW,    // ����� ����
//        CW_USEDEFAULT,          // ������� X
//        CW_USEDEFAULT,          // ������� Y
//        400,                    // ������
//        300,                    // ������
//        NULL,                   // ������������ ����
//        NULL,                   // ����
//        hInstance,              // ���������� ����������
//        NULL                    // �������������� ���������
//    );
//
//    // �������� ������
//    HWND button1 = CreateWindowW(
//        L"BUTTON",              // ��� ������������ ��������
//        L"Yes",                 // ����� ������
//        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, // ����� ������
//        50,                     // ������� X
//        50,                     // ������� Y
//        100,                    // ������
//        50,                     // ������
//        hwnd,                   // ������������ ����
//        NULL,                   // ����
//        hInstance,              // ���������� ����������
//        NULL                    // �������������� ���������
//    );
//
//    HWND button2 = CreateWindowW(
//        L"BUTTON",              // ��� ������������ ��������
//        L"No",                  // ����� ������
//        WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, // ����� ������
//        200,                    // ������� X
//        50,                     // ������� Y
//        100,                    // ������
//        50,                     // ������
//        hwnd,                   // ������������ ����
//        NULL,                   // ����
//        hInstance,              // ���������� ����������
//        NULL                    // �������������� ���������
//    );
//	if(HWND button2 == CreateWindowW()){
//		
//	}
//    // ����������� ����
//    ShowWindow(hwnd, nCmdShow);
//
//    // ���� ��������� ���������
//    MSG msg = {};
//    while (GetMessage(&msg, NULL, 0, 0)) {
//        TranslateMessage(&msg);
//        DispatchMessage(&msg);
//    }
//
//    return 0;
//}
//
//// ������� ����
//LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
//    switch (uMsg) {
//    case WM_DESTROY:
//        PostQuitMessage(0);
//        return 0;
//    case WM_COMMAND:
//        // ��������� ��������� �� ������
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