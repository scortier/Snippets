#include <bits/stdc++.h>
int main()
    {
        int n,i,flag=0;
        scanf("%d",&n);
        int *p=(int *)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
        {
            scanf("%d",p+i);
            if(*(p+i)==1)
            {
                flag=1;
            }
        }
        if(flag==0)
            printf("EASY");
        else
           printf("HARD");
        return 0;

    }
