#include "./lib/crash.h"
#include <stdio.h>
#include <math.h>

double dis;
double ang_a, ang_b;
double Va, Vb;

int main()
{
    printf("   Va               |               Vb");
    printf("   /                |                \ ");
    printf("  /                 |                 \ ");
    printf(" /  ang_a           |           ang_b  \ ");
    printf("/————————————       |       ————————————\ ");

    printf("Input the distance\n"); //give distance a value
    scanf("%lf", &dis);

    printf("Input the ang_a\n");
    scanf("%lf", &ang_b);
    printf("Input the ang_b\n");
    scanf("%lf", &ang_b);
    
    printf("Input the Va\n");
    scanf("%lf", &Va);
    printf("Input the Vb\n");
    scanf("%lf", &Vb);



    return 0;
}