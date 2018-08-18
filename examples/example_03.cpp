// Copyright 2018 Glyn Matthews.
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt of copy at
// http://www.boost.org/LICENSE_1_0.txt)

#include <skyr/url.hpp>
#include <iostream>


int main(int argc, char *argv[]) {
  auto base = skyr::make_url("https://url.spec.whatwg.org/");
  auto url = skyr::make_url(U"/\u1F363\u1F37A", base.value());
  if (url) {
    std::cout << url.value().href() << std::endl;
  }
}