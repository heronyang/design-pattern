#ifndef COURSE_WEBSITE_H_
#define COURSE_WEBSITE_H_

#include "observable.h"
#include "observer.h"
#include <functional>
#include <string>
#include <vector>

class CourseWebsite : public Obserable<CourseWebsite> {
public:
  // The caller is responsible for maintaining the life of an observer longer
  // than course website.
  void AddObserver(Observer<CourseWebsite> &observer) override;

  void PutAnnoucement(std::string annoucement);
  std::string GetAnnoucement() const;

private:
  std::string annoucement_;
  std::vector<std::reference_wrapper<Observer<CourseWebsite>>> observers_;
};

#endif
