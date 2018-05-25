#include <stdio.h>
#include <stdlib.h>
#define Size 10
void BubbleSort(const int* ,int *,int);

int main()
{
   int NumBer[10]={9,5,6,7,8,1,2,4,10,3};
    int i=0;
    
    
    printf("排序前:");
    
     for( i = 0; i < 10; i++ ) {
        printf("%3d", NumBer[i]);
    }
   
    BubbleSort(NumBer,NumBer,10);
   
    printf("\n\n排序後:");
    for( i = 0; i < 10; i++ ) {
        printf("%3d", NumBer[i]);
    }
    
    printf("\n\n");
  system("PAUSE");	
  return 0;
}
