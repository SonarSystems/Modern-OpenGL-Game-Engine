#pragma once

// KEYS ON THE KEYBOARD
enum KEYS
{
    A = 0, // A
    B = 1, // B
    C = 2, // C
    D = 3, // D
    E = 4, // E
    F = 5, // F
    G = 6, // G
    H = 7, // H
    I = 8, // I
    J = 9, // J
    K = 10, // K
    L = 11, // L
    M = 12, // M
    N = 13, // N
    O = 14, // O
    P = 15, // P
    Q = 16, // Q
    R = 17, // R
    S = 18, // S
    T = 19, // T
    U = 20, // U
    V = 21, // V
    W = 22, // W
    X = 23, // X
    Y = 24, // Y
    Z = 25, // Z
    Num0 = 26, // 0
    Num1 = 27, // 1
    Num2 = 28, // 2
    Num3 = 29, // 3
    Num4 = 30, // 4
    Num5 = 31, // 5
    Num6 = 32, // 6
    Num7 = 33, // 7
    Num8 = 34, // 8
    Num9 = 35, // 9
    Escape = 36, // ESCAPE (TOP LEFT)
    LControl = 37, // LEFT CONTROL
    LShift = 38, // LEFT SHIFT
    LAlt = 39, // LEFT ALT/OPTION
    LSystem = 40, // LEFT WINDOWS/COMMAND
    RControl = 41, // RIGHT CONTROL
    RShift = 42, // RIGHT SHIFT
    RAlt = 43, // RIGHT ALT/OPTION
    RSystem = 44, // RIGHT WINDOWS/COMMAN
    Menu = 45, // MENU
    LBracket = 46, // LEFT BRACKET [
    RBracket = 47, // RIGHT BRACKET ]
    SemiColon = 48, // SEMI-COLON ;
    Comma = 49, // COMMA ,
    Period = 50, // PERIOD/FULL STOP .
    Quote = 51, // APOSTROPHE/QUOTE '
    Slash = 52, // FORWARD SLASH /
    BackSlash = 53, // BACK SLASH (\)
    Tilde = 54, // TILDE
    Equal = 55, // =
    Dash = 56, // -
    Space = 57, // " "
    Return = 58, // ENTER
    BackSpace = 59, // Backspace
    Tab = 60,
    PageUp = 61,
    PageDown = 62,
    End = 63,
    Home = 64,
    Insert = 65,
    Delete = 66,
    Add = 67, // +
    Subtract = 68, // -
    Multiply = 69, // *
    Divide = 70, // /
    Left = 71,
    Right = 72,
    Up = 73,
    Down = 74,
    Numpad0 = 75, // 0 on the number pad
    Numpad1 = 76, // 1 on the number pad
    Numpad2 = 77, // 2 on the number pad
    Numpad3 = 78, // 3 on the number pad
    Numpad4 = 79, // 4 on the number pad
    Numpad5 = 80, // 5 on the number pad
    Numpad6 = 81, // 6 on the number pad
    Numpad7 = 82, // 7 on the number pad
    Numpad8 = 83, // 8 on the number pad
    Numpad9 = 84, // 9 on the number pad
    F1 = 85, // Function 1
    F2 = 86, // Function 2
    F3 = 87, // Function 3
    F4 = 88, // Function 4
    F5 = 89, // Function 5
    F6 = 90, // Function 6
    F7 = 91, // Function 7
    F8 = 92, // Function 8
    F9 = 93, // Function 9
    F10 = 94, // Function 10
    F11 = 95, // Function 11
    F12 = 96, // Function 12
    F13 = 97, // Function 13
    F14 = 98, // Function 14
    F15 = 99, // Function 15
    Pause = 100
};

enum KEYSTATUS
{
    NOT_PRESSED = 990,
    NO_STATE = 990,
    PRESSED = 991,
    RELEASED = 992,
};
