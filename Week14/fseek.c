// fseek.c
#include <stdio.h>

int main(void) {
	int file_size = 0;
	FILE* p_file1 = fopen("fprintf.c", "rt");
	FILE* p_file2 = fopen("fscanf.c", "rt");
	FILE* p_file3 = fopen("fgets.c", "rt");
	FILE* p_file4 = fopen("fwrite.c", "rt");
	FILE* p_file5 = fopen("fread.c", "rt");
	FILE* p_file5 = fopen("fseek.c", "rt");
	char* winner[10]; 

	if (NULL != p_file1) {
		fseek(p_file2, 0, SEEK_END); // 파일의 끝으로 이동
		if (file_size < ftell(p_file2)) { // p_file1의 현재 위치(파일 크기)를 얻음	
			file_size = ftell(p_file2);
			winner = "fscanf.c";
		}
		fclose(p_file2);
	}
	return 0;
}	