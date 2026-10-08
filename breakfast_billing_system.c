#include<stdio.h>
#include<string.h>
int total=0;
char itemnames[10][10];
int quantity_array[10];
int rate_array[10];
int i=0,j=0,k=0;
int main()
{
    printf("\t  Welcome\n");
    printf("--------------------------------\n");
    printf("Sir May I know ,want you want.🙏\n");
options: printf("Please select one option: \n");
         printf("\t1.Breakfast🥘\n");
         printf("\t2.Tea & Coffee☕\n");
         printf("\t3.Payment🧾\n");
         printf("\t4.Exit👋\n");
         int selection_option;
         printf("Waiting for your Order : ");
         scanf("%d",&selection_option);
         int menu_option;
         int quantity;
         switch(selection_option)
         {
/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                      FOOD
//
redo_food:           case 1:printf("Select from the menu:\n");
                            printf("\t1.Idly\t:₹40\n");
                            printf("\t2.Dosa\t:₹45\n");
                            printf("\t3.Poori\t:₹35\n");
                            printf("\t4.Upma\t:₹35\n");
                            printf("\t5.Pongal:₹30\n");
                            printf("\t6.Back🔙\n");
                            printf("Waiting for your order : ");
                            scanf("%d",&menu_option);
                            switch(menu_option)
                            {
                                case 1:   printf("Enter the quantity : ");
                                          scanf("%d",&quantity);
                                          strcpy(itemnames[i++],"Idly");
                                          quantity_array[j++]=quantity;
                                          rate_array[k++]=40;
                                          total+=quantity*40;
                                          break;

                                case 2:   printf("Enter the quantity : ");
                                          scanf("%d",&quantity);
                                          strcpy(itemnames[i++],"Dosa");
                                          quantity_array[j++]=quantity;
                                          rate_array[k++]=45;
                                          total+=quantity*45;
                                          break;

                                case 3:   printf("Enter the quantity : ");
                                          scanf("%d",&quantity);
                                          strcpy(itemnames[i++],"Poori");
                                          quantity_array[j++]=quantity;
                                          rate_array[k++]=35;
                                          total+=quantity*35;
                                          break;

                                case 4:   printf("Enter the quantity : ");
                                          scanf("%d",&quantity);
                                          strcpy(itemnames[i++],"Upma");
                                          quantity_array[j++]=quantity;
                                          rate_array[k++]=35;
                                          total+=quantity*35;
                                          break;

                                case 5:   printf("Enter the quantity : ");
                                          scanf("%d",&quantity);
                                          strcpy(itemnames[i++],"Pongal");
                                          quantity_array[j++]=quantity;
                                          rate_array[k++]=30;
                                          total+=quantity*30;
                                          break;

                                case 6:   goto options;
                                          break;

                                default: printf("Invalid option!!!\n");
                                         goto redo_food;
                            }
                            printf("\nAnything else sir ?\n");
                            goto options;

/////////////////////////////////////////////////////////////////////////////////////////////////////
//                                    BEVERAGES
//
redo_beverage:           case 2:printf("Select from the menu:\n");
                                printf("\t1.Tea\t:₹20\n");
                                printf("\t2.Coffee:₹25\n");
                                printf("\t3.Milk\t:₹30\n");
                                printf("\t4.Back🔙\n");
                                printf("Waiting for your order : ");
                                scanf("%d",&menu_option);
                                switch(menu_option)
                                {
                                    case 1:   printf("Enter the quantity : ");
                                              scanf("%d",&quantity);
                                              strcpy(itemnames[i++],"Tea");
                                              quantity_array[j++]=quantity;
                                              rate_array[k++]=20;
                                              total+=quantity*20;
                                              break;

                                    case 2:   printf("Enter the quantity : ");
                                              scanf("%d",&quantity);
                                              strcpy(itemnames[i++],"Coffee");
                                              quantity_array[j++]=quantity;
                                              rate_array[k++]=25;
                                              total+=quantity*25;
                                              break;

                                    case 3:   printf("Enter the quantity : ");
                                              scanf("%d",&quantity);
                                              strcpy(itemnames[i++],"Milk");
                                              quantity_array[j++]=quantity;
                                              rate_array[k++]=30;
                                              total+=quantity*30;
                                              break;

                                    case 4:   goto options;
                                              break;

                                    default: printf("Invalid option!!!\n");
                                             goto redo_beverage;
                                }
                                printf("\nAnything else sir ?\n");
                                goto options;

////////////////////////////////////////////////////////////////////////////////////////////////////
//                                PAYMENT SECTION
//
redo_payment:         case 3: if(total)
                              {

                                  printf("================================BILL===================================\n");
                                  printf("SI\t\tItem\t\tRate\t\tQuantity\tTotal\n");
                                  printf("=======================================================================\n\n");
                                  int listnum=i;
                                  for(i=0;i<listnum;i++)
                                      printf("%d\t\t%s\t\t\₹%d\t\t%d\t\t₹%d\n",i+1,itemnames[i],rate_array[i],quantity_array[i],rate_array[i]*quantity_array[i]);
                                  printf("=======================================================================\n");
                                  printf("\t\t\t\t\t\tGrand Total :\t₹%d\n\n",total);
                                  printf("Select the payment option:\n");
                                  printf("\t1.Cash\n");
                                  printf("\t2.UPI\n");
                                  printf("\t3.Card\n");
                                  printf("\t4.Back🔙\n\n");
                                  printf("Waiting...  please enter : ");
                                  scanf("%d",&menu_option);
                                  switch(menu_option)
                                  {
                                      case 1:   printf("Payment Done\n");
                                                printf("=========================\n");
                                                printf("Visit Again !!!\n");
                                                break;
                                      case 2:   printf("Payment Done\n");
                                                printf("=========================\n");
                                                printf("Visit Again !!!\n");
                                                break;
                                      case 3:   printf("Payment Done\n");
                                                printf("=========================\n");
                                                printf("Visit Again !!!\n");
                                                break;
                                      case 4:   goto options;
                                                break;

                                      default: printf("Invalid option!!!\n");
                                               goto redo_payment;
                                  }
                                  break;
                              }

                              else
                              {
                                  printf("Your Cart is empty . You should Buy something !!!\n");
                                  goto options;
                              }

///////////////////////////////////////////////////////////////////////////////////////////////////
//                                   EXIT SECTION
//
             case 4:printf("=========================\n");
                    printf("Visit Again !!!\n");
                    break;

             default: printf("Invalid option!!!\n");
                      goto options;
         }

         return 0;
}
