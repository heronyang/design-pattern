#include "framed_print.h"
#include "laminated_print.h"
#include "photo.h"
#include <iostream>
#include <memory>
#include <system_error>

/**
 * We create a photo print, frame it, then laminate it.
 */
int main() {
  auto photo = std::make_unique<Photo>();
  std::cout << photo->GetDescription() << std::endl;

  auto framed_photo = std::make_unique<FramedPrint>(std::move(photo));
  std::cout << framed_photo->GetDescription() << std::endl;

  auto framed_and_laminated_photo =
      std::make_unique<LaminatedPrint>(std::move(framed_photo));
  std::cout << framed_and_laminated_photo->GetDescription() << std::endl;
  return 0;
}
