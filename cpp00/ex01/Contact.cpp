
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

void Contact::setFirstName( std::string newFirstName ) {
	this->firstName = newFirstName;
}
// ...