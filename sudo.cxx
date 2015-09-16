#include <windows.h>
int main (int argc, char** argv) {
    ShellExecute(NULL, "runas", argv[1], "", NULL, SW_SHOWNORMAL);
}
