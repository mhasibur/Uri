#include<stdio.h>
int main(){
    //without testing
    //CC - 4000/cr
    //GC - 3200/cr
    //LC - 5000/cr
    int amount, wp,wamount, due,mpayable, payable, dpayable;
    char ch;
    while(1){
    printf("======Payment Calculation||Regular Student======\n\n");
    printf("Enter the amount(without waiver): ");
    scanf("%d",&amount);
    printf("Enter the total waiver percentage: ");
    scanf("%d",&wp);
    payable = amount - ((amount*wp)/100);
    wamount = amount - payable;
    printf("Do you have any previous dues (Y/N): ");
    scanf("%s",&ch);
    //ch = getch();
    //system("cls");

    if(ch=='Y'||ch=='y'){
        printf("Enter the due amount: ");
        scanf("%d",&due);
        dpayable = due + payable;
        printf("\n\n======Payable Amount======\n");
        printf("Your waived amount is: %d\n", wamount);
        printf("Payable Amount in this semester is: %d BDT\n",dpayable);
        payable = due + (payable*50)/100;
        printf("Total Payable Amount before Mid(50%%): %d BDT\n",payable);

    }
    else{
        printf("\n\n======Payable Amount======\n");
        printf("Your waived amount is: %d\n", wamount);
        printf("Payable Amount in this semester is: %d BDT\n",payable);
        payable = (payable*50)/100;
        printf("Total Payable Amount before MID(50%%): %d BDT\n",payable);
    }
        getch();
    }
    getch();

 return 0;
}
