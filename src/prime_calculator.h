#ifndef PRIME_CALCULATOR_H_
#define PRIME_CALCULATOR_H_

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
EMSCRIPTEN_KEEPALIVE
#endif

#ifdef __cplusplus
extern "C" {
#endif

int is_prime(int number);

#ifdef __cplusplus
}
#endif

#endif
