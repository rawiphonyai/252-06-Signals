#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void my_alarm(int sig) {
  for (int i = 0; i < 5; i++)
    printf("Alarm!!! \n");
}

int main(void){
    signal(SIGALRM, my_alarm);
    alarm(3);
    pause(); printf("Done!\n"); 
    exit(0);
}