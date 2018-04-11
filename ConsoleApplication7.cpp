// ConsoleApplication7.cpp : 定义控制台应用程序的入口点。
//
/*
* setfmt firstparam: number of strings, other params must be  C++primary type or user defined type(using string)
* ZF_LOGI firstparam: global variable "state", other params must be Parameters(in order) of the function which calls ZF_LOGI
* write_to_file(char*, size_t length, __FUNCTION__); the third parameter indicates the function name
*
*/
#include "iostream"
#include "zf_log.h"
int foo(float a, char b, const S_Temp& pp)
{
	setfmt(3, "float", "char", "S_Temp");
	ZF_LOGI(state, a, b, pp.buff, pp.length, pp.i_int, pp.fff.p, pp.fff.m);
	write_to_file(pp.buff, pp.length, __FUNCTION__);
	const char data[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	ZF_LOGI_MEM(data, sizeof(data), "Lorem ipsum at %p", data);
	setfmt(1, "int");
	ZF_LOGI(state, a + b);
	return (a + b);
}
const int fafa(bool flag, uint32_t integer, char p)
{
	setfmt(3, "bool", "uint32", "char");
	ZF_LOGI(state, flag, integer, p);
	char* ps = "hello world";
	write_to_file(ps, 12, __FUNCTION__);
	setfmt(1, "int");
	ZF_LOGI(state, 10);
	return 10;
}
int main()
{
	log_init();
	fafa(false, 1000, 'c');
	return 0;
}

