#include<stdio.h>
//#include<string.h>
#include<math.h>

char char_list[95];
char list_table[95][95];

void print(){
    for(int i=0;i<95;i++){
        for(int j=0;j<95;j++){
            printf("%c ",list_table[i][j]);
        }
        printf("\n");
    }
}

void Insert_into_tables(){
    
    int i,j=0,k=0;
    char_list[0]=' ';
    char_list[1]='!';
    char_list[2]='"';
    char_list[3]='#';
    char_list[4]='$';
    char_list[5]='%';
    char_list[6]='&';
    char_list[7]='\'';
    char_list[8]='(';
    char_list[9]=')';
    char_list[10]='*';
    char_list[11]='+';
    
    char_list[12]=',';
    char_list[13]='-';
    char_list[14]='.';
    char_list[15]='/';
    
    char_list[16]='0';
    char_list[17]='1';
    char_list[18]='2';
    char_list[19]='3';
    char_list[20]='4';
    char_list[21]='5';
    char_list[22]='6';
    
    char_list[23]='7';
    char_list[24]='8';
    char_list[25]='9';
    
    
    char_list[26]=':';
    char_list[27]=';';
    char_list[28]='<';
    char_list[29]='=';
    char_list[30]='>';
    char_list[31]='?';
    char_list[32]='@';
    
    char_list[33]='A';
    char_list[34]='B';
    char_list[35]='C';
    char_list[36]='D';
    char_list[37]='E';
    char_list[38]='F';
    char_list[39]='G';
    char_list[40]='H';
    char_list[41]='I';
    char_list[42]='J';
    char_list[43]='K';
    char_list[44]='L';
    char_list[45]='M';
    char_list[46]='N';
    char_list[47]='O';
    char_list[48]='P';
    char_list[49]='Q';
    char_list[50]='R';
    char_list[51]='S';
    
    char_list[52]='T';
    char_list[53]='U';
    char_list[54]='V';
    char_list[55]='W';
    char_list[56]='X';
    char_list[57]='Y';
    char_list[58]='Z';
    
    
    char_list[59]='[';
    char_list[60]='\\';
    char_list[61]=']';
    char_list[62]='^';
    char_list[63]='_';
    char_list[64]='`';
    char_list[65]='a';
    char_list[66]='b';
    char_list[67]='c';
    char_list[68]='d';
    char_list[69]='e';
    char_list[70]='f';
    
    char_list[71]='g';
    char_list[72]='h';
    char_list[73]='i';
    char_list[74]='j';
    char_list[75]='k';
    char_list[76]='l';
    char_list[77]='m';
    char_list[78]='n';
    char_list[79]='o';
    char_list[80]='p';
    
    char_list[81]='q';
    char_list[82]='r';
    char_list[83]='s';
    char_list[84]='t';
    char_list[85]='u';
    char_list[86]='v';
    char_list[87]='w';
    char_list[88]='x';
    char_list[89]='y';
    char_list[90]='z';
    
    char_list[91]='{';
    char_list[92]='|';
    char_list[93]='}';
    char_list[94]='~';
    
    for(i=0;i<95;i++){
        k=i;
        for(j=0;j<95;j++){
            list_table[i][j]=char_list[k++];
            if(k>=95)
            k=0;
        }
    }
    
    
  //  print();
    
}

int Find_length_of_string(char text[]){
    int i =0;
    for(i=0;text[i]!='\0';i++);
    return i;
}

int Find_position(char n1){
	if(n1==' ')
	return 0;
    for(int i=0;i<=95;i++){
        if(char_list[i] == n1)
        return i;
    }
    return -1;
}

char Encode_given_data(char n2,char n1){
    
    
   /* printf("inital %c  ",n1);
    printf("inital %c\n",n2);*/
    
    
    int p1 = Find_position(n1);
    int p2 = Find_position(n2);
    
  /*  printf("%d %c  ",p1,n1);
    printf("%d %c \n",p2,n2);*/
    //if(p1!=-1 & p2!=-1 )
    return list_table[p1][p2];
}

int Search_into_matrix(char n1,char n2){
	
	int p1 = Find_position(n1);
    for(int col=0;col<95;col++){
        if(list_table[p1][col] == n2)
        return col;
    }
    return -1;
}

char Decode_given_date(char n2,char n1){
    
    int p = Search_into_matrix(n1,n2);
    return char_list[p];
}

void end_code_full_data(char text[],char passcode[]){
    
    int k=0;
    
    int l1 = Find_length_of_string(text);
    int l2 = Find_length_of_string(passcode);
    
    //printf("%d %d\n",l1,l2);
    
    for(int i=0;i<(l1-1);i++){
    //	printf("k = %d\n",k);
    	
        printf("%c",Encode_given_data(text[i],passcode[k++]));
        if(k>=(l2-1))
        k=0;
    }
}

void Decode_all_string(char text[],char passcode[]){
	 int k=0;
    
    int l1 = Find_length_of_string(text);
    int l2 = Find_length_of_string(passcode);
    
    for(int i=0;i<(l1-1);i++){

        printf("%c",Decode_given_date(text[i],passcode[k++]));
        if(k>=(l2-1))
        k=0;
    }
    
}

int main(){
    
    Insert_into_tables();
    
    char iter = 'a';
    
    char passcode[160];
    
    char text[160];
    
    while(iter!='Q' ||iter!='q'){
        
        printf("Available options:\n");
        
        printf("[e] Encode\n");
        
        printf("[d] Decode\n");
        
        printf("[r] Read file\n");
        
        printf("[q] Quit\n");
        
        
        
        printf("Please enter your choice: ");
        fflush(stdin);
        scanf("%c",&iter);
        
        if(iter == 'E' || iter == 'e'){
            
            printf("Enter the original message:\n");

            fflush(stdin);
            fgets(text, 100, stdin);
            
            printf("Enter the passcode:");
             fgets(passcode, 100, stdin);

             printf("%s\n%s",text,passcode);

           
            end_code_full_data(text,passcode);
            
        }
        
        if(iter == 'D' || iter == 'd'){
            
            printf("\nEnter the encoded message: ");
            
            fflush(stdin);
            fgets(text, 100, stdin);
            
            printf("\nEnter the passcode: ");
            
            fgets(passcode, 100, stdin);

             printf("%s\n%s",text,passcode);  
			 
			 Decode_all_string(text,passcode);     
            
        }
        
        if(iter == 'R' || iter == 'r'){
            
            printf("\nEnter name of encoded file: ");
            
            printf("\nEnter the passcode:\n");
            
        }
        
        if(iter == 'Q' || iter == 'q')
        {
            return 0;
        }
        printf("\n");
    }
    
    
    return 0;
}
