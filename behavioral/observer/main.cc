#include "course_website.h"
#include "student.h"

int main() {
  CourseWebsite course_website;

  Student olivia("Olivia");
  Student liam("Liam");
  course_website.AddObserver(olivia);
  course_website.AddObserver(liam);

  course_website.PutAnnoucement("New assignment is released!");
  return 0;
}
