#include <emscripten/emscripten.h>
#include <stdio.h>

#define CHANGE_VALUE1 1234
#define CHANGE_VALUE2 2345

int main() {
    unsigned int valueToChange1 = CHANGE_VALUE1;
    unsigned int valueToChange2 = CHANGE_VALUE2;

    while (1) {
        printf("%d %d\n", valueToChange1, valueToChange2);
        valueToChange1 = CHANGE_VALUE1;
        valueToChange2 = CHANGE_VALUE2;
        emscripten_sleep(1000);
    }
}
