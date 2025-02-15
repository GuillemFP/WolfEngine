#include "PanelAbout.h"
#include "ModuleEditor.h"
#include "Application.h"
#include "ModuleWindow.h"

PanelAbout::PanelAbout(bool active) : Panel("About", active)
{
}


PanelAbout::~PanelAbout()
{}

void PanelAbout::Draw()
{
	BROFILER_CATEGORY("PanelAbout-Draw", Profiler::Color::Azure);

	ImGui::Begin("About", &active, ImGuiWindowFlags_ShowBorders);
	ImGui::Text("Engine name: ");
	ImGui::SameLine();
	ImGui::TextColored(yellow, App->window->TITLE);
	ImGui::Text("Game engine made with C++.");
	ImGui::Spacing();
	ImGui::Text("Authors:");
	ImGui::TextColored(yellow, "Esteban Arrua, Guillem Ferre and Adrian Guevara.");

	ImGui::End();
}