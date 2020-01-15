#include<stdio.h>
#include<stdint.h>

int file_write(void)
{
	FILE *fp = NULL;
	
	fp = fopen("C:\\Users\\lenovo\\Desktop\\file_save\\file_write.csv","w+");

    int i = 10;
    while(i--)
    {
        for(uint8_t i = 0; i < 10; i++)
        {
            fprintf(fp,"%d,",i);//','为csv文件换列符
        }
        fprintf(fp,"\n");//'\n'为csv文件换行符
    }
    
	return(fclose(fp));
} 

int file_read(void)
{
    FILE *fp = NULL;
    char read_buffer[255] = {0};

    fp = fopen("C:\\Users\\lenovo\\Desktop\\file_save\\file_wr.txt","w");
    fprintf(fp,"learning how to read file\n");//write string
    fclose(fp);
    
    fp = fopen("C:\\Users\\lenovo\\Desktop\\file_save\\file_wr.txt","r");
    fgets(read_buffer,255,fp);
    printf("%s\n",read_buffer);

    return(fclose(fp));
}

int main(void)
{
    if(file_write() == EOF)
    {
        printf("Error: An error occurred while closing the file\n");
    }

    file_read();
}