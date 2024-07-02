/*Display this GP - 1,2,4,8,16,32,.. upto ‘n’
terms. x32 */
 
 #include<stdio.h>
 int main()
 {
    int n,a=1;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        printf("%d ",a);
        a=a*2;
    }
    
    return 0;
 }