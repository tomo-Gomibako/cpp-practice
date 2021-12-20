#pragma once
#ifndef REQUEST__REQUEST_HPP
#define REQUEST__REQUEST_HPP

#include <cpprest/http_client.h>

using namespace std;

class request
{
public:
  static pplx::task<void> GetTest();
};

#endif // REQUEST__REQUEST_HPP