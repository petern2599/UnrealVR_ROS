// Generated by gencpp from file rosbridge_library/TestResponseOnly.msg
// DO NOT EDIT!


#ifndef ROSBRIDGE_LIBRARY_MESSAGE_TESTRESPONSEONLY_H
#define ROSBRIDGE_LIBRARY_MESSAGE_TESTRESPONSEONLY_H

#include <ros/service_traits.h>


#include <rosbridge_library/TestResponseOnlyRequest.h>
#include <rosbridge_library/TestResponseOnlyResponse.h>


namespace rosbridge_library
{

struct TestResponseOnly
{

typedef TestResponseOnlyRequest Request;
typedef TestResponseOnlyResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TestResponseOnly
} // namespace rosbridge_library


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rosbridge_library::TestResponseOnly > {
  static const char* value()
  {
    return "da5909fbe378aeaf85e547e830cc1bb7";
  }

  static const char* value(const ::rosbridge_library::TestResponseOnly&) { return value(); }
};

template<>
struct DataType< ::rosbridge_library::TestResponseOnly > {
  static const char* value()
  {
    return "rosbridge_library/TestResponseOnly";
  }

  static const char* value(const ::rosbridge_library::TestResponseOnly&) { return value(); }
};


// service_traits::MD5Sum< ::rosbridge_library::TestResponseOnlyRequest> should match
// service_traits::MD5Sum< ::rosbridge_library::TestResponseOnly >
template<>
struct MD5Sum< ::rosbridge_library::TestResponseOnlyRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::TestResponseOnly >::value();
  }
  static const char* value(const ::rosbridge_library::TestResponseOnlyRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::TestResponseOnlyRequest> should match
// service_traits::DataType< ::rosbridge_library::TestResponseOnly >
template<>
struct DataType< ::rosbridge_library::TestResponseOnlyRequest>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::TestResponseOnly >::value();
  }
  static const char* value(const ::rosbridge_library::TestResponseOnlyRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rosbridge_library::TestResponseOnlyResponse> should match
// service_traits::MD5Sum< ::rosbridge_library::TestResponseOnly >
template<>
struct MD5Sum< ::rosbridge_library::TestResponseOnlyResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rosbridge_library::TestResponseOnly >::value();
  }
  static const char* value(const ::rosbridge_library::TestResponseOnlyResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rosbridge_library::TestResponseOnlyResponse> should match
// service_traits::DataType< ::rosbridge_library::TestResponseOnly >
template<>
struct DataType< ::rosbridge_library::TestResponseOnlyResponse>
{
  static const char* value()
  {
    return DataType< ::rosbridge_library::TestResponseOnly >::value();
  }
  static const char* value(const ::rosbridge_library::TestResponseOnlyResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROSBRIDGE_LIBRARY_MESSAGE_TESTRESPONSEONLY_H