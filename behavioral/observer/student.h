#ifndef STUDENT_H_
#define STUDENT_H_

#include "course_website.h"
#include "observer.h"
#include <string>

class Student : public Observer<CourseWebsite> {
public:
  Student(const std::string name);
  void Update(const CourseWebsite &obserable) override;

private:
  std::string name_;
};

#endif
