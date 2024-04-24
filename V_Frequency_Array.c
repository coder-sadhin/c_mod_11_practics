#include <stdio.h>
int main()
{
    int n,countN;
    scanf("%d %d", &n ,&countN);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int cnt[countN];

    for (int i = 0; i < countN; i++) {
        cnt[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        int value=arr[i]-1;
        cnt[value]++;
    }

    for (int i = 0; i < countN; i++)
    {
       printf("%d\n",cnt[i]);
    }
    
    return 0;

}