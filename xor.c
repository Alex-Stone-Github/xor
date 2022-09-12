#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main(int argc, char* argv[]) {
    // assert that the program recieves a proger argument
    if (argc != 2) {
        fprintf(stderr, "Xor program requires only 1 argument (key) - no more - no less");
        return -1;
    }
    char xor_number = atoi(argv[1]);
    while (true) {
        char input = getchar();
        if (input == EOF)
            break;
        char output = input ^ xor_number;
        putchar(output);
    }
    return 0;
}
