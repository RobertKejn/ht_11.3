#pragma once
#ifdef LEAVERDYNAMIC_EXPORTS
#define LEAVERDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERDYNAMI_API __declspec(dllimport)
#endif

#include<string>

class LeaverDynamic
{
public:
	LEAVERDYNAMI_API std::string LeaveString(std::string s);

};
