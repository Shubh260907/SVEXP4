#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

    printf("--- CodeMasters Data Type Workshop ---\n");



    printf("\n--- 1. Data Type Sizes (in bytes) ---\n");
    printf("Size of char:        %zu byte(s)\n", sizeof(char));
    printf("Size of short:       %zu byte(s)\n", sizeof(short));
    printf("Size of int:         %zu byte(s)\n", sizeof(int));
    printf("Size of long:        %zu byte(s)\n", sizeof(long));
    printf("Size of long long:   %zu byte(s)\n", sizeof(long long));
    printf("---------------------------------------\n");
    printf("Size of float:       %zu byte(s)\n", sizeof(float));
    printf("Size of double:      %zu byte(s)\n", sizeof(double));
    printf("Size of long double: %zu byte(s)\n", sizeof(long double));




    printf("\n--- 2. Data Type Ranges (Min/Max Values) ---\n\n");


    printf("--- Integer Types ---\n");
    printf("char:        Min = %d, Max = %d\n", CHAR_MIN, CHAR_MAX);
    printf("short:       Min = %d, Max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("int:         Min = %d, Max = %d\n", INT_MIN, INT_MAX);
    printf("long:        Min = %ld, Max = %ld\n", LONG_MIN, LONG_MAX);
    printf("long long:   Min = %lld, Max = %lld\n", LLONG_MIN, LLONG_MAX);


    printf("\n--- Floating-Point Types ---\n");
    printf("float:       Min = %g, Max = %g\n", FLT_MIN, FLT_MAX);
    printf("double:      Min = %g, Max = %g\n", DBL_MIN, DBL_MAX);
    printf("long double: Min = %Lg, Max = %Lg\n", LDBL_MIN, LDBL_MAX);

    printf("\n---------------------------------------\n");

    return 0;n
}
