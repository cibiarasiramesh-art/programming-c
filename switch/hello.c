#include<stdio.h>
int main() {
    int n,m,gcd;
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n && i<=m;i++) {
        if (n%i==0 && m%i==0) {
            gcd=i;
        }
    }
    printf("%d",gcd);
    return 0;
}
