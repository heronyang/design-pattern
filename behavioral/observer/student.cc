#include "student.h"
#include "course_website.h"
#include <iostream>

Student::Student(const std::string name) { name_ = name; }

void Student::Update(const CourseWebsite &course_website) {
  std::cout << "This is " << name_
            << ". I just received an update from the course website saying: "
            << course_website.GetAnnoucement() << std::endl;
}
