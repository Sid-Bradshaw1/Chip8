//
//  MemoryStructs.h
//  Chip8
//
//  Created by Sarah Bradshaw on 6/7/26.
//

#ifndef MemoryStructs_h
#define MemoryStructs_h

#define STACK_SIZE 8
#define FRAME_BUFFER_ROW_SIZE 8
#define FRAME_BUFFER_COL_SIZE 4
#define ADRESSABLE_MEMORY_SIZE 512


typedef struct
{
    int8_t V0;
    int8_t V1;
    int8_t V2;
    int8_t V3;
    int8_t V4;
    int8_t V5;
    int8_t V6;
    int8_t V7;
    int8_t V8;
    int8_t V9;
    int8_t VA;
    int8_t VB;
    int8_t VC;
    int8_t VD;
    int8_t VE;
    int8_t VF;
} registers;

typedef struct
{
    int8_t data[STACK_SIZE];
    int8_t ptr;
}Stack;

typedef struct
{
    int16_t data;
}Index;

typedef struct
{
    int8_t data;
}DelayTimer;

typedef struct
{
    int8_t data;
}SoundTimer;

typedef struct
{
    int8_t data[FRAME_BUFFER_ROW_SIZE][FRAME_BUFFER_COL_SIZE];
}frameBuffer;

typedef struct
{
    int16_t data;
}programCounter;

typedef struct
{
    int8_t data[ADRESSABLE_MEMORY_SIZE];
}adressableMemory;



void initializeMemory();
void initializeRegisters();
void initializeStack();
void initializeIndex();
void initializeDelayTimer();
void initializeSoundTimer();
void initializeFrameBuffer();
void initializeProgramCounter();
void initializeAdressableMemory();



#endif /* MemoryStructs_h */
