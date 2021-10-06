#include <stdio.h>	

int main() {
	char bfType[3] = "BM";
	char bfReserved1[] = "0000";
	char bfReserved2[] = "0000";
	int bfSize, bfOffBits;
	scanf_s("%i", &bfSize);
	scanf_s("%i", &bfOffBits);

	printf("%s%X%s%s%X", bfType, bfSize, bfReserved1, bfReserved2, bfOffBits);

	/* if (bfReserved1 == 0 && bfReserved2 == 0) {
		printf("%s%X%X000%X000%X", bfType, bfSize, bfReserved1, bfReserved2, bfOffBits);
	}
	else {
		if (bfReserved1 == 0) {
			printf("%s%X%X000%X%X", bfType, bfSize, bfReserved1, bfReserved2, bfOffBits);
		}
		else {
			printf("%s%X%X%X000%X", bfType, bfSize, bfReserved1, bfReserved2, bfOffBits);
		}
	} */

	return 0;
}
