#pragma once

#include<string>
#include<Movement.hpp>
#include<InteractionEntity.hpp>

class Entity {
	private:
		uint32_t id_;
		std::string name_;
		_movement::Movement movement_;
		InteractionEntity interaction_;
	public:
		Entity();
		Entity(uint32_t id, std::string name, _movement::Movement movement, InteractionEntity interaction);
		virtual ~Entity();
		virtual void loadFromMemory();
		virtual void storeStateIntoMemory();
};
