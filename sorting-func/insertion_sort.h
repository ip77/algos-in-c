#define dt long long

void insertionSort(dt *array,dt arraySize){
    for(dt i=1;i<arraySize;++i){
        dt temp = *(array+i);
        dt j = i;
        while(j!=0 &&  *(array+j-1)>temp){
            *(array+j) = *(array+j-1);
            --j;
        }
        array[j] =  temp;
    }
}
