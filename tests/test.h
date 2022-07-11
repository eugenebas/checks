#ifndef __test_h__
#define __test_h__

#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <stdbool.h>
#define TEST(test_function) do{ printf("Test %s ...", #test_function); test_function(); printf("OK\n"); }while(0)

#endif // __test_h__
