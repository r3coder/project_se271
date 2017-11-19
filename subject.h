#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#include <string>
#include <cstdlib>

class subject{
private:
  char *title;
  char *prof;
  int *timetable;
  int credit;
  double workload;
  int attend_limit;
  int attend_hope;
  int attend_people;
  int category;
  int score;
public:
  subject();
  ~subject();
};

#endif
