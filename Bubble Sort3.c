#include <stdio.h>
#include <stdlib.h>
void BubbleSort(int *const NumBers,int const Time)
{
    int *Temp=0;
    int i=0, j=0,a=0;
    for( i = 0;i<Time; i++) {
        for( j=i;j< Time;j++) {
            if( NumBers[j] > NumBers[i] ) 
            {
                Temp = NumBers[j];
                NumBers[j] = NumBers[i];
                NumBers[i] = Temp;
            }
        }
    }
  return 0;
}
