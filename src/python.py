import os

# Nastavíme cestu ke Godot C++ bindings
godot_cpp_dir = "main.cpp"

# Nastavíme cílový adresář pro naši knihovnu
build_dir = "build"

# Kompilace knihovny
env = Environment()
env.Append(CPPPATH=[godot_cpp_dir + "/include", godot_cpp_dir + "/include/core", godot_cpp_dir + "/include/gen"])
env.Append(LIBPATH=[godot_cpp_dir + "/bin"])

# Zdrojové soubory
sources = ["main.cpp"]

# Výstupní soubor
env.SharedLibrary(target="main", source=sources)
