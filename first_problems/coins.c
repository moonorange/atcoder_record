#include <stdio.h>
int main(void)
{
  int a,b,c,x;
  int i,j,k;
  int ans=0;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&x);

  for(i=0; i <= a; i++) {
    for(j=0; j <= b; j++) {
      for(k=0; k <= c; k++) {
        if(50*k+100*j+500*i == x) {
          ans += 1;
        }
      }
    }
  }
  printf("%d\n", ans);
}
