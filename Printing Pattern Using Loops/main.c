#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void help(int a, int x, int y){

    if(a == 1){
        printf("%d ",a);
    }else{
    int q=2*a-2;
    if(  y== 0 || y == q || x ==0 || x ==q)
    {
        printf("%d ",a);
    }else{
        help(a-1,x-1,y-1);
    }}

}

int main()
{

    int n;
    printf("n=");
    scanf("%d", &n);

  	for (int i=0; i<2*n-1; i++) {
      for (int j = 0 ; j<2*n-1; j++) {
       help(n,j,i);
      }
      printf("\n");
    }


    return 0;
}
