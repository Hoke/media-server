#ifndef _hls_file_h_
#define _hls_file_h_

#include "time64.h"
#include "hls-block.h"

struct hls_file_t
{
	struct list_head head;

	long refcnt;
	int seq; // filename
	int duration; // ms
	time64_t tcreate; // file create time
    time64_t pts; // first pts
};

struct hls_file_t* hls_file_open();
int hls_file_close(struct hls_file_t* file);
int hls_file_write(struct hls_file_t* file, const void* packet, int bytes);

#endif /* !_hls_file_h_ */
