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
    // address mapping
    int address[3]={4,20,4};
    int hit=0;
    int miss=0;
    for(int i=0;i<3;i++){
    int block_number=address[i]/4;//memory block 
    int index=block_number%4;
    unsigned int tag=block_number/4;
    printf("Requested address:%d\n",address[i]);
    printf("Block number:%d\n",block_number);
    printf("Index:%d\n",index);
    printf("Tag:%d\n",tag);

    if(cache[index].valid==1 && cache[index].tag==tag){
        hit+=1;
        printf("Cache hit for address %d\n",address[i]);
    }else{
        miss+=1;
        printf("Cache miss for address %d\n",address[i]);
        cache[index].valid=1;
        cache[index].tag=tag;
    }
    }
    printf("hits= %d",hit);
    printf("miss=%d",miss);
return 0;
}
