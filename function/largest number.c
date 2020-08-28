#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
 int ans ;
    if(a >= b && a >= c && a >= d)
        ans  = a;
    if(b >= a && b >= c && b >= d)
        ans  = b;
    if(c >= a && c >= b && c >= d)
        ans = c;
    if(d >= a && d >= b && d >= c)
        ans = d;

    return ans;
}
int main() {
    int a, b, c, d,ans;
   // printf("Enter a four number check largest number :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    ans = max_of_four(a, b, c, d);
    printf("%d largest number is ", ans);
    
    return 0;
}
