/* $Id$ */

void usage(void);

int
main(int argc, char *argv[])
{
	if (*++argv == NULL)
		utoc("-");
	while (*argv != NULL)
		utoc(*argv++);
	exit(0);
}



void
usage(void)
{
	extern char *__progname;

	(void)fprintf(stderr, "usage: %s [file ...]\n");
	exit(1);
}
