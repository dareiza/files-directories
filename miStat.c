#include <stddef.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    printf("File Data %s \n", argv[1]);
    struct stat buf;
    stat(argv[1], &buf);

    printf("File Protection: %d \n",buf.st_mode);
    printf("File Size: %jd \n",buf.st_size);
    printf("Block number: %jd \n",buf.st_blocks);
    printf("Block Size: %jd \n",buf.st_blksize);
    printf("links number: %jd \n",buf.st_nlink);

    return 0;
}