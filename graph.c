#include <stdio.h>
#include "graph.h"

void write_graph(int score){
    int ten = score/10;
    int one = score-ten*10;
    for(int i=0;i<ten;i++){
        printf("#");
    }
    for(int i=0;i<one;i++){
        printf("*");
    }
}
