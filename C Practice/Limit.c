#include<stdio.h>
#include<limits.h>
#include<stdbool.h>
int main(){
	
	//Character variable
    printf("\33[1m\33[4m\33[32mCharacter Variable\33[0m\n");
	printf("Character Size: %d bits or %d bytes\n",CHAR_BIT,CHAR_BIT/8);
	printf("Character Max: %d\n",CHAR_MAX);
	printf("Character Min: %d\n",CHAR_MIN);
	printf("Unsigned Character Max: %d\n",UCHAR_MAX);
	printf("Unsigned Character Min: %d\n", 0);
	printf("Signed Character Max: %d\n",SCHAR_MAX);
	printf("Signed Character Min: %d\n",SCHAR_MIN);
	printf("\33[31m\33[1m#Note: When we Take \'char\' Variable By Default It Always Signed...\33[0m\v\v");
	
	//Integer Variable
	printf("\33[1m\33[4m\33[32mInteger Variable\33[0m\n");
	int a;
	printf("Integer Size: %d bits or %d bytes\n",8*sizeof(a),sizeof(a));
	printf("Integer Max: %d\n",INT_MAX);
	printf("Integer Min: %d\n",INT_MIN);
	printf("Unsigned Integer Max: %u\n",(unsigned int)UINT_MAX);
	printf("Unsigned Integer Min: %d\n",0);
	printf("Signed Integer Max: %d\n",(signed int)INT_MAX);
	printf("Signed Integer Min: %d\n\n",(signed int)INT_MIN);
	
	// short,long,double,boolean,float
	printf("\33[31m\33[1m# Short,Long,Double,Boolean & Float Size:\33[0m\v");
	bool b; short s; long l; double d; float f;
	printf("Boolean Size: %d bits or %d bytes.\n",8*sizeof(b),sizeof(b));
	printf("Short Integer Size: %d bits or %d bytes.\n",8*sizeof(s),sizeof(s));
	printf("Long Integer Size: %d bits or %d bytes.\n",8*sizeof(l),sizeof(l));
	printf("Double Integer Size: %d bits or %d bytes.\n",8*sizeof(d),sizeof(d));
	printf("Float Size: %d bits or %d byte.\n",8*sizeof(f),sizeof(f));
	
	
	
	
	
	
	
	
	
	
	
	
	
	
/*	printf("CHAR_Byte    :   %d\n", CHAR_Byte);
    printf("CHAR_MAX    :   %d\n", CHAR_MAX);
    printf("CHAR_MIN    :   %d\n", CHAR_MIN);
    printf("INT_MAX     :   %d\n", INT_MAX);
    printf("INT_MIN     :   %d\n", INT_MIN);
    printf("LONG_MAX    :   %ld\n", (long) LONG_MAX);
    printf("LONG_MIN    :   %ld\n", (long) LONG_MIN);
    printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
    printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
    printf("SHRT_MAX    :   %d\n", SHRT_MAX);
    printf("SHRT_MIN    :   %d\n", SHRT_MIN);
    printf("UNSIGNED CHAR_MAX   :   %d\n", UCHAR_MAX);
    printf("UINT_MAX    :   %u\n", (unsigned int) UINT_MAX);
    printf("ULONG_MAX   :   %lu\n", (unsigned long) ULONG_MAX);
    printf("USHRT_MAX   :   %d\n", (unsigned short) USHRT_MAX);*/
	
return 0;	
}
