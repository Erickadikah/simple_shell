#include "shell.h"
/**
  * main - entry point of the program
  * @ac: argument counter
  * @av: argument vector
  * @envp: array of strings.
  * Return: 0
  */
int main(int ac __attribute__((unused)), char *av[], char *envp[])
{
	char *buffer = NULL;
	size_t bufsize = 0;
	int status;
	pid_t child_pid;

	signal(SIGINT, SIG_IGN);
	while (1)
	{
		if (isatty(STDIN_FILENO))
			printf("~$ ");
		if (getline(&buffer, &bufsize, stdin) == -1)
			break;
		if (buffer == NULL)
			exit(0);
		av = parse_input_string(buffer);
		if (!av[0])
		{
			free(av);
			continue;
		}
		if (_strcmp(av[0], "env") == 0)
		{
			print_environ(), free(av);
			continue;
		}
