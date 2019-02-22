#include<stdio.h>
#include<cs50.h>

int carre(int n);

int main(void)



{
    int i= get _int("chiffre:");

 int lecarre= carre(i);
    printf("%i", lecarre);
}
int carre(int n)
{
    return n*n;
}