#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/



int main(){
	int fd = open("test.txt", O_RDWR | O_CREAT , 0600);

	write(fd, "salah\n", 6);

	int fd2 = open("in.txt", O_RDWR | O_CREAT, 0600);
	sleep(30);
	
	write(fd2, "koulal\n", 7);
	

	return (0);
}
