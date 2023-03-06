/*String basic{ Number of vowels, consonants, words, digits and other }*/

#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[100],ch;
    int i,vowel,consonant,digit,word,other;

    printf("Enter a string: ");
    
    gets(str);

    i=vowel=consonant=digit=word=other=0;

    while((ch=str[i])!='\0')
    {  
         if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
            vowel++;

        else if((ch>='a' &&  ch<='z') || (ch>='A' &&  ch<='Z'))
            consonant++;

        else if(ch>='0' && ch<='9')
            digit++;

        else if(ch==' ')
            word++;

        else
            other++;

        i++;
    }
        word++;  // in condition we considered <space> as word but a space comes after a word so we add a extra word.

    printf("number of vowels: %d\n",vowel);
    printf("number of consonants: %d\n",consonant);
    printf("number of digit: %d\n",digit);
    printf("number of words: %d\n",word);
    printf("number of others: %d\n",other);

    getch();

}