#include <jni.h>
#include <android/log.h>
#include "libs/KittyMemory/MemoryPatch.h"
#include <libs/Substrate/CydiaSubstrate.h>
#include <memory.h>
#include <dlfcn.h>
#include <cstdio>
#include <cstdlib>
#import "include/Utils.h"

#define  LOG_TAG    "JMT_REPUBLIC"

#define  LOGE(...)  __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#define  LOGW(...)  __android_log_print(ANDROID_LOG_WARN,LOG_TAG,__VA_ARGS__)
#define  LOGD(...)  __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG,__VA_ARGS__)
#define  LOGI(...)  __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)

//Struct for patches
struct My_Patches {

	//Declare here your patches
    MemoryPatch BraveBurst;
	
} jmt_hex_patch;

//Example HOOK - 1
//pointer to real method
int (*old_WarehouseCapacity)(void *thiz);
//new hand made method that will replace original
int (new_WarehouseCapacity)(void *thiz) {
	return 9999;
}

__attribute__((constructor))
void libhook_main() {

    while(libBase == 0) { 
    	LOGI("Got the LIB");
        libBase = get_libBase(libName); 
        sleep(1); 
    }   
	
	//KittyMemory patch example.
	//MemoryPatch(libName,offset,hex code,size);
	jmt_hex_patch.BraveBurst = MemoryPatch(libName, 0x00E2660C, "\x01\x20\x70\x47", 4);	//mov r0, #1 	bx  lr
	if(jmt_hex_patch.BraveBurst.Modify() == 1){
		LOGI("Patch Applied!");
	}
	
	//Usual Hook example.
	//MSHookFunction((void *)getRealOffset(offset),(void *)new_method_you_made,(void **) &old_method_you_want_to_replace));
	MSHookFunction((void *)getRealOffset(0x009836B8), (void *)new_WarehouseCapacity, (void **) &old_WarehouseCapacity);
	LOGI("Hook Done!");
}
