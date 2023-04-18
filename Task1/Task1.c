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
        
        printf("welcome To The Birthday List Mangement System!!\n");
        printf("we have the records of 5 friends \n");
	printf("The list of the names we have is as follow:\n");
	printf(".Abhijeet\n");
	printf(".Bhushan\n");
	printf(".Priya\n");
	printf(".Sakshi\n");
	printf(".Maitreyi\n");
	printf("From the above list choose name and then\n");
	printf("enter the initial letter of their name to see the birthday details of your friend.\n");
	printf("NOW!!! enter the initial letter of the name you have choose:");
                char name;
                scanf("%c", &name);

	
        if(name=='A'||name=='B'||name=='P'||name=='S'||name=='M'){

        printf("\n");
        printf("The details are as follow:\n");
             switch (name) {

            case 'A':
	        printf("\n");
                printf("Name:Abhijeet Joshi\n ");
		printf("DOB:23/02/1999\n");
                printf("Email:abhijeet1999@gmail.com\n");
		 break;
             
            case 'B':
		printf("\n"); 
                printf("Name:Abhijeet Joshi\n ");
                printf("DOB:23/12/1992\n");
                printf("Email:bhushankumbhar1992@gmail.com\n");
                 break;
             
           case 'P':
		printf("\n");
		printf("\n");
                printf("Name:Priya satish mahamuni\n ");
                printf("DOB:30/10/2002\n");
                printf("Email:priyamahamuni30@gmail.com\n");
                 break;
             
            case 'S':
		printf("\n");
                printf("Name:Sakshi vilas koli\n ");
                printf("DOB:25/09/1995\n");
                printf("Email:sakshikoli1995@gmail.com\n");
                 break;
             
            case 'M':
		printf("\n");
                printf("Name:Maitreyi anil kulkarni\n ");
                printf("DOB:1/08/2001\n");
                printf("Email:maitreyi2001@gmail.com\n");
                 break;
            }

	 }
	     else{
               
		        printf("\n");
                        printf("please enter proper initial letter, the letter you have entered is not from our list!!!\n");
                       
                }
            
	
}

OUTPUT:-
kshitija23dreamer@kshitija23-dreamer:~/InternshipTask$ vim Task1.c
kshitija23dreamer@kshitija23-dreamer:~/InternshipTask$ cc  Task1.c
kshitija23dreamer@kshitija23-dreamer:~/InternshipTask$ ./a.out
welcome To The Birthday List Mangement System!!
we have the records of 5 friends 
The list of the names we have is as follow:
.Abhijeet
.Bhushan
.Priya
.Sakshi
.Maitreyi
From the above list choose name and then
enter the initial letter of their name to see the birthday details of your friend.
NOW!!! enter the initial letter of the name you have choose:M

The details are as follow:

Name:Maitreyi anil kulkarni
 DOB:1/08/2001
Email:maitreyi2001@gmail.com
kshitija23dreamer@kshitija23-dreamer:~/InternshipTask$ ./a.out
welcome To The Birthday List Mangement System!!
we have the records of 5 friends 
The list of the names we have is as follow:
.Abhijeet
.Bhushan
.Priya
.Sakshi
.Maitreyi
From the above list choose name and then
enter the initial letter of their name to see the birthday details of your friend.
NOW!!! enter the initial letter of the name you have choose:Z

please enter proper initial letter, the letter you have entered is not from our list!!!
