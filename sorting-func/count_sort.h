#include<stdlib.h>
#define dt long long
#define MINIMUM -922337203685477580

void countSort(dt*, dt);

void countSort(dt *array, dt arraySize){
    dt max_num = MINIMUM, *tempArray, *resultArray;
    for(int i=0;i<arraySize;++i){
        if(*(array+i)>max_num){
            max_num = *(array+i);
        }
    }
    tempArray = (dt*)calloc(max_num+1, sizeof(dt)); // since we want to initialize our array with 0
    resultArray = (dt*)calloc(arraySize, sizeof(dt));
    for(int i=0;i<arraySize;++i){
        ++tempArray[*(array+i)];
    }
    dt j = 0;
    for(int i=0;i<max_num+1;++i){
        dt tempNum = *(tempArray+i);
        while(tempNum>0){
            *(array+j)=i;
            ++j;
            tempNum--;
        }
    }

}
