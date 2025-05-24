#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iomanip>
#include <iostream>
#include <string>

class Contact {
 public:
  Contact(void);
  ~Contact();
  int SetFirstName(std::string& FirstName);
  int SetLastName(std::string& LastName);
  int SetNickname(std::string& Nickname);
  int SetPhoneNumber(std::string& PhoneNumber);
  int SetDarkestSecret(std::string& DarkestSecret);
  std::string GetFirstName(void) const;
  std::string GetLastName(void) const;
  std::string GetNickname(void) const;
  std::string GetPhoneNumber(void) const;
  std::string GetDarkestSecret(void) const;

 private:
  std::string FirstName;
  std::string LastName;
  std::string Nickname;
  std::string PhoneNumber;
  std::string DarkestSecret;
};
#endif
