#include <rtthread.h>
#include <finsh.h>

int example(int argc, char** argv)
{
	rt_kprintf(¡±Hi, this is an example package for rt-thread!\n");
	return 0;
}
MSH_CMD_EXPORT(example, example command);
