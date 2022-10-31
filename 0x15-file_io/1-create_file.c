#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*
 * decription - program creates a file
 */
/**
 * create_file - function creates a file
 *
 * @filename: first parameter
 * @text_content: second parameter
 *
 * Return: -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int o_file;

	int w_file;

	int i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
		{
			i++;
		}
	}
	o_file = open(filename, O_CREATE | O_RDWR | O_TRUNC, 0600);
	w_file = write(o_file, text_content, i);
	if (o_file == -1)
	{
		return (-1);
	}
	else if (w_file == -1)
	{
		return (-1);
	}
	close(o_file);
	return (1);
}
