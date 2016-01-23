// #ifndef __ANDROID__
// #ifdef __linux__
// #ifdef __x86_64__

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// __asm__(".symver memcpy,memcpy@GLIBC_2.2.5");

// void *__wrap_memcpy(void * destination, const void * source, size_t num)
// {
//         return memcpy(destination, source, num);
// }
// #else

// #endif
// #endif
// #endif

#ifndef __ANDROID__

#include <stdio.h>
#include <stdlib.h>

void* memcpy (void *destination, const void *source, size_t num)
{
    char *D = (char*)destination;
    char *S = (char*)source;
    for(int i = 0; i < num; i++) 
    {
            *D = *S;
            D++;
            S++;
    }
    return D;
}

#endif