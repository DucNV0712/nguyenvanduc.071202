#include <stdio.h>
#include <math.h>
int main()
{
	int n,S,i;
	printf("nhap n:");
	scanf("%d",&n);
    for (int S= 1; S < n; S++)
    {
        int count = 0;
        for (int i = 2; i <= sqrt(S); i++)
        {
            if (S% i == 0)
            {
                count++;
            }
        }
        if (count == 0 && S > 1)
            printf("%d\n",S);
    }
}
