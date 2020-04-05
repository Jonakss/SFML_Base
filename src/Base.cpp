#include "../headers/Base.hpp"

void Base::initWindow(){
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "SFML Base");
};

Base::Base(){
	this->initWindow();

};

Base::~Base(){

};

void Base::run(){
	while(this->window->isOpen()){
		this->update();
		this->render();
	}
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


