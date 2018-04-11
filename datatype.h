#pragma once
# define MAX_STRING_SIZE 100
# define MAX_STRING_SIZE_ALL 600
# define TYPE_COUNT 1
void write_to_log(char*, ...);
char* getUserDefinedType(char* str);
char* get_type(char* type);
void setfmt(int count, ...);
void write_to_file(char* src, size_t buflen, const char* filename);
void log_init();
struct AA
{
	char p;
	unsigned int m;
};
typedef struct Temp
{
	char* buff;
	int length;
	int i_int;
	AA fff;
	char fmt_size[MAX_STRING_SIZE];
	static char* tostring()
	{
		char* p = " S_TEMP:{buff:%s, length:%d, i_int:%d, fff:{p:%c, m:%d}} ";
		return p;
	}
}S_Temp;

