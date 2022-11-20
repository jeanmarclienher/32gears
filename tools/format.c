/*
 *                          cod5.com computer
 *
 *                      30 march MMXXII PUBLIC DOMAIN
 *           The author disclaims copyright to this source code.
 *
 *
 */

#include "../common/fat32.h"

int format_main (int argc, char *argv[])
{
	char b[512];
	char *f;
	char *n;
	int r;
	int dev;
	if (argc < 2) {
		printf("USAGE: %s  disk\n", argv[0]);
		exit(-1);
	}
	f = argv[1];
	if (argc > 2) {
		n = argv[2];
	} else {
		n = "No Name";
	}
	//fat32_read_block(f, b, 0);	
	//fat32_write_block(f, b, 1);
	
	dev = k_open(f, O_RDWR | O_CREAT);	
	r = fat32_format(dev, 0, n);
	k_close(dev);
}


