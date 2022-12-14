#ifndef MY_VERIFY_H
#define MY_VERIFY_H 1

#define VERIFY(cond) \
    do { \
        if (!(cond)){ \
        fprintf(stderr, "%s:%d:error: In function %s, verification of condition '%d == %d' failed.", __FILE__, __LINE__, __func__, a, b ); \
        } \
        } while (0)
#endif