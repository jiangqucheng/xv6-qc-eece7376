#include "types.h"
#include "stat.h"
#include "user.h"

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n-1) + fibonacci(n-2);
}


int main(int argc, char*argv[])
{
    int i = 400;
    printf(1, "fib(%d) = %d\n", i, fibonacci(i));
    exit();
}