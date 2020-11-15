#include "framed_print.h"
#include "photo.h"
#include "gtest/gtest.h"
#include <memory>

TEST(FramedPrintTest, GetDescriptionSucceed) {
  std::unique_ptr<Photo> photo = std::make_unique<Photo>();
  FramedPrint framed_photo = FramedPrint(std::move(photo));
  EXPECT_EQ("Framed Photo Print", framed_photo.GetDescription());
}

TEST(FramedPrintTest, GetDecoratorNameSucceed) {
  std::unique_ptr<Photo> photo = std::make_unique<Photo>();
  FramedPrint framed_photo = FramedPrint(std::move(photo));
  EXPECT_EQ("Framed", framed_photo.GetDecorationAdjective());
}
