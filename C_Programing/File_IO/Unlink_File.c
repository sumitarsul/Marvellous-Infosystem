#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int ret = 0;

    ret = unlink("Demo.text");

    if(ret == -1)
    {
        printf("unabel to delet the file\n");
        return -1;
    }
    else
    {
        printf("File gets Succesfully eleted\n");
    }

    return 0;
}