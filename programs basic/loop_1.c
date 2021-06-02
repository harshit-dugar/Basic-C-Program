/*print numbers between two given numbers which is divisible by 
  2 but not divisible by 3   for loop*/
  #include <stdio.h>

  int main()
  {
      int x,y,i;
      printf("Enter starting number:");
      scanf("%d",&x);
      printf("Enter ending number:");
      scanf("%d",&y);
      for (i=x; i<=y; i++)
      {
          if (i%2==0 && i%3!=0)
          {
              printf("%d \t",i);
          } 
      }

      return 0;
  }