
#include <sys/mman.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

unsigned char conversion_table[] = {
/* ebcdic_to_ascii.inc contains the conversion table
   from EBCDIC to ASCII. ascii_to_ebcdic.inc is the inverse. */
#  include "ebcdic_to_ascii.inc"
};

void
convert (unsigned char *data, size_t size)
{
  /* TODO: Implement a function that converts the characters in the
           character array 'data' of length 'size' following the conversion
           specified in 'conversion_table' and print it to stdout */
}

int
main (int argc, char *argv[])
{
  /* validate correct command line parameters */
  if (argc != 2)
    {
      fprintf(stderr, "usage: %s <filename>\n", argv[0]);
      exit(EXIT_FAILURE);
    }

  unsigned char *data = NULL;
  /* TODO: open the input file and read it into an unsigned char* buffer.
           You can either allocate a buffer using 'malloc' und use
           'fopen'/'fread' to gather the input data, or you can use 'mmap'
           to have the operating system manage all buffering and present
           your program with a contiguous character array of the input file.

           'mmap' is slightly more complicated to use correctly, but generally
           more resource efficient. */

  /* call the conversion routine */
  convert(data, finfo.st_size);

  /* unmap and close the input file */
  /* TODO: release the resources of the opened input file. you can either do
           this using 'free' if you used 'malloc' above, or 'munmap' if you
           used 'mmap'. */

  /* return 0 to indicate successful completion */
  return 0;
}
