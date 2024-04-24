#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char ch[n];
    scanf("%s", ch);

    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+(ch[i]-'0');
    }
    printf("%d",sum);
    
    return 0;

}