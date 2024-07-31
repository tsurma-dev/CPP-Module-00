#include "Contact.hpp"

Contact::Contact(void) {
	// std::cout << "Contact contructed" << std::endl;
}

Contact::~Contact() {
	// std::cout << "Contact destroyed" << std::endl;
}

int Contact::SetFirstName(std::string FirstName) {
	if (FirstName.empty() == true)
		return (1);
	this->FirstName = FirstName;
	return (0);
}

int Contact::SetLastName(std::string LastName) {
	if (LastName.empty() == true)
		return (1);
	this->LastName = LastName;
	return (0);
}

int Contact::SetNickname(std::string Nickname) {
	if (Nickname.empty() == true)
		return (1);
	this->Nickname = Nickname;
	return (0);
}

int Contact::SetPhoneNumber(std::string PhoneNumber) {
	if (PhoneNumber.empty() == true)
		return (1);
	this->PhoneNumber = PhoneNumber;
	return (0);

}

int Contact::SetDarkestSecret(std::string DarkestSecret) {
	if (DarkestSecret.empty() == true)
		return (1);
	this->DarkestSecret = DarkestSecret;
	return (0);
}

std::string Contact::GetFirstName(void)
{
	return std::string(this->FirstName);
}

std::string Contact::GetLastName(void)
{
	return std::string(this->LastName);
}

std::string Contact::GetNickname(void)
{
	return std::string(this->Nickname);
}

std::string Contact::GetPhoneNumber(void)
{
	return std::string(this->PhoneNumber);
}

std::string Contact::GetDarkestSecret(void)
{
	return std::string(this->DarkestSecret);
}
