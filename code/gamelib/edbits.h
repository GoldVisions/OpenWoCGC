#ifndef EDBITS_H
#define EDBITS_H

#include "../types.h"
#include "../nu.h"

// Ed random seed.
extern u32 edqseed;

// SFX volume.
extern u32 edbitsSfxVol;

// SFX name global tab.
extern char* edSfxGlobalTab;

// SFX name level tab.
extern char* edSfxLevelTab;

// SFX name global count.
extern u32 edSfxGlobalCount;

// SFX name total count.
extern u32 edSfxAllCount;

// Base scene.
extern NuScene* edbits_base_scene;

/*
  80084750 0000ec 80084750  4 edbitsLookupSoundFX 	Global
  80084844 000118 80084844  4 edbitsSoundPlay 	Global
  8008495c 00008c 8008495c  4 edbitsLookupInstance 	Global
*/

// Get a random number.
u32 edqrand();

// Register the SFX tabs.
void edbitsRegisterSfx(char* sfxGlobalTab, char* sfxLevelTab, u32 sfxGlobalCount, u32 sfxAllCount);

// Register the base scene.
void edbitsRegisterBaseScene(NuScene* s);

// Set the SFX volume.
void edbitsSetSoundFxVolume(u32 vol);

#endif // !EDBITS_H