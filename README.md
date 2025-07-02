# 🛠️ HILL HUB – Android Mod Menu Template

**HILL HUB** is a modular Android mod menu template for Unity (IL2CPP) games. Inspired by LGL and No-Lag HUB, this framework uses a native C++ ImGui-based overlay injected via `libmodmenu.so`.

---

## ✨ Features

- 🎨 Sleek, dark transparent ImGui UI (No-Lag HUB style)
- 🔲 Left tab navigation with toggles and sliders
- 🧵 Inline hooking with [Dobby](https://github.com/jmpews/Dobby)
- 🧬 Unity IL2CPP (`libil2cpp.so`) compatibility
- 📁 Modular C++ structure with JNI
- ✅ Example options:
  - Toggle: Godmode, AntiAFK
  - Slider: WalkSpeed

---

## 📁 Project Structure

Android_ModMenu_Template/
├── jni/
│ ├── main.cpp // JNI entry point
│ ├── Menu.cpp // ImGui menu logic
│ ├── Hook.cpp // Add your game offsets & hooks here
│ ├── Memory.cpp // Memory patching utilities
│ └── Includes/ // ImGui, Dobby, etc.
├── build.gradle
├── AndroidManifest.xml
└── README.md

yaml
Copy
Edit

---

## 🚀 Getting Started

1. **Clone the Repo:**

bash
git clone https://github.com/halal101/Android-JNI-Mod-Menu-Template.git
cd (file location)
Open in Android Studio:

Ensure NDK + CMake are installed

Load the folder as a native C++ project

Add Your Hooks:

Modify Hook.cpp with your function addresses

Target your desired .so file (e.g. libil2cpp.so)

Build the SO:

Build the project in Android Studio

Output will be libmodmenu.so

Inject the .so:

Use Game Guardian, Liberty Patch, or LD_PRELOAD method to inject

🔧 Dependencies
Dobby

Dear ImGui

JNI, C++11

Android NDK

🖼️ UI Design
Transparent black background

Left-side tab layout

“HILL HUB” branding in title bar

Minimal, clean toggle and slider layout

📜 License
MIT License

🤝 Contributing
Fork, star, and send pull requests. Contributions are welcome!

📌 Todo
 Add better ImGui font/text scaling for small screens

 Improve slider behavior and label spacing

 Add sample inline hook for demonstration

markdown
Copy
Edit
