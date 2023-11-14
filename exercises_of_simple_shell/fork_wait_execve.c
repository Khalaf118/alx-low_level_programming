#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - fork + wait + execve
 *
 * Return: Always 0.
 */
int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};
	int status;
	pid_t pid;
	int i;

	for (i = 0; i < 5; i++)
	{
		pid = fork();
		if (pid == -1)
			return (-1);
		else if (pid == 0)
			execve(argv[0], argv, NULL);
		/*wait(&status);*/
	}
	return (0);
}
