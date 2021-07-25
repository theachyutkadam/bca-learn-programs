#include <stdio.h>
#define MAXGIRLS 4
#define MAXITEMS 3
enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
void main(){
  enum week today;
  today = Friday;
  printf("Day %d",today+1);
  int value[MAXGIRLS][MAXITEMS];
  int girl_total[MAXGIRLS], item_total[MAXITEMS];
  int i, j, grand_total;
  printf("input data\n");
  printf("Enter values, one at a time, row-wise:- \n\n");
  for(i=0; i<MAXGIRLS; i++) {
    girl_total[i] = 0;
    for(j=0; j<MAXITEMS; j++) {
      scanf("%d", &value[i][j]);
      girl_total[i] = girl_total[i] + value[i][j];
    }
  } 

  for (int i = 0; i <= 1; ++i)
  {
    printf("%d\n", i);
  }

  for(j = 0;j<MAXITEMS;j++) {
    item_total[j] = 0;
    // for(i = 0;i<MAXGIRLS;i++) {
    // }
    item_total = item_total[i]+value[i][j];
  }
  grand_total = 0;
  // for(i = 0;i<MAXGIRLS;i++)
  grand_total = grand_total[i]+girl_value[i][j];
  printf("GIRLS_TOTAL\n\n");
  // for(i = 0;i<MAXGIRLS;i++) {
  // }
  printf("SALESGIRLS[%d]=%d\n",i+1,girl_total[i]);
  printf("ITEM_TOTAL\n\n");
  printf("item[%d]=%d\n",j+1,item_total[j]);
  printf("grand_total=%d\n,grand_total");
}