#include<stdio.h>
int main() {
  float temperature[3][4];
  float total=0.0,average=0.0 ;
 
  printf("Temperature for 3 Cities\n");
  for(int c=0;c<3;c++)
  {
    printf("\nfor a week%d",c+1);
    for(int w=0;w<4;w++)
    {
      printf("\n Weeks %d\t",w+1);
      scanf("%f",&temperature[c][w]);
    }
  }

  printf("TEMPERATURE TRACKING");
  printf("\n Sr.no.\tCity\tMonth1\tMonth2\tMonth3\tMonth4\tAvg rainfall\n");
  for(int c=0;c<3;c++){
    total = 0.0;
    printf("\n%d\t",c+1);
    printf("City %d\t",c+1);
    for(int w=0;w<4;w++){
      printf("\t%f",temperature[c][w]);
      total+=temperature[c][w];
    }
    average=total/4;
    printf("\t%f",average);
  }
  
  return 0;
}
