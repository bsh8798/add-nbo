#include "getNum.h"

int main(int argc, char *argv[]) {
	if(argc < 1) {
		printf("least one file is needed");
		return 0;
	}

	uint32_t sum = 0;
	for(int i = 1; i < argc; i++) {
		FILE *fp;
		fp = fopen(argv[i], "r");
		if(fp != NULL) {
			uint32_t num = getNum(fp);
			printf("%d(0x%04x)", num, num);
			if(i < argc - 1)
				printf(" + ");
			sum += num;
		}
	}
	printf(" = %d(0x%04x)", sum, sum);
}
