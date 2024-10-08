int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}

// Returns number of ways to
// reach s'th stair
int countWays(int s) { return fib(s + 1); }
