#ifndef COMMON_H
#define COMMON_H

#include <time.h>

// Spin function to simulate a delay
static inline void Spin(int seconds) {
    time_t start = time(NULL);
    while ((time(NULL) - start) < seconds) {
        // Busy-wait loop
    }
}

#endif // COMMON_H