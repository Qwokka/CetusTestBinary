#include <emscripten/emscripten.h>
#include <stdio.h>

#define CHANGE_VALUE 1234

int main() {
    unsigned int valueToChange = CHANGE_VALUE;

    while (1) {
        printf("%d\n", valueToChange);
        valueToChange = CHANGE_VALUE;
        emscripten_sleep(1000);
    }
}
