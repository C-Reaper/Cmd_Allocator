#define ALLOCATOR_MALLOC

#if defined __linux__
#include "/home/codeleaded/System/Static/Library/Allocator.h"
#elif defined _WINE
#include "/home/codeleaded/System/Static/Library/Allocator.h"
#elif defined _WIN32
#include "F:/home/codeleaded/System/Static/Library/Allocator.h"
#endif

int main(){
	char buffer[4096];

	Allocator ac = Allocator_Make(buffer,sizeof(buffer),NULL);
	//Allocator ac = Allocator_New(4096);
	
	void* b1 = Allocator_BAlloc(&ac,20);
	memcpy(b1,"Hello World1",13);

	void* b2 = Allocator_BAlloc(&ac,20);
	memcpy(b2,"Hello World2",13);

	Allocator_Print(&ac);

	Allocator_BFree(&ac,b2);
	Allocator_BFree(&ac,b1);
	
	for(int i = 0;i<100;i++){
		void* b1 = Allocator_BAlloc(&ac,rand() % 20 + 20);
		memcpy(b1,"Hello World1",13);
		
		//Allocator_BFree(&ac,b1);
		//Allocator_Print(&ac);
	}

	Allocator_Print(&ac);
	Allocator_Free(&ac);

	/*
	alloc_init(4096);

	void* b1 = malloc(20);
	memcpy(b1,"Hello World1",13);

	void* b2 = malloc(20);
	memcpy(b2,"Hello World2",13);

	alloc_print();

	alloc_free();
	*/
    return 0;
}