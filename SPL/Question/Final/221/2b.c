#include<stdio.h>
int main()
{
    char str1[100] = "Hello";
     char str2[100] = "Bonjour";
     int i, k;
     strncat(str1, "Maria", 2);
     //str1 = HelloMa
     strncpy(str2, "Federick", 3);
     //str2=Fedjour
     i=strlen(str1); // i=7
     for(k=0; str2[k] !='\0'; k++)
        str1[i+k] = str2[k];
        // str1[7] = F str1= HelloMaF
        // str1[8] = e str1= HelloMaFe
        // str1[9] = d str1= HelloMaFed
        // str1[10] = j str1= HelloMaFedj
        // str1[11] = o str1= HelloMaFedjo
        // str1[12] = u str1= HelloMaFedjou
        // str1[13] = r str1= HelloMaFedjour
        //str1 = HelloMaFedjour
     str1[i + k] = '\0';
     puts(str2);
     //print ->  HelloMaFedjour
     printf("\n");
     puts(str1);
     printf("\n");
     strrev(str1);
     puts(str1);
     //print ->  ruojdeFaMolleH
    return 0;
}
