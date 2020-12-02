#define dt long long

void selectionSort(dt *array,dt arraySize)
{
    for(dt i=0;i<arraySize;++i){
        dt min = *(array+i);
        for(dt j=i+1;j<arraySize;++j){
            if(*(array+j)<*(array+i)){
                dt temp = *(array+i);
                *(array+i) = *(array+j);
                *(array+j) = temp;
            }
        }
    }
}
