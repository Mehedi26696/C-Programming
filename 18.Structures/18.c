


// Define a structure for representing a point in two-
// dimensional Cartesian co-ordinate system

// • Write a function to compute the distance between
// two given points
// • Write a function to compute the middle point of the
// line segment joining two given points
// • Write a function to compute the area of a triangle,
// given the co-ordinates of its three vertices


#include<stdio.h>
#include<math.h>
typedef struct{
    double x;
    double y;
}point;

double dis(point a,point b)
{
    double t;
    t=sqrt(((a.x-b.x)*(a.x-b.x))+((a.y-b.y)*(a.y-b.y)));
    return t;

}

point mid(point a,point b)
{
    point t;
    t.x=(a.x+b.x)/2;
    t.y=(a.y+b.y)/2;
    return t;
}

double area(point a,point b)
{
    double t;
    t=((a.x*b.y)-(a.y*b.x));
    if(t<0)
    {
        t=-t;
    }
    return t/2;
}
int main()
{
    point a,b;
    scanf("%lf %lf",&a.x,&a.y);
    scanf("%lf %lf",&b.x,&b.y);

    double m=dis(a,b);
    printf("Distance : %lf\n",m);

    point n=mid(a,b);
    printf("Mid Point : %lf %lf\n",n.x,n.y);


    double s=area(a,b);
    printf("Area of a triangle : %lf\n",s);
}