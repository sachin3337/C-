#include<stdio.h>
//different declarations of string
int main()
{

    //string is char array having last element as '\0' =>end of string 
    char str[6] ={'A','B', 'C', 'D' , 'E' , '\0'};// stack section// string
    printf("\n  String str=> "); 
    printf("%s", str );//ABCDE
    printf("\nsize of string str=%d", sizeof(str)); //6 * 1=> 6 
    char str1[] = {'A','B', 'C', 'D' , 'E' , '\0'}; // string // stack section
    //             0    1    2   3  4
    char str2[5]= {'A','B', 'C'        };// stack section //string //partial initialization => when we give partial initilization
    //for char array it creates the string
    printf("\n%s", str1 );//ABCDE
    printf("\nsize of string str1=%d", sizeof(str1)); //6 * 1=> 6 
    //Note:- when we pass the string to the sizeof op it generates the result includeing 
    //'\0'=> end of string.

    printf("\n str2=%s", str2); //ABC
    printf("\nsize of string str2=%d", sizeof(str2)); //6 * 1=> 6 
    char str3[6]= "ABCD";// stack section //string 
    printf("\n str3=%s", str3); //ABC
    printf("\nsize of string str3=%d", sizeof(str3)); //6 * 1=> 6 
  
 
}