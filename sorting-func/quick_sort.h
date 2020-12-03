#include <stdlib.h>
#include <time.h>
#define dt long long

void quickSort(dt *, dt );
void realQuickSort(dt *, dt, dt);
dt partition(dt *, dt , dt );
void swapper(dt *, dt *);

void quickSort(dt *array, dt arraySize){
    //randomizing the array to avoid worst case scenario
    srand(time(NULL));
    int i=(arraySize-1),j=0;
    for(;i>0;--i){
        j = rand()%(i+1);
        // swapper(array+i, array+j);
        int temp = *(array+i);
        *(array+i) = *(array+j);
        *(array+j) = temp;
    }
    realQuickSort(array,0,arraySize-1);
}

void realQuickSort(dt *array,dt start, dt end){
    if(start < end){
        dt pIndex = partition(array, start, end);
        realQuickSort(array, start, pIndex-1);
        realQuickSort(array, pIndex+1, end);
    }
}

dt partition(dt *array, dt start, dt end){
    dt pivot = *(array+end);
    dt pIndex = start;
    for(dt i=start; i<end; ++i){
        if(*(array+i) <= pivot){
            // swapper((array+i),(array+pIndex));
            int temp = *(array+i);
            *(array+i) = *(array+pIndex);
            *(array+pIndex) = temp;
            ++pIndex;
        }
    }
    // swapper((array+pIndex),(array+end));
    int temp = *(array+end);
    *(array+end) = *(array+pIndex);
    *(array+pIndex) = temp;
    return pIndex;
}

void swapper(dt *a, dt *b){
    dt t = *a;
    *a = *b;
    *b = t;
}
