#pragma once
#include <iostream>
#include <string>
#include "Recruitment.h"
#include "Member.h"

using namespace std;

class RegisterRecruitment {
private:

public:
    Recruitment* registerNewRecruitment(string task, int numPeople, string applyDeadline, Member* member);
};