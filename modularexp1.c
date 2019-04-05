//  fast modular exponentiation

#include<stdio.h>
int fastexp( int a, int z, int n)
{
    int x = 1;

    while( z )
    {
        while( z % 2 == 0 )
        {
            z /=2;
            a = (( a % n ) * ( a % n )) % n;
        }
        z--;
        x = (( x % n ) * ( a % n )) % n;
    }

    return x;
}

int main()
{
    int base;
    int power;
    int modulus;
    int result;

    printf("\nEnter the number to be exponentiated: ");
    scanf("%d", &base);
    printf("\nEnter the power to exponentiate: ");
    scanf("%d", &power);
    printf("\nEnter the modulus: ");
    scanf("%d", &modulus);

    result = fastexp ( base, power, modulus );

    printf("\n%d raised to the power %d modulus %d is: %d", base, power, modulus, result);

    getchar();

    return 0;
}