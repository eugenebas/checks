#ifndef _CHECKS_HPP_
#define _CHECKS_HPP_

#include "checks.h"

#undef CHECK_DO
#define CHECK_DO(CONDITION, EXPRESSION) do{ if(!static_cast<bool>(CONDITION)) EXPRESSION; }while(0)

#define CHECK_THROW(CONDITION, EXCEPTION) CHECK_DO(CONDITION, throw EXCEPTION)

#endif // _CHECKS_HPP_