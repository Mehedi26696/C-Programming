//the complex number program to include functions for addition, subtraction, multiplication, and division




#include<stdio.h>
typedef struct{
    int real;
    int imag;
}complex;
typedef struct{
    double r;
    double i;
}comp;

complex add(complex a,complex b)
{
     complex t;
     t.real=a.real+b.real;
     t.imag=a.imag+b.imag;
     return t;

}
complex sub(complex a,complex b)
{
     complex t;
     t.real=a.real-b.real;
     t.imag=a.imag-b.imag;
     return t;

}
complex mul(complex a,complex b)
{
     complex t;
     t.real=(a.real*b.real)-(a.imag*b.imag);
     t.imag=(a.real*b.imag)+(b.real*a.imag);
     return t;

}

comp div(comp a,comp b)
{
     comp t;
     t.r=((a.r*b.r)+(a.i*b.i))/((b.r*b.r)+(b.i*b.i));
     t.i=((b.r*a.i)-(a.r*b.i))/((b.r*b.r)+(b.i*b.i));
     return t;

}
int main()
{   
    complex a,b;
    scanf("%d %d",&a.real,&a.imag);
    scanf("%d %d",&b.real,&b.imag);
    
    complex x= add(a,b);
    printf("Addition : %d %d\n",x.real,x.imag);

    complex y= sub(a,b);
    printf("Subtraction : %d %d\n",y.real,y.imag);

    complex z= mul(a,b);
    printf("Multiplication : %d %d\n",z.real,z.imag);

    comp c,d;
    c.r=a.real;
    c.i=a.imag;
    d.r=b.real;
    d.i=b.imag;
    // scanf("%d %d",&c.r,&c.i);
    // scanf("%d %d",&d.r,&d.i);
    comp m= div(c,d);
    printf("Division : %lf %lf", m.r,m.i);

}