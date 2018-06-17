#include <stdio.h>
#include <math.h>
#include "crash.h"

#define pi 3.14159265359
#define g 9.8

double fine(double a, double V, int x)//x=1, return t; x=2, return h; x=3, return range
{
	double Vx, Vy, t, h, r;
  
	Vx = V*cos(a*pi/180);

	Vy = V*sin(a*pi/180);
    
    switch (x)
    {
        case 1:
            t = 2*Vy/g;
            return t;
            break;
        case 2:
            h = pow(Vy, 2)/(2 * g);
            return h;
        case 3:
            r = pow(V, 2)*sin(a*2*pi/180)/g;
            return r;
        default:
            return -1;
            break;
    }
}

double how(double a, double V)
{
    int i;
    double t, Vy, Vx, x, y;
    Vx = V*cos(a*pi/180);

    Vy = V*sin(a*pi/180);

    t = (2*Vy/g)/10;

    for(i=1; i<10; i++)
    {
        x=Vx*t*i;

        y=Vy*t*i-0.5*g*t*t*i*i;

        printf ("x %d = %lf, y %d = %lf\n",i,x,i,y);
    }
}