#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/godot.hpp>
#include "hello.h"

using namespace godot;

void HelloWorld::say_hello() {
    Godot::print("Hello from C++!");
}

void HelloWorld::_bind_methods() {
    ClassDB::bind_method(D_METHOD("say_hello"), &HelloWorld::say_hello);
}

HelloWorld::HelloWorld() {
}
