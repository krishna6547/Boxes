#include <stdio.h>   
#include <time.h>
#include <conio.h> // only available on certain compilers for instance TURBO C++
void delay(int ms) {
    clock_t start_time = clock();
    double milliseconds = ms * (CLOCKS_PER_SEC / 1000.0);

    while ((clock() - start_time) < milliseconds);
}
void main()
{
// clrscr(); clear previous output (optional if you use turboc++)
  int boxes, loop;
  printf("How many repeatitions: ");
  scanf("%d",&loop);
  for (int times =1; times <=loop; times++)
  {
    for (boxes = 1; boxes <=10; boxes++)
    {

      for (int column = 1; column <=boxes; column++)//print increasin boxes
      {
        for (int row =1 ; row<=boxes; row++)
          printf("*");
        printf("\n");// seperate lines
      }
      printf("\n"); // separate boxes
      delay(100);
    }
    for (boxes = 1; boxes<=10; boxes++)
    {
      for (int column = boxes; column <=10; column++)  // print decresing boxes
      {
        for (int row =boxes ; row<=10; row++)
          printf("*");
        printf("\n");// 	seperate lines
      }
      printf("\n"); // separate boxes
      delay(100);
    }

  }
  //getchar(); //stay at output menu (optional if you use turboc++)
}
