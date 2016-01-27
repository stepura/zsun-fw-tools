#include <unistd.h>
#include <sys/reboot.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int retval = reboot(RB_AUTOBOOT);
	if(retval != 0) perror("reboot failed");
	return retval;
}
