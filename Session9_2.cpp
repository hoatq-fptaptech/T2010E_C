#include <stdio.h>
#include <string.h>
int main(){
	char str1[200],str2[200];
	printf("Nhap chuoi s1:");
	scanf("%s",str1);// gets(str); hello
	printf("Nhap chuoi s2: ");
	scanf("%s",str2); // world
	printf("Chuoi vua nhap str1: %s\n",str1); // puts(str);
	printf("Chuoi vua nhap str2: %s\n",str2);
	// noi chuoi 
	strcat(str1,str2);// <=> str1= str1+str2
	printf("str1: %s\n",str1); // helloworld
	printf("str2: %s\n",str2); // world
	
	strcat(str2,str1);// <=> str2=str2+str1
	printf("str1: %s\n",str1); // helloworld
	printf("str2: %s\n",str2);	// worldhelloworld
	printf("----\n"); 
	strcat(str1,str2);// str1=str1+str2;=>helloworldworldhelloworld
	//strcat(str1,str1);//str1= str1+str1;helloworldworldhelloworldhelloworldworldhelloworld
	printf("str1: %s\n",str1); // helloworldworldhelloworldhelloworldworldhelloworld
	printf("str2: %s\n",str2);
	int x = strcmp(str1,str2);
	printf("So sanh 2 chuoi: %d\n",x);
	int kc = strchr(str1,'l') - str1;
	printf("Vi tri cua ky tu l: %d\n",kc);
	char str3[200];
	strcpy(str3,str1);//<==> str3= str1;
	printf("S3: %s\n",str3);
	int sl = strlen(str3);
	printf("Do dai cua chuoi s3: %d\n",sl);
}
