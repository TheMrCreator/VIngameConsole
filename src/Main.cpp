// =================================================================================
// Includes 
// =================================================================================
#include "Includes.h"
#include "VIngameConsole.h"
#include "IRenderer.h"

// =================================================================================
// Globals 
// =================================================================================
IRenderer* g_pRenderer = NULL;

// =================================================================================
// Render 
// =================================================================================
void VIngameConsole::Render()
{
	// Do
	g_pRenderer->DrawText(5, 5, Color(255, 0, 0, 255), "Hey");
}