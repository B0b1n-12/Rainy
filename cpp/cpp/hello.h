
#ifndef HELLO_H
#define HELLO_H

#include <godot_cpp/classes/node.hpp>

namespace godot {
    class HelloWorld : public Node {
        GDCLASS(HelloWorld, Node)

    public:
        HelloWorld();
        void say_hello();
        static void _bind_methods();
    };
}

#endif
