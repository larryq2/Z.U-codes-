#include<stdio.h>
#include<time.h>
   int main(){

    int bookID,dueDate,returnDate,overdue,fineRate;

     printf("please input the following\n");

     printf("BookID\nReturn-date\nDue-date\n");
     scanf("%d%d%d",&bookID,&dueDate,&returnDate);

     overdue=returnDate-dueDate;

     printf("overdue date:%d\n",overdue);

 if (overdue>0 && overdue<=7){
         int finerate = overdue*20;
         printf("your fineRate=%d\n",finerate);
     }
     else if (overdue>=8 && overdue<=14){

         int finerate=overdue*50;
         printf("your fineRate=%d\n",finerate);
     }

     else{
         int finerate=overdue*100;
         printf("your fineRate=%d\n",finerate);
     }


/*switch (overdue){
  case overdue>0 && overdue<=7:
     fineRate=overdue*20;
     printf("your fineRate=%d\n",fineRate");
  break;
  case overdue>8 && overdue<=14:
     fineRate=overdue*50;
     printf("your fineRate=%d\n",fineRate");
  break;
  case overdue>=15:
     fineRate=overdue*100;
     printf("your fineRate=%d\n",fineRate");
  break;
  */
    return 0;
   }
