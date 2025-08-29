
#include <unistd.h>

void putc(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	int in_word = 0;
	int word_ind = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				putc(argv[1][i]); // ktb space wla tab ila kaynin
				in_word = 0; // reset when leaving a word
			}
			else
			{
				if (!in_word) // new word starts
				{
					in_word = 1;
					word_ind++;
				}

				if (word_ind % 2 == 1) // odd word → lowercase
				{
					if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
						putc(argv[1][i] + 32);
					else
						putc(argv[1][i]);
				}
				else // even word → uppercase
				{
					if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
						putc(argv[1][i] - 32);
					else
						putc(argv[1][i]);
				}
			}
			i++;
		}
	}
	putc('\n');
	return (0);
}
