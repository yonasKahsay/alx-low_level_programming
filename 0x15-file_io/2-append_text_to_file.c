#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
								{
									int length;
									FILE *file;

									if (filename == NULL)
									return (-1);
									file = fopen(filename, "a");
									if (file == NULL)
									return (-1);
									if (text_content != NULL)
									{
									length = strlen(text_content);
									fwrite(text_content,sizeof(char), length, file);
									}
									fclose(file);
									return (1);
									}

