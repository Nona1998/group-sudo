#include <iostream>
#include <string>
int hello () {
	std::cout <<"Hello. What's your name?: ";
}

int myName (std::string name) {
	std::cout <<"And my name is Nona." <<std::endl;
	std::cout <<name << ", you have such a nice name!!!" <<std::endl;
	std::cout <<"How old are you, " << name  << "?: ";
}

int myAge (int age) {
	if (age == 19) {
		std::cout <<"I'm 19, too!!!" <<std::endl;
	} else if (age >= 19) {
		std::cout <<"You're elder than me!" <<std::endl;
	} else {
		std::cout <<"You're younger than me!!" <<std::endl;
	}
	std::cout <<"How are you?: ";
}

int goodMood (std::string mood) {
	std::cout <<"Great ^_^ !!!" <<std::endl;
}

int normalMood (std::string mood) {
	std::cout <<"Why aren't you fine?: " <<std::endl;
}

int normalMoodReason () {
	std::cout <<"Understood";
}

int badMood (std::string mood) {
	std::cout <<"Watch a comedy and you will be fine!" <<std::endl;
}

int favouriteCountry (std::string country) {
	std::cout <<country << ", it's my favourite country, too!!!" <<std::endl;
	std::cout <<"Sorry, now I should go. Bye!" <<std::endl;
}

int main () {
	std::string name,mood,country,reason;
	int age;
	hello ();
	std::cin >>name;
	myName (name);
	std::cin >>age;
	myAge (age);
	std::cin >>mood;
	if (mood == "Fine" || mood == "fine" || mood == "Good" || mood == "good") {
		goodMood(mood);
	} else if (mood == "Normal" || mood == "normal") {
		normalMood(mood);
		std::cin >>reason;
		normalMoodReason();
	} else if (mood == "Bad" || mood == "bad") {
		badMood(mood);
	}
	
	std::cout <<"Where would you like to be?: ";
	std::cin >>country;
	favouriteCountry (country);
	return 0;
}
