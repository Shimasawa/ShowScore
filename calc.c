#include <stdio.h>
#include "calc.h"

void dev(int score,double avg,double st){
    double d = ((score-avg)/st)*10+50;
    printf("(%.2f): ",d);
}
