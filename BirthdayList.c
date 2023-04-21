/*
In this project, create,
edit and display your loved
Friend’s/Family’s birthday
list.
You can also provide a search
option to find your
friend’s birthday by name.
Youcan also view a list of
monthly birthdays. Must
display at least 5 birthdays
*/
#include <stdio.h>
int main() {
        char ch;
        
      do{
        printf("welcome To The Birthday List Mangement System!!\n");
        printf("we have the records of 5 friends \n");
        printf("The list of the names we have is as follow:\n");
        printf("1.Abhijeet\n");
        printf("2.Bhushan\n");
        printf("3.Priya\n");
        printf("4.Sakshi\n");
        printf("5.Maitreyi\n");
        printf("from the list choose your number option: \n");
                int  name;
                scanf("%d", &name);
		printf("\n");
     
             switch (name) {           
	        case 1:
                printf("details are as follow:\n");
                printf("Name:Abhijeet Joshi\n ");
                printf("DOB:23/02/1999\n");
                printf("Email:abhijeet1999@gmail.com\n");
                 break;

            case 2:
                printf("details are as follow:\n");
                printf("Name:Bushan vikas kumbhar\n ");
                printf("DOB:23/12/1992\n");
                printf("Email:bhushankumbhar1992@gmail.com\n");
                 break;

           case 3:
                printf("details are as follow:\n");
                printf("Name:Priya satish mahamuni\n ");
                printf("DOB:30/10/2002\n");
                printf("Email:priyamahamuni30@gmail.com\n");
                 break;

            case 4:
                printf("details are as follow:\n");
                printf("Name:Sakshi vilas koli\n ");
                printf("DOB:25/09/1995\n");
                printf("Email:sakshikoli1995@gmail.com\n");
                 break;

            case 5:
                printf("details are as follow:\n");
                printf("Name:Maitreyi anil kulkarni\n ");
                printf("DOB:1/08/2001\n");
                printf("Email:maitreyi2001@gmail.com\n");
                 break;
	    default:
		 printf("invalid option plzz enter correct option!!\n");
             }
	            
     printf("Do you want to continue if 'YES' type 'Y','y' else 'N','n' for' NO' :\n");

     getchar();
     scanf("%c",&ch);
     }while(ch=='y'||ch=='Y');
}
