#include<stdio.h>
#include<string.h>

void remove_char(char* str, char c) {
    char *pointer = str;	
	char *ketqua = str;
    while (*pointer != 0) // Lap cho den khi het chuoi
	{
        *ketqua = *pointer;
        *pointer++; // Dich chuyen vi tri ky tu len 1
        ketqua += (*ketqua != c); // Neu ke tu tai vi tri khac voi ky tu can thay the thi dich chuyen tiep
    }
    *ketqua = '\0';
}


int main() {
    char str[] = "Ngo Thanh Tung";
    	
	remove_char(str, 'u');
	remove_char(str, 'e');
	remove_char(str, 'o');
	remove_char(str, 'a');
	remove_char(str, 'i');
	
    printf("%s\n", str);
    return 0;
}
