/*cache size=16;
 block size=4;
 total no of blocks=4;
 each block contains one memory block;
 each memory block contains 4 bytes addressable locations;
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct cache_line{
    int valid;
    unsigned int tag;
};
struct cache_line cache[4]; //I haved created an array representing the the 4 blocks of cache
int main(){
    for(int i=0;i<4;i++){
        cache[i].valid=0;
        cache[i].tag=0;
    }
    // address calculation
    int address=20;
    int block_number=address/4;
    int index=block_number%4;
    unsigned int tag=block_number/4;
    printf("Requested address:%d\n",address);
    printf("Block number:%d\n",block_number);
    printf("Index:%d\n",index);
    printf("Tag:%d\n",tag);
return 0;
}
