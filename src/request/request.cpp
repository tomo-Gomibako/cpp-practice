#include <iostream>
#include <cpprest/http_client.h>
// #include <cpprest/filestream.h>
#include "request.hpp"

using namespace std;
using namespace utility;
using namespace web;
using namespace web::http;
using namespace web::http::client;
using namespace concurrency::streams;

pplx::task<void> request::GetTest()
{
  return pplx::create_task([]
                           {
                             http_client client("https://httpbin.org/get");
                             return client.request(methods::GET);
                           })
      .then([](http_response response)
            {
              if (response.status_code() != status_codes::OK)
              {
                cout << "ERROR:" << endl;
              }
              auto body = response.extract_string();
              cout << body.get().c_str() << endl;
            });
}
