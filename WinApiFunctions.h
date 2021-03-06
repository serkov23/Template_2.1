//
// Created by Сергей on 19.04.2018.
//

#ifndef UNTITLED7_WINAPIFUNCTIONS_H
#define UNTITLED7_WINAPIFUNCTIONS_H

#include <windows.h>
#include <utility>

namespace WinApi {
    std::pair<HDC, PAINTSTRUCT> BeginPaint(HWND hwnd);

    RECT rect_to_screen(HWND hwnd, RECT rect);

    COLORREF GetRandColor();

    void ReleaseOldObj(HDC hdc, HGDIOBJ obj);

    RECT GetClientRect(HWND hwnd);

    void ClearBackgroud(HDC deviceContext, RECT clientRect);

    int GetRectWidth(RECT rect);

    int GetRectHeigth(RECT rect);

}

#endif //UNTITLED7_WINAPIFUNCTIONS_H
