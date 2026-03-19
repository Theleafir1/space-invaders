#include <iostream>
#include "raylib.h"
#include <cstdlib>
#include <ctime>

bool img0[96] {
    0,0,0,0,0,1,1,0,0,0,0,0,
    0,0,0,0,1,1,1,1,0,0,0,0,
    0,0,0,1,1,1,1,1,1,0,0,0,
    0,0,1,1,0,1,1,0,1,1,0,0,
    0,0,1,1,1,1,1,1,1,1,0,0,
    0,0,0,0,1,0,0,1,0,0,0,0,
    0,0,0,1,0,1,1,0,1,0,0,0,
    0,0,1,0,1,0,0,1,0,1,0,0
};
bool img1[96] {
    0,0,0,0,0,1,1,0,0,0,0,0,
    0,0,0,0,1,1,1,1,0,0,0,0,
    0,0,0,1,1,1,1,1,1,0,0,0,
    0,0,1,1,0,1,1,0,1,1,0,0,
    0,0,1,1,1,1,1,1,1,1,0,0,
    0,0,0,1,0,1,1,0,1,0,0,0,
    0,0,1,0,0,0,0,0,0,1,0,0,
    0,0,0,1,0,0,0,0,1,0,0,0

};
bool img2[96] {
    0,0,0,1,0,0,0,0,0,1,0,0,
    0,0,0,0,1,0,0,0,1,0,0,0,
    0,0,0,1,1,1,1,1,1,1,0,0,
    0,0,1,1,0,1,1,1,0,1,1,0,
    0,1,1,1,1,1,1,1,1,1,1,1,
    0,1,0,1,1,1,1,1,1,1,0,1,
    0,1,0,1,0,0,0,0,0,1,0,1,
    0,0,0,0,1,1,0,1,1,0,0,0
};
bool img3[96] {
    0,0,0,1,0,0,0,0,0,1,0,0,
    0,1,0,0,1,0,0,0,1,0,0,1,
    0,1,0,1,1,1,1,1,1,1,0,1,
    0,1,1,1,0,1,1,1,0,1,1,1,
    0,1,1,1,1,1,1,1,1,1,1,1,
    0,0,1,1,1,1,1,1,1,1,1,0,
    0,0,0,1,0,0,0,0,0,1,0,0,
    0,0,1,0,0,0,0,0,0,0,1,0
};
bool img4[96] {
    0,0,0,0,1,1,1,1,0,0,0,0,
    0,1,1,1,1,1,1,1,1,1,1,0,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,0,0,1,1,0,0,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    0,0,1,1,1,0,0,1,1,1,0,0,
    0,1,1,0,0,1,1,0,0,1,1,0,
    0,0,1,1,0,0,0,0,1,1,0,0
};
bool img5[96] {
    0,0,0,0,1,1,1,1,0,0,0,0,
    0,1,1,1,1,1,1,1,1,1,1,0,
    1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,0,0,1,1,0,0,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,
    0,0,0,1,1,0,0,1,1,0,0,0,
    0,0,1,1,0,1,1,0,1,1,0,0,
    1,1,0,0,0,0,0,0,0,0,1,1
};
bool img6[104] {
    0,0,0,0,1,0,0,0,1,0,0,0,0,
    0,1,0,0,0,1,0,1,0,0,0,1,0,
    0,0,1,0,0,0,0,0,0,0,1,0,0,
    0,0,0,1,0,0,0,0,0,1,0,0,0,
    1,1,0,0,0,0,0,0,0,0,0,1,1,
    0,0,0,1,0,0,0,0,0,1,0,0,0,
    0,0,1,0,0,1,0,1,0,0,1,0,0,
    0,1,0,0,1,0,0,0,1,0,0,1,0
};
bool img7[77] {
    0,0,0,0,0,1,0,0,0,0,0,
    0,0,0,0,1,1,1,0,0,0,0,
    0,0,0,0,1,1,1,0,0,0,0,
    0,1,1,1,1,1,1,1,1,1,0,
    1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1
};
bool img8[25] {

};
bool img9[352] {
    0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,
    0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,
    0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,
    0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,
    1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,
    1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,
    1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,
};
struct Sprite {
    bool *data;
    char width;
    char height;
    char hbW;
    char hbH;
    char offXl;
    char offXr;
};
Sprite sprite[9] {
    {img0, 12, 8, 8, 8, 2, 2}, {img1, 12, 8, 8, 8, 2, 2},   // calmar 0/1
    {img2, 12, 8,11, 8, 1, 0}, {img3, 12, 8,11, 8, 1, 0},   // crab 0/1
    {img4, 12, 8,12, 8, 0, 0}, {img5, 12, 8,12, 8, 0, 0},   // jellyfish 0/1
    {img6, 13, 8},                                          // alien explosion 0. no colls
    {img7, 11, 7},                                          // player. tmp colls or no need for them atleast there
    {img8,  5, 5}                                           // that's gonna be bullet mask
};

