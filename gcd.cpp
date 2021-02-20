unsigned gcd(unsigned a, unsigned b)
{
    unsigned int    res;
    int             flag;
    
    flag = 0;
    if (a == 0 && b != 0)
        return (b);
    else if (a != 0 && b == 0)
        return (a);
    else if (a == b)
        return (a);
    else if (a % 2 == 0 && b % 2 == 0)
        return (2 * gcd(a / 2, b / 2));
    else if (b % 2 != 0 && a % 2 == 0)
        gcd(a / 2, b);
    else if (a % 2 != 0 && b % 2 == 0)
        gcd(a, b / 2);
    if (a % 2 == 0 && b / 2 == 0 && b > a)
        gcd((b - a) / 2, a);
    else if (a % 2 == 0 && b % 2 == 0 && a > b)
        gcd((a - b) / 2, b);
}
