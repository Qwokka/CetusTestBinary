#include <emscripten/emscripten.h>
#include <stdio.h>

int main() {
    while (1) {
        puts("hihellohowareyou");
        emscripten_sleep(1000);
    }
}