class invaderBullet {
    char type{};
    
};

class playerBullet {
    unsigned char x{}, y{};
    bool active{0};
public:
    inline unsigned char X() {return x;}
    inline unsigned char Y() {return y;}
    inline bool isActive(){return active;}
    void disable() {active = false;}
    void fire(unsigned char x, char explTimer){
        if (!explTimer){
        active = true;
        this->x = x + 5;
        this->y = 256-32;}
    }
    void draw(){
        for (int i = 0; i < 4; i++){
            DrawPixel(x, y+i, GREEN);}
    }
    void update(){
        if (active) y-=4;
        if (y==0 || y==1) active = false;
    }
};
class Player {
    unsigned char x = 100;
    bool isAlive;
public:
    char hp{3};
    short score{};
    playerBullet bullet;
    unsigned char X(){return x;}
    void move(bool direction) {
        if (direction) {if (x < 204) x+=1;}
        else { if (x > 10) x -= 1;}
    }
    void draw() {
        for (int i = 0; i < sprite[7].width * sprite[7].height; i++)
            if (sprite[7].data[i])
                DrawPixel((i % sprite[7].width) + x, (i / sprite[7].width) + (256-32), GREEN);
    }
};
class Invader {
    unsigned char x = 0, y = 0;
    bool alive{true};
    bool deathAnim{};
    bool animation{};
    bool bigStep{};
    char type{};
    char image{};

public:
    void draw() {
        if (!deathAnim){
        for (int i = 0; i < sprite[image].width * sprite[image].height; i++)
            if (sprite[image].data[i])
                DrawPixel((i % sprite[image].width) + x, (i / sprite[image].width) + y, WHITE);}
        else{
        for (int i = 0; i < sprite[6].width * sprite[6].height; i++)
            if (sprite[6].data[i])
                DrawPixel((i % sprite[6].width) + x, (i / sprite[6].width) + y, WHITE);}
    }
    void init(bool alive = 1, bool deathAnim = 0, bool animation = 0, char type = 0, unsigned char x = 50, unsigned char y = 50){
        this->type = type;
        this->animation = animation;
        this->alive = alive;
        this->deathAnim = deathAnim;
        this->image = type * 2 + animation;
        this->x = x;
        this->y = y;
    }
    void move(bool direction, bool& wallTouch, bool doShift, char aliveAmount, char explTimer) {
        if (deathAnim) { this->kill(); if (!explTimer) {
            
            deathAnim = false;
            }}
        else {
            if (aliveAmount == 1) bigStep = true; else bigStep = false;
            if (doShift) {
                y += 8;
                if (!direction) x += 2 + bigStep;  else x -= 2 + bigStep;
            } else {
                if (direction) x += 2 + bigStep;  else x -= 2 + bigStep;
                if (x >= 204 || x <= 10) wallTouch = true;
            }
            animation = !animation;
            this->image = type * 2 + animation;
        }
    }
    inline bool isAlive(){return alive;}
    inline void kill() {alive = false;}
    inline unsigned char X(){return x;}
    inline unsigned char Y(){return y;}
    inline bool retDAnim() {return deathAnim;}

    bool checkCollisions(const unsigned char bulletX,const unsigned char bulletY, short *score){
        unsigned char startX = x + sprite[image].offXl;
        unsigned char endX = x + sprite[image].hbW - sprite[image].offXr;
        if (bulletX >= startX && bulletX <= endX && bulletY > y &&  bulletY < y+8 && alive) {
            deathAnim = true;
            *score += (type == 0) ? 30 : ((type == 1) ? 20 : 10);
            return true;
        }
        else return false;
    }
};

