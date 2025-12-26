#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>//to use 'sleep' function

int main()
{
    int hour, min, sec;

    printf("Enter 'Hour': ");
    scanf("%d", &hour);
    printf("Enter 'Minute': ");
    scanf("%d", &min);
    printf("Enter 'Second': ");
    scanf("%d", &sec);

    int h=0, m=0, s=0;

    printf("*************STOPWATCH*************\n");
    printf("Developed By : NITUN KRISHNA BISWAS\n");
    printf("\n");

    while(1)
    {
        printf("\r%02d:%02d:%02d", h, m, s);
        fflush(stdout);
        
        if(h==hour && m==min && s==sec)
        {
            printf("\n\n***********TIME COMPLETED***********\n");
            break;
        }
        
        s++;
        sleep(1);//The next line will be executed after 1 second
        if(s==60)
        {
            m++;
            /*
            As, 60 Seconds = 1 Minute
            So, when 60 seconds will pass then the variable 'm' will increase
            */
            s=0;//After increasing the 'm' the 's' will again start counting from 0
        }

        if(m==60)
        {
            h++;
            /*
            As, 60 Minutes = 1 Hour
            So, when 60 minutes will pass then the variable 'h' will increase
            */
            m=0;//After increasing the 'h' the 'm' will again start counting from 0
        }
    }
    return 0;
}
