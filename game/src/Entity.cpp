#include <Entity.hpp>

Entity::Entity(){
    this->id_ = 0;
    this->name_ = "0";
}
Entity::Entity(uint32_t id, std::string name, _movement::Movement movement, InteractionEntity interaction){
    this->id_ = id;
    this->name_ = name;
}
Entity::~Entity(){
    //TODO
}
void Entity::loadFromMemory(){
    //TODO
}
void Entity::storeStateIntoMemory(){
    //TODO
}