#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <netinet/in.h>

int main(void){
	
	FILE *one;
	FILE *two;
	uint32_t thousand;
	uint32_t hundred;
	uint32_t result;
	char track[] = "취약점";
	char name[] = "김태휘";

	one = fopen("thousand.bin","rb");
	two = fopen("five-hundred.bin","rb");

	fread(&thousand, sizeof(thousand), 1, one);
	fread(&hundred, sizeof(hundred), 1, two);
	thousand = ntohl(thousand);
	hundred = ntohl(hundred);
	result = thousand + hundred;
	
	printf("[bob10][%s]add-nbo[%s]\n", track, name);
	printf("%d(%#x) + %d(%#x) = %d(%#x)", thousand, thousand, hundred, hundred, result, result);

	fclose(one);
	fclose(two);

	return 0;  }
