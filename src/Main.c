#include "/home/codeleaded/System/Static/Library/Allocator.h"

int main(){

	Allocator ac = Allocator_New(4096);

	void* b1 = Allocator_BlockAlloc(&ac,20);
	memset(b1,0,20);
	memcpy(b1,"Hello World1",13);

	void* b2 = Allocator_BlockAlloc(&ac,20);
	memset(b2,0,20);
	memcpy(b2,"Hello World2",13);

	Allocator_Print(&ac);

	Allocator_BlockFree(&ac,b2);
	Allocator_BlockFree(&ac,b1);
	
	Allocator_Print(&ac);

	Allocator_Free(&ac);

    return 0;
}