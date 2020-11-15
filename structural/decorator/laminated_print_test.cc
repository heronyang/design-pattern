#include "laminated_print.h"
#include "photo.h"
#include "gtest/gtest.h"
#include <memory>

TEST(LaminatedPrintTest, GetDescriptionSucceed) {
  std::unique_ptr<Photo> photo = std::make_unique<Photo>();
  LaminatedPrint laminated_photo = LaminatedPrint(std::move(photo));
  EXPECT_EQ("Laminated Photo Print", laminated_photo.GetDescription());
}

TEST(LaminatedPrintTest, GetDecoratorNameSucceed) {
  std::unique_ptr<Photo> photo = std::make_unique<Photo>();
  LaminatedPrint laminated_photo = LaminatedPrint(std::move(photo));
  EXPECT_EQ("Laminated", laminated_photo.GetDecorationAdjective());
}
