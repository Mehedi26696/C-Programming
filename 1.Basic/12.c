#include<stdio.h>
int main()
{
    char a[31];
    scanf("%[^\n]",a);
    //fgets(a,sizeof(a),stdin);
    printf("%30s\n",a);
    return 0;
}