#define dt long long

void bubbleSort(dt *array, dt arraySize){
    for(dt i=0;i<arraySize-1;++i){
        for(dt j=0;j<arraySize-i-1;++j){
            if(*(array+j)>*(array+j+1)){
                dt temp = *(array+j);
                *(array+j) = *(array+j+1);
                *(array+j+1) = temp;
            }
        }
    }
}
