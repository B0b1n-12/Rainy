extends Node

# Načteme naši C++ knihovnu
@export var example_extension : ExampleExtension

func _ready():
    example_extension.hello_world()
