#include <string>
#include"Signin.h"
#include"Person.h"
#include"Company.h"

Signin::Signin()
{
	signinUI = new SigninUI(this);
}

SigninUI* Signin::getSigninUI() {
	return signinUI;
}

Member* Signin::signin(int memClassifier, string name, int num, string id, string password, Person** persons, int personsCount, Company** companies, int companiesCount) {
	Member* member;
	return member->createNewMember(memClassifier, name, num, id, password, persons, personsCount, companies, companiesCount);
}