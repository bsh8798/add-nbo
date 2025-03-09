#include "getNum.h"

uint32_t getNum(FILE *fp) {
	uint32_t data[1];
        size_t count = fread(data, sizeof(uint32_t), 1, fp);
        return ntohl(data[0]);
}
