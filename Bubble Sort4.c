#include <stdio.h>
#include <stdlib.h>
void BubbleSort(const int const *NumBers,int *NumBerss,const int const Time)
{
    int Temp=0;
    int i=0, j=0,a=0;
    for( i = 0;i<Time; i++) {
        for( j=i;j< Time;j++) {
            if( NumBerss[j] > NumBerss[i] ) 
            {
                Temp = NumBerss[j];
                NumBerss[j] = NumBerss[i];
                NumBerss[i] = Temp;
            }
        }
    }
}
