#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void);
void ft_putchar(char c);

int main() {
    ft_print_comb2();

    return 0;
}

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_print_comb2(void){
	char i='0', j='0', k, n;
	while(i<='9'){
		j = '0';
		while(j<='9'){
		k = i;
		n = j + 1;
			while(k<='9'){
				while(n<='9'){
					ft_putchar(i);
					ft_putchar(j);
					ft_putchar(' ');
					ft_putchar(k);
					ft_putchar(n);
					ft_putchar('\n');
					n++;
				}
				n='0';
				k++;
			}
			j++;
		}
		i++;
	}
	
}



