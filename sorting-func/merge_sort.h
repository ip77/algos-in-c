#include<stdlib.h>
#define dt long long

void mergeSort(dt*, dt);
void merger(dt*, dt*, dt, dt*, dt);

void mergeSort(dt*array, dt arraySize){
    if(arraySize < 2)
        return;
    dt mid_l, mid_r, *left,*right;
    mid_l = arraySize/2;
    // printf("%lld\n", arraySize);
    mid_r = arraySize-mid_l;
    // printf("%lld %lld %lld\n", mid_l, mid_r, arraySize);
    left = (dt*)malloc(mid_l * sizeof(dt));
    right = (dt*)malloc(mid_r * sizeof(dt));
    for(int i = 0 ; i < mid_l ; ++i){
        *(left+i) = *(array+i);
    }
    for(int i = mid_l ; i < arraySize ; ++i){
        *(right+i-mid_l) = *(array+i);
    }
    mergeSort(left, mid_l);
    mergeSort(right, mid_r);
    merger(array, left, mid_l, right, mid_r);
    free(left);
    free(right);
}

void merger(dt *array, dt *left, dt lenL, dt *right, dt lenR){
    dt i=0,j=0,k=0;
    while(i<lenL && j<lenR){
        if(*(left+i) < *(right+j)){
            *(array+k++) = *(left+i++);
        }
        else{
            *(array+k++) = *(right+j++);
        }
    }
    while(i<lenL){
        *(array+k) = *(left+i);
        ++i,++k;
    }
    while(j<lenR){
        *(array+k) = *(right+j);
        ++j,++k;
    }
}
