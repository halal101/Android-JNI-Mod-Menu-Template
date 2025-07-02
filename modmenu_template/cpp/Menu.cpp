
#include "Menu.h"
#include "imgui.h"

void startMenu() {
    // UI drawing (replace with actual ImGui/OpenGL code)
    ImGui::Begin("HILL HUB");
    ImGui::Text("Welcome to HILL");
    static float walkSpeed = 1.0f;
    ImGui::SliderFloat("WalkSpeed", &walkSpeed, 0.1f, 10.0f);
    static bool toggle1 = false;
    ImGui::Checkbox("Godmode", &toggle1);
    ImGui::End();
}
