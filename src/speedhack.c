#include <emscripten/emscripten.h>
#include <stdio.h>

#define CHANGE_VALUE 1234

// "emscripten_sleep()" does not use "Date.now()" or "performance.now()" and is not affected by the speedhack
// Therefore we need to do some tricks to ensure we use "Date.now()"
int main() {
    unsigned int timestamp = 0;
    unsigned int lastUpdate = 0;
    unsigned int valueToChange = CHANGE_VALUE;

    while (1) {
        timestamp = EM_ASM_INT({
          return Date.now();
        });

        if (timestamp > lastUpdate + 1000) {
            valueToChange = CHANGE_VALUE;        
            printf("%d\n", valueToChange);
            lastUpdate = timestamp;
        }

        emscripten_sleep(100);
    }
}
