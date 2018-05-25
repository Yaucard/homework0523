#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int *NumBers,int *NumBerss,int Times)
{
    int Temp=0;
    int i=0, j=0,a=0;
    for( i = 0;i<Times; i++) {
        for( j=i;j< Times;j++) {
            if( NumBerss[j] < NumBerss[i] ) 
            {
                Temp = NumBerss[j];
                NumBerss[j] = NumBerss[i];
                NumBerss[i] = Temp;
            }
        }
    }
}
