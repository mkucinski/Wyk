#include <stdio.h>
#include <math.h>

int main()
{
    int n,y,i;
    printf
    do 
    {   
    printf("Witaj w moim programie\nMozesz wybrac nastepujace opcje:\n1 - opcja wyjscia z programu\n2 - opcja pobrania liczby i wyswietlenia jej potegi\n3 - opcja pobrania liczby i wypisania jej pierwiastka\nWpisz wybrana opcje:");
        scanf("%d", &n);
        switch(n){
        case 1:
          return 0;              
          break;
        case 2:
          y=1;
          scanf("%d", &i);
          printf("%lf/ln",(double)(i*i));
          break;
        case 3:
          y=1;
          scanf("%d", &i);
          printf("%lf/ln",sqrt((double)(i*i)));
          break;
        default:          
          break;
    };
    }while(y!=1 || n==1);
  

    return 0;
}