#include <iostream>

#ifdef _WIN32
#include <windows.h>
#endif

namespace colorstream{

#ifdef _WIN32
struct for_reset{
    CONSOLE_SCREEN_BUFFER_INFO scr;
    for_reset(){
        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE),&scr);
    }
}reset_ter_color;
#endif

std::ostream& bold(std::ostream& s){
#ifndef _WIN32
    s<<"\033[1m";
#endif
    return s;
}

std::ostream& red(std::ostream& s){
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0c);
#else
    s<<"\033[91m";
#endif
    return s;
}

std::ostream& cyan(std::ostream& s){
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x03);
#else
    s<<"\033[36m";
#endif
    return s;
}

std::ostream& orange(std::ostream& s){
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0e);
#else
    s<<"\033[93m";
#endif
    return s;
}

std::ostream& white(std::ostream& s){
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0x0f);
#else
    s<<"\033[0m";
#endif
    return s;
}

std::ostream& bold_red(std::ostream& s){
    s<<red<<bold;
    return s;
}

std::ostream& bold_cyan(std::ostream& s){
    s<<cyan<<bold;
    return s;
}

std::ostream& bold_orange(std::ostream& s){
    s<<orange<<bold;
    return s;
}

std::ostream& bold_white(std::ostream& s){
    s<<white<<bold;
    return s;
}

std::ostream& reset(std::ostream& s){
#ifdef _WIN32
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),reset_ter_color.scr.wAttributes);
#else
    s<<"\033[0m";
#endif
    return s;
}

}