#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
 * description - program opens a file
 * and reads from it
 * and prints it
 */
/**
 * read_textfile - function reads from
 * file and prints given letters
 *
 * @filename: first parameter
 * @letters: second parameter
 *
 * Return: 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;

	ssize_t o_file;

	ssize_t r_file;

	ssize_t w_file;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	o_file = open(filename, O_RDONLY);
	r_file = read(o_file, buf, letters);
	w_file = write(STDOUT_FILENO, buf, r_file);
	if (o_file == -1)
	{
		free(buf);
		return (0);
	}
	else if (r_file == -1)
	{
		free(buf);
		return (0);
	}
	else if (w_file == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(o_file);
	return (w_file);
}