int main(void)
{
    srand(time(NULL));
    const int screenWidth = 672;
    const int screenHeight = 768;

    InitWindow(screenWidth, screenHeight, "raylib game");
    RenderTexture2D screen = LoadRenderTexture(224, 256);
    SetTextureFilter(screen.texture, 0);

    Player player;

    Invader invader[55];
    for(int row = 0; row < 5; row++)
        for(int column = 0; column < 11; column++){
            char index = row * 11 + column;
            char type;

            if (row <= 1) type = 2;
            else if (row <= 3) type = 1;
            else type = 0;

            invader[index].init(1, 0, 0, type, 28 + (column * 16), 120 - (row * 16));
        }
    bool doShift{};
    bool wallTouch{};
    bool invDir{1};
    bool pDir{};
    char invCounter{};
    char frameCounter{};
    char aliveAmount = 0;
    char explIndex{-1};
    char explosionTimer{};
    char randInv = rand()%55;  
    Player *currPlayer;
    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        if(1) currPlayer = &player;
        if (!IsKeyDown(KEY_Q)) {

        int aliveAmount{};
        explIndex = -1;
        for(int i = 0; i < 55; i++) {
            aliveAmount += invader[i].isAlive();
            if (player.bullet.isActive() && invader[i].checkCollisions(player.bullet.X(), player.bullet.Y(), &(currPlayer->score))) { player.bullet.disable(); explosionTimer = 16; }
            if (invader[i].retDAnim() && invader[i].isAlive()) explIndex = i;
        }
        
        if (explosionTimer) explosionTimer--;
        

        if (frameCounter > 70) frameCounter = 0;

        if (IsKeyPressed(KEY_BACKSPACE) && invader[randInv].isAlive()) {
            invader[randInv].kill();
            while (!invader[randInv].isAlive()) randInv = rand() % 55;
        }

        while (!invader[invCounter].isAlive() && invCounter < 55 && aliveAmount > 0 && !explosionTimer) {
            invCounter++;
        }





        //  moving
        if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D)) pDir = 1;
        else if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A)) pDir = 0;
        if ((IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_D) || IsKeyDown(KEY_A))) player.move(pDir);
        //  shooting
        if (IsKeyPressed(KEY_SPACE) && !player.bullet.isActive() && explIndex == -1) player.bullet.fire(player.X(), explosionTimer);
        if (player.bullet.isActive()) player.bullet.update();
        //  death animation*
        


        frameCounter++;
        if (invCounter == 54 && !explosionTimer) {invader[invCounter].move(invDir, wallTouch, doShift, aliveAmount, explosionTimer);}
        if (invCounter >= 54 && !explosionTimer) {
            invCounter = -1;
            if (doShift) {
                doShift = false;
                wallTouch = false;
                invDir = !invDir;
            } else if (wallTouch) {
                doShift = true;
            } 
        } else if (!explosionTimer){
            invader[invCounter].move(invDir, wallTouch, doShift, aliveAmount, explosionTimer);
            invCounter++;
        }
        
        
        }
        // if(aliveAmount <= 0) YOU WON THE ROUND
        BeginTextureMode(screen);
            ClearBackground(BLACK);
            if (player.bullet.isActive()) {
            player.bullet.draw();
            }
            for(int count = 0; count < 55; count++) if (invader[count].isAlive()) invader[count].draw();
            std::cout << (short)explIndex << std::endl;
            if (explIndex != -1 && explosionTimer == 0) {
                for (int i = 0; i < sprite[6].width * sprite[6].height; i++)
                    if (sprite[6].data[i])
                        DrawPixel((i % sprite[6].width) + invader[explIndex].X(), (i / sprite[6].width) + invader[explIndex].Y(), BLACK);
                invader[explIndex].kill();
                explIndex = -1;
            }
            DrawText(TextFormat("%d", currPlayer->score), 10, 15, 10, WHITE);
            player.draw();
        EndTextureMode();

        BeginDrawing();
            ClearBackground(BLACK);
            Rectangle source = { 0, 0, (float)screen.texture.width, (float)-screen.texture.height };
            Rectangle dest = { 0, 0, (float)GetScreenWidth(), (float)GetScreenHeight() };
            DrawTexturePro(screen.texture, source, dest, (Vector2){ 0, 0 }, 0.0f, WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}