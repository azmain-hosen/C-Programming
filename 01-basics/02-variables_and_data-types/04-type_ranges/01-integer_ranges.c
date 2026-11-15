#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("========== INTEGER TYPE RANGES ==========\n\n");

    printf("Signed char range          : %d to %d\n",
           SCHAR_MIN, SCHAR_MAX);

    printf("Unsigned char range        : 0 to %u\n",
           (unsigned int)UCHAR_MAX);

    printf("\nShort int range             : %d to %d\n",
           SHRT_MIN, SHRT_MAX);

    printf("Unsigned short int range   : 0 to %u\n",
           (unsigned int)USHRT_MAX);

    printf("\nInt range                   : %d to %d\n",
           INT_MIN, INT_MAX);

    printf("Unsigned int range         : 0 to %u\n",
           UINT_MAX);

    printf("\nLong int range              : %ld to %ld\n",
           LONG_MIN, LONG_MAX);

    printf("Unsigned long int range    : 0 to %lu\n",
           ULONG_MAX);

    printf("\nLong long int range         : %lld to %lld\n",
           LLONG_MIN, LLONG_MAX);

    printf("Unsigned long long range   : 0 to %llu\n",
           ULLONG_MAX);

    return 0;
}