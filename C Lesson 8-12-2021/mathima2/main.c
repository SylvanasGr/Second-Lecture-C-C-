#include <stdio.h>

//Second Lecture of my Master Degree At Unipi !
//The topic we discussed was variables,If - Else, For | While | Do While and some stuff for algorithmic thought.

void myMethod();
int add2numbers(int a, int b);c

int main() {
    /*int grade = 8;
    printf("Value of variable grade=%d\n",grade);
    printf("Unipi!\n");
    printf("Please enter an integer number:");
    int userinput;
    scanf("%d",&userinput);
    printf("You entered:%d",userinput);
    myMethod();
    myMethod();
    myMethod();
    myMethod();*/
    /*int n1,n2;
    printf("Please enter a number:");
    scanf("%d",&n1);
    printf("Please enter another number:");
    scanf("%d",&n2);
    int sum = add2numbers(n1,n2);
    printf("Sum is:%d\n",sum);*/
    /*if(sum>10){
        printf("Sum of two variables is greater than 10");
        return 0;
    }
    printf("Sum of two variables is less than 10 or equal");*/
    /*if(sum>10){
        printf("Sum of two variables is greater than 10");
    } else {
        printf("Sum of two variables is less than 10 or equal");
    }*/
    /*if(sum>10){
        printf("Sum of two variables is greater than 10");
    }
    if(sum<=10){
        printf("Sum of two variables is less than 10 or equal");
    }*/
    /*if(sum>10){
        printf("Sum of two variables is greater than 10");
        return 0;
    }
    if(sum<=10){
        printf("Sum of two variables is less than 10 or equal");
    }*/
    int user_choice;
    printf("Give a number:");
    scanf("%d",&user_choice);
    int counter=1;
    while (counter<=user_choice){
        myMethod();
        counter = counter +1;
    }*/

    /*while (user_choice>0){
        myMethod();
        user_choice = user_choice - 1;
    }*/
    for (int i = 0; i < user_choice; i = i+1) {
        myMethod();
    }
    int j = 0;
    for (;;) {
        j++;
        if(j<10)
            return 0;
    }
    printf("Hi");//unreachable
/*    do {
        myMethod();
        counter = counter +1;
    } while (counter<=user_choice);*/

    return 0;
}

void myMethod(){
    printf("Hello\n");
}

int add2numbers(int a, int b){
    int c = a +b;
    return c;
}




