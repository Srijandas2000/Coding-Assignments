#include<stdio.h> 
int main()
{
      int x, y;
      printf("Enter the value for variable X and Y :");
      scanf("%d %d", &x, &y);

      if (x > 0 && y > 0)
      printf("point (%d, %d) lies in the First quadrant\n",x,y);

      else if (x < 0 && y > 0)
      printf("point (%d, %d) lies in the Second quadrant\n",x,y);

      else if (x < 0 && y < 0)
      printf("point (%d, %d) lies in the Third quadrant\n",x,y);

      else if (x > 0 && y < 0)
      printf("point (%d, %d) lies in the Fourth quandrant\n",x,y);

      else if (x == 0 && y == 0)
      printf("point (%d, %d) lies at the origin\n",x,y);
return 0;
}