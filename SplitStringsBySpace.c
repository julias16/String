#include<stdio.h>
int main()
{
    char a[1000];
    printf("Enter the string: ");
    scanf("%[^\n]s", a);
    int i, k=0;
    for(i=0; a[i]!='\0'; i++)
    {
        if(a[i]==' ' && a[i+1]!=' ' && a[i+1]!='\0')
        {
            if(k>0)
                printf("\n");
        }
        else if(a[i]==' ' && a[i+1]==' ')
            continue;
        else
        {
            printf("%c", a[i]);
            k++;
        }
    }
}
