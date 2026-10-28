#include<stdio.h>
int main()
{
    int option,N,total_bill=0,grand_total,gst;
    int item1=0,item2=0,item3=0,item4=0,item5=0,item6=0,item7=0,item8=0,item9=0,item10=0,item11=0,item12=0;

    printf("\n----------------------Welcome To Dhana 's Cloud Kitchen-------------------------\n");
do
{
    printf("\n");
    printf("\n==============MENU==============\n");
    printf("*MAIN COURSE*\n");
    printf("1. BIRYANI = 250\n2. CHICKEN CURRY = 150\n3. MUTTON BIRYANI = 400\n4. MUTTON CURRY = 350\n5. MUSHROM CURRY = 200\n6. PANEER CURRY = 200\n7. RICE = 60\n8. RASAM = 20      \n");
    printf("\n");

    printf("*STARTERS*\n");
    printf("9. CHICKEN KABAB = 200\n10. CHICKEN LOLIPOP = 300\n11. CHICKEN 65 = 200\n12. CHILLI CHICKEN = 200\n");
    

    printf("ENTER THE OPTION FROM THE MENU:  ");
    scanf("%d",&option);

    if(option < 1 || option > 12)
    {
        break;
    }
   
    printf("ENTER THE QUANTITY: ");
    scanf("%d",&N);
    
    switch(option)
    {
        case 1 :
        printf("YOU ORDERD BIRYANI\n");
        printf("\n----------------------------------------\n");
        item1 +=N;
        total_bill += N*250;
        break;

        case 2 :
        
        printf("YOU ORDERD CHICKEN CURRY\n\n");
        printf("\n----------------------------------------\n");
        item2 += N;
        total_bill += N*150;
        break;

        case 3:
        printf("YOU OREDERD MUTTON BIRYANI\n");
        printf("\n----------------------------------------\n");
        item3 += N;
        total_bill += N*400;
        break;

        

        case 4:
        printf("YOU ORDERD MUTTON CURRY\n");
        printf("\n----------------------------------------\n");
        item4 += N;
        total_bill += N*350;
        break;

        case 5 :
        printf("YOU ORDERD MUSHROOM CURRY\n");
        printf("\n----------------------------------------\n");
        item5 += N;
        total_bill += N*200;
        break;

        case 6:
        printf("YOU ORDERD PANEER CURRY\n");
        printf("\n----------------------------------------\n");
        item6 += N;
        total_bill += N*200;
        break;


        case 7:
        printf("YOU ORDERD RICE\n");
        printf("\n----------------------------------------\n");
        item7 += N;
        total_bill += N*60;
        break;

        case 8:
        printf("YOU ORDERD RASAM\n");
        printf("\n----------------------------------------\n");
        item8 +=N;
        total_bill += N*20;
        break;

        case 9:
        printf("YOU ORDERD CHICKEN KABAB\n");
        printf("\n----------------------------------------\n");
        item9 += N;
        total_bill += N*200;
        break;

        case 10:
        printf("YOU ORDERD CHICKEN lolipop\n");
        printf("\n----------------------------------------\n");
        item10 += N;
        total_bill += N*300;
        break;

        case 11:
        printf("YOU ORDERD CHICKEN 65\n");
        printf("\n----------------------------------------\n");
        item11 += N;
        total_bill += N*200;
        break;


        case 12:
        printf("YOU ORDERD  CHILLI CHICKEN\n");
        printf("\n----------------------------------------\n");
        item12 += N;
        total_bill += N*200;
        break;

        printf("\n");



     
        default:
        printf("INVALID OPTION! CHOOSE A OPTION FROM MENU");
        break;

        
    }
       
}
    while(option>=1 && option<=12);
    if(item1 > 0)
    printf(" %d*Biryani (Rs. %d)\n",item1,item1*250);
    if(item2 > 0)
    printf("%d*CHICKEN CURRY (Rs. %d)\n",item2,item2*150);
    if(item3 > 0)
    printf("%d*MUTTON BIRYANI (Rs. %d)\n",item3,item3*400);
    if(item4 > 0)
    printf("%d*MUTTON CURRY  (Rs. %d)\n",item4,item4*350);
    if(item5 > 0)
    printf(" %d*MUSHROOM CURRY (Rs. %d)\n",item5,item5*200);
    if(item6 > 0)
    printf("%d*PANEER CURRY (Rs. %d)\n",item6,item6*200);
    if(item7 > 0)
    printf("%d*RICE (Rs. %d)\n",item7,item7*60);
    if(item8 > 0)
    printf("%d*RASAM (Rs. %d)\n",item8,item8*20);
    if(item9 > 0)
    printf("%d*CHICKEN KABAB (Rs. %d)\n",item9,item9*200);
    if(item10 > 0)
    printf("%d*CHICKEN LOLIPOP (Rs. %d)\n",item10,item10*300);
    if(item11 > 0)
    printf("%d*CHICKEN 65 (Rs. %d)\n",item11,item11*200);
    if(item12 > 0)
    printf("%d* CHILLI CHICKEN  (Rs. %d)\n",item12,item12*200);

    printf("\n-------------------------------\n");
    printf("\n-------------BILL---------------\n");
    printf("Grand total ->  %d\n",total_bill);
    gst=total_bill*0.18;
    grand_total = total_bill + gst;

    printf("final total -> %d\n",grand_total);

    
    printf("Thank YOU VISIT AGAIN\n");

    return 0;
    

}