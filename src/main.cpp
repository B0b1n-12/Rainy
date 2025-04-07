#include <godot_cpp/Godot.hpp>
#include <godot_cpp/classes/Node.hpp>


namespace godot {

class ExampleExtension : public Node {
    GODOT_CLASS(ExampleExtension, Node)

public:
    static void _register_methods() {
        register_method("hello_world", &ExampleExtension::hello_world);
    }

    void hello_world() {
        Godot::print("Hello, Godot from C++!");
    }
};

}

extern "C" void GDN_EXPORT godot_gdnative_init(godot_gdnative_init_options *o) {
    godot::Godot::gdnative_init(o);
}

extern "C" void GDN_EXPORT godot_gdnative_terminate(godot_gdnative_terminate_options *o) {
    godot::Godot::gdnative_terminate(o);
}

extern "C" void GDN_EXPORT godot_nativescript_init(void *handle) {
    godot::Godot::nativescript_init(handle);
    godot::register_class<godot::ExampleExtension>();
}
