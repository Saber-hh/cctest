#ifndef HEBA1EEE2_F46F_4F44_8247_10C8AB3D0FCA
#define HEBA1EEE2_F46F_4F44_8247_10C8AB3D0FCA

#include <vector>
#include "cctest/core/test.h"

namespace cctest {

struct TestSuite : Test {
  using Test::Test;
  ~TestSuite() override;

  void add(Test* test);

private:
  void run(TestResult& result) override;

private:
  std::vector<Test*> tests;
};

} // namespace cctest

#endif
