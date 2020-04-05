#include "../headers/Base.hpp"

void Base::initWindow(){
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML Base");
};

Base::Base(){
	this->initWindow();

};

Base::~Base(){

};

void Base::updateDt(){
	//Update the dt variable with the time it takes to update and render one frame
	this->dt = this->dtClock.restart().asSeconds();
	std::system("clear");
	std::cout << this->dt << std::endl;
};


void Base::render(){
	this->window->clear();

	//render functions

	this->window->display();
};

void Base::update(){
	this->updateEvents();
};

void Base::updateEvents(){
	while(this->window->pollEvent(this->event)){
		if(this->event.type == sf::Event::Closed)
			this->window->close();
	}
};

void Base::run(){
	while(this->window->isOpen()){
		this->updateDt();
		this->update();
		this->render();
	}
};

