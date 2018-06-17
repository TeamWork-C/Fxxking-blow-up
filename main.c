#include "./lib/crash.h"
#include <stdio.h>
#include <math.h>

double dis;

//launched obj
struct obj_a
{
    double V0;
    double ang;
    double max_H;
    double range;
}obj_a;

//target
struct obj_b
{
    double  V0;
    double  ang;
    double  max_H;
    double  range;
}obj_b;

void cul();

int main()
{
    struct obj_a obj_a;
    struct obj_b obj_b;

    printf("   Va               |               Vb\n");
    printf("   /                |                \\n ");
    printf("  /                 |                 \\n ");
    printf(" /  ang_a           |           ang_b  \\n ");
    printf("/————————————       |       ————————————\\n ");
    
    //give distance a value
    printf("Input the distance\n"); 
    scanf("%lf", &dis);
    
    //get angle
    printf("Input the ang_a\n");
    scanf("%lf", &obj_a.ang);
    printf("Input the ang_b\n");
    scanf("%lf", &obj_b.ang);
    
    //get V0
    printf("Input the Va\n");
    scanf("%lf", &obj_a.V0);
    printf("Input the Vb\n");
    scanf("%lf", &obj_b.V0);

    cul();

    return 0;
}

void cul()
{
    obj_a.max_H = fine(obj_a.ang, obj_a.V0, 2);
    obj_b.max_H = fine(obj_b.ang, obj_b.V0, 2);
    obj_a.range = fine(obj_a.ang, obj_a.V0, 3);
    obj_b.range = fine(obj_b.ang, obj_b.V0, 3);
}