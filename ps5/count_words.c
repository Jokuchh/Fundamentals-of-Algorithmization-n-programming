#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

char tolo(char c){
    if(c>= 'A' && c<= 'Z'){
        return c - 'A' + 'a';
    }else{
        return c;
    }
}

int main(int a, char* b[]){
        FILE *fp = fopen(b[1], "r");
        if (fp == NULL){
                return -1;
                }


char i;
int g = 0;
int smth = 0;
char mass[6];
char mass2[] = "ananas";
    while ((i=fgetc(fp))!=EOF){  
        mass[g%6]=tolo(i);       
        g++;

    bool equal_str=true;
     
    for (int kokonat = 0; kokonat < 6;kokonat++){
        if(mass[(g + kokonat)%6] != mass2[kokonat]){
                equal_str = false;
        break;
        }
    }
        if(equal_str == true){
            smth++;
        }
    }
        fclose(fp);

        fp = fopen(b[1], "w");

        while(smth>10){
                int g1 = smth%10;
                smth = smth / 10;
                smth = smth +'0';
                g1 = g1 +'0';
                fputc(smth,fp);
                fputc(g1, fp);
                }
                smth = smth +'0';
                fputc(smth, fp);
        fclose(fp);

    return 0;
}










void bytes_to_blocks(const int cols, const int offset, bool blocks[offset*8][cols], const int rows, bool bytes[rows][8]){
    int kokonat=0;
    int dolmanitik=0;
        while(dolmanitik<offset){
            for(int isi = 0; isi < 8; isi++){
                for(int tet = 0;tet<cols;tet += 1){
                    if((tet+(cols * dolmanitik))<rows){
                    bytes[tet+(cols * dolmanitik)][isi]=blocks[isi+(dolmanitik * 8)][tet];
                }
            }
        }
    dolmanitik++;   
    }
    kokonat++;
    
    while(dolmanitik<offset){
            int i=0;
            while(i <8 ){int tet = 0;
            while(tet<cols){
                if((tet+(cols*dolmanitik))<rows)
                    blocks[i+(dolmanitik*8)][tet]=bytes[tet+(cols*dolmanitik)][i];
                else
                    blocks[i+(dolmanitik*8)][tet]=false;
                tet+=1;
                }
                i++;
            }
            dolmanitik++; 
        }
        kokonat++;}