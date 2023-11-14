#include <stdio.h>
#include <unistd.h>

/**
 * main - PID, PPID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid();
    printf("%u\n", my_pid);
    printf("%u\n", getppid());
    return (0);
}
