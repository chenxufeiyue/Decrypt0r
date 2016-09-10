/*
decrypt0r.c
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "firmware_tools.h"

int main(int argc, char const *argv[])
{
	int choice_of_your_life;
	
	system("clear");
	ipswDownloader();
	system("clear");
	swag_logo();
	printf("Choose what you want to do\n");
	printf(" 1) Decrypt Root Filesystem\n");
	printf(" 2) Decrypt Ramdisk\n");
	printf(" 3) Decrypt IMG3 File\n");
	printf(" 4) Decrypt DFU File\n");
	printf(" 5) Decrypt Kernelcache\n");
	printf(" 6) Grab Keybags\n");
	printf(" 7) Patch iBEC/iBSS\n");
	printf(" 8) Save SHSHs blobs\n");
	printf("> ");
	choice_of_your_life = fgetn();

	switch (choice_of_your_life)
	{
		case 1 : rootfs(); break;
		case 2 : Ramdisk(); break;
		case 3 : IMG3(); break;
		case 4 : DFU_file(); break;
		case 5 : kernelcache(); break;
		case 6 : get_keybags(); break;
		case 7 : patcher(); break;
		case 8 : save_blobs(); break;
		default : printf("No option available yet\n"); 
	}
	return 0;	
}
