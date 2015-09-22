#include <windows.h>
#include <stdio.h>

int main (int argc, char** argv) {
    if (argc == 1) {
        printf("an argument wasn't specified\n"
               "usage: su prog \"file1 file2\"");
    } else {
        ShellExecute(NULL, "runas", argv[1], argv[2], NULL, SW_SHOWNORMAL);
    }
}
