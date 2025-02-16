#include "raylib.h"
#include<iostream> 
#include<fstream> 
int main() {
    // Initialize window and image loader
    InitWindow(1920, 1000, "Display Image Example");

    Image image = LoadImage("../picture/background.png");

    // Convert image to texture for rendering
    Texture2D texture = LoadTextureFromImage(image);

    // Main game loop
    while (!WindowShouldClose()) {
        BeginDrawing();
        
        // Clear the background
        ClearBackground(RAYWHITE);

        // Draw the image at position (0, 0)
        DrawTexture(texture, 0, 0, WHITE);

        EndDrawing();
    }

    // Unload resources
    UnloadTexture(texture);
    UnloadImage(image);

    // Close window and exit
    CloseWindow();

    return 0;
}
