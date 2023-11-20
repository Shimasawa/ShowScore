#include <stdio.h>
#include "sort.h"
//ポインタの位置に格納されている配列そのものをいじるので戻り値無し。受け取ったポインタに*をつけてポインタのさす配列そのものを変数dataに格納している
void sort(int *data,int size){
    int tmp;
    for(int i=0;i<size;i++){
        for(int s=i+1;s<size;s++){
            if(data[s]>data[i]){
                tmp = data[s];
                data[s] = data[i];
                data[i] = tmp;
            }
        }
    }
}
