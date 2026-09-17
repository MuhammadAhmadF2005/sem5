#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int
main(int argc, char *argv[])
{
    printf("hello world (pid:%d)\n", (int) getpid());

    int rc = fork();
    if(rc==0){
	    printf("hello world 1 (pid:%d)\n", (int) getpid());
    } else {
	    sleep(1);
	    printf("hello world 2 (pid:%d)\n", (int) getpid());
    }


    int rc2 = fork();
    if(rc2==0){
	    printf("hello world 11 (pid:%d)\n", (int) getpid());
    } else {
	    sleep(1);
	    printf("hello world 22 (pid:%d)\n", (int) getpid());
    }

    return 0;
}
