#include<stdio.h>
main()
{
	
	int p;
     printf("1.Pizza Rs:239");
	 printf("\n2.Burger Rs:129");
	 printf("\n3.Pasta Rs:179");
	 printf("\n4.French Fries Rs:99");
	 printf("\n5.Sandwich Rs:149");
	 printf("\nEnter the number of the item");
	 scanf(" %d",&p);
	 switch(p)
	 {
	 	case 1:
	 		printf("Food item-Pasta\nPrice - Rs179");
	 	break;
	 	case 2:
	 		printf("Food item-Burger\nPrice-Rs179");
	 	break;
	 	case 3:
	 		printf("Food item-Pasta\nPrice-Rs179");
	 	break;
	 	case 4:
	 		printf("Food item-French Fries\nPrice-Rs99");
	 	break;
	 	case 5:
	 		printf("Food item-Sandwich\nPrice-Rs149");
	 }
}
