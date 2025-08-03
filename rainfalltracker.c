#include<stdio.h>
int main() {
    float rainfall[3][4];
    float tot=0.0,avg=0.0;
    

    printf("rainfall Tracker::::\n");
    for(int i=0;i<3;i++){
        printf("Enter data for city%d\n",i+1);
        for(int m=0;m<4;m++){
            printf("Months:%d",m+1);
            scanf("%f",&rainfall[i][m]);
        }
    }
    
    printf("Rainfall Tracker\n");
    printf("\n------------------------------");
    printf("\nSr.no.\tMonth 1\tMonth 2\tMonth 3\tMonth4\tAverage Rainfall\n ");
    
    for(int i=0;i<3;i++){
        tot=0.0;
        printf("\t\t\t%d",i+1);
        printf(" City%d",i+1);
        for(int m=0;m<4;m++){
            printf("\t\t\t%f",rainfall[i][m]);
            tot+=rainfall[i][m];
        }
    avg=tot/4;
    printf("\t\t%f\n",avg);
    }
    return 0;
}
