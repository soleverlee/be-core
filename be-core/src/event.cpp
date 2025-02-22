#include "bd/event.h"
#include "bd/attribute.h"

using namespace bd;

Event::Event(EventType type):_eventType(type){

}
Event::~Event(){
    if (this->_data != NULL)
        delete _data;
}

Attribute* Event::getTarget() const{
    return this->_target;
}
EventType Event::getEventType() const{
    return this->_eventType;
}
boost::any* Event::getData() const{
    return this->_data;
}
void Event::setData(boost::any* value){
    this->_data = value;
}