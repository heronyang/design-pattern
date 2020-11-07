#include "course_website.h"
#include <functional>

namespace {
void NotifyObservers(
    std::vector<std::reference_wrapper<Observer<CourseWebsite>>> observers,
    const CourseWebsite &course_website) {
  for (auto observer : observers) {
    observer.get().Update(course_website);
  }
}
} // namespace

void CourseWebsite::AddObserver(Observer<CourseWebsite> &observer) {
  observers_.emplace_back(observer);
}

void CourseWebsite::PutAnnoucement(std::string annoucement) {
  annoucement_ = annoucement;
  NotifyObservers(observers_, *this);
}

std::string CourseWebsite::GetAnnoucement() const { return annoucement_; }
