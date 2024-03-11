#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

int
main(int argc, char **argv)
{
  typedef struct rtcdate Srtcdate;
  // struct rtcdate
  Srtcdate a; 

  if(argc > 1){
    printf(2, "usage: date \n");
    exit();
  }
  date(&a);
  printf(1, "%d/%d/%d  %d:%d:%d\n", a.month, a.day, a.year, a.hour, a.minute, a.second);
  exit();
}
