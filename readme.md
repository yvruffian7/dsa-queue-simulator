 Traffic Queue Simulator

A real-time traffic simulation demonstrating queue data structures and traffic control. Features various vehicle types, traffic signals, and priority-based queue management.

# Windows Users:
1. 🔗 [Download SDL2](https://www.libsdl.org/download-2.0.php)
2. 📂 Extract contents to your project directory
3. 🏗 Create folders if missing:
   - `include/` (for headers)
   - `lib/` (for library files)
   - `bin/` (for output)


# How to run
Insert these commands to run this program


```bash
git clone https://github.com/zen4FR/dsa-queue-simulator.git
cd DSA-Queue-Simulator
g++ -Iinclude -Llib -o bin/main.exe src/main.c src/traffic_simulation.c -lmingw32 -lSDL2main -lSDL2
g++ -o bin/generator src/generator.c src/traffic_simulation.c -lSDL2 -Iinclude -Llib -lmingw32 -lSDL2main -lSDL2
./bin/generator
./bin/main //in new terminal
```



