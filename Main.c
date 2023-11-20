#include <stdio.h>
#include <math.h>
#include "sort.h"
#include "calc.h"
#include "graph.h"

#define DATA_SIZE 5

int score,sum;
double avg,st;
int data[DATA_SIZE];

int main(void){
    //整理する配列
    printf("%d人の点数を入力\n",DATA_SIZE);
    for(int i=0;i<DATA_SIZE;i++){
        printf("%d人目 >> ",i+1);
        scanf("%d",&score);
        data[i] = score;
        printf("%d\n",score);
    }

    //平均値の計算
    for(int i=0;i<DATA_SIZE;i++){
        sum += data[i];
    }
    avg = sum/DATA_SIZE;
    //標準偏差の計算
    sum = 0;
    for(int i=0;i<DATA_SIZE;i++){
        sum += (data[i]-avg)*(data[i]-avg);
    }
    st = sqrt(sum/DATA_SIZE);
    
    
    printf("------------------------\n");
    printf("        得点グラフ      \n");
    printf("------------------------\n");
    
    
    //並べ替え
    sort(&data,DATA_SIZE);
    //データの表示
    for(int i=0;i<DATA_SIZE;i++){
        printf("第%d位 (%d点)",i+1,data[i]);
        dev(data[i],avg,st);
        write_graph(data[i]);
        printf("\n");
    }
    
    return 0;
}
