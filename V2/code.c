/*
    Minor changes
    => Added SOUND
        When the given time will be completed then the system will sound 'Time is Up' once
    => Countdown will start reversely
*/


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

    printf("*************STOPWATCH*************\n");
    printf("Developed By : NITUN KRISHNA BISWAS\n");
    printf("\n");

    while(1)
    {
        printf("\r%02d:%02d:%02d", hour, min, sec);
        fflush(stdout);
        
        if(hour==0 && min==0 && sec==0)
        {
            system("say 'Time is up'");
            printf("\n\n***********TIME COMPLETED***********\n");
            break;
        }
        
        sec--;
        sleep(1);//The next line will be executed after 1 second
        if(sec<0)
        {
            sec=59;//Count of second will start from 59
            min--;//Time will decrease by 1 minute
        }
        if(sec<0)
        {
            min=59;//Count of minute will start from 59
            hour--;//Time will decrease by 1 hour
        }
        if(hour<0)
            break;
    }
    return 0;
}
