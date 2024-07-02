/*Show smallest factor of a number n (other than 1)*/


 #include<stdio.h>
 int main()
 {
    int a;
    scanf("%d",&a);
    for (int i = 2; i <=a; i++)
    {
        if (a%i==0)
        {
            printf("%d ",i);
            goto end;
        }
        
    }
    end:
    
    return 0;
 }