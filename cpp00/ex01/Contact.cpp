#include "Contact.hpp"

Contact::Contact() {

}

Contact::~Contact() {

}

std::string Contact::getFirstName() const {
	return (firstName);
}
std::string Contact::getLastName() const {
	return (lastName);
}
std::string Contact::getNickname() const {
	return (nickname);
}
std::string Contact::getPhoneNumber() const {
	return (phoneNumber);
}
std::string Contact::getDarkestSecret() const {
	return (darkestSecret);
}

void Contact::setFirstName( std::string newFirstName ) {
	this->firstName = newFirstName;
}
void Contact::setLastName( std::string newLastName ) {
	this->lastName = newLastName;
}
void Contact::setNickname( std::string newNickname ) {
	this->nickname = newNickname;
}
void Contact::setPhoneNumber( std::string newPhoneNumber ) {
	this->phoneNumber = newPhoneNumber;
}
void Contact::setDarkestSecret( std::string newDarkestSecret ) {
	this->darkestSecret = newDarkestSecret;
}