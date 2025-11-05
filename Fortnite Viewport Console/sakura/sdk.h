#pragma once

namespace SDK
{
	namespace Offsets
	{
		uintptr_t StaticFindObject = 0x0;
		uintptr_t ProcessEvent = 0x0; // UObject::ProcessEvent

		namespace Engine
		{
			namespace UEngine
			{
				uintptr_t GameViewport = 0xa20; // UEngine::GameViewport
			}

			namespace UGameViewportClient
			{
				uintptr_t ViewportConsole = 0x40; // UGameViewportClient::ViewportConsole
			}
		}
	}

	std::string GetReleaseVersion()
	{
		std::filesystem::path path = std::filesystem::current_path(); // Fortnite/FortniteGame/Binaries/Win64/

		path = path.parent_path();                                    // Fortnite/FortniteGame/Binaries/
		path = path.parent_path();                                    // Fortnite/FortniteGame/
		path = path.parent_path();                                    // Fortnite/

		path.append("Cloud");                                         // Fortnite/Cloud/
		path.append("cloudcontent.json");                             // Fortnite/Cloud/cloudcontent.json

		std::ifstream stream(path);

		if (!stream.is_open())
			return std::string();

		nlohmann::json json;
		stream >> json;
		stream.close();

		return std::string(json["BuildVersion"]) + "-" + std::string(json["Platform"]);
	}

	bool Init()
	{
		if (Beep(500, 500))
		{
			std::string ReleaseVersion = GetReleaseVersion();

			// Chapter 6 Season 1

			if (ReleaseVersion == "++Fortnite+Release-33.00-CL-38324112-Windows")
			{
				Offsets::StaticFindObject = 0x17FEE00;
				Offsets::ProcessEvent = 0x1870C8C; // (Index: 0x42)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.00-CL-38504598-Windows")
			{
				Offsets::StaticFindObject = 0x17A8760;
				Offsets::ProcessEvent = 0x16497FC; // (Index: 0x16)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.10-CL-38630093-Windows")
			{
				Offsets::StaticFindObject = 0x267f424;
				Offsets::ProcessEvent = 0x21A42F8; // (Index: 0x38)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.11-CL-38773622-Windows")
			{
				Offsets::StaticFindObject = 0x20A0E4C;
				Offsets::ProcessEvent = 0x23B3394; // (Index: 0x2c)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.20-CL-39082670-Windows")
			{
				Offsets::StaticFindObject = 0x2165B14;
				Offsets::ProcessEvent = 0x21FB80C; // (Index: 0x39)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.20-CL-39277041-Windows")
			{
				Offsets::StaticFindObject = 0x2028B24;
				Offsets::ProcessEvent = 0x21232B4; // (Index: 0x43)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.30-CL-39435251-Windows")
			{
				Offsets::StaticFindObject = 0x2643024;
				Offsets::ProcessEvent = 0x2511BC8; // (Index: 0x47)
			}

			if (ReleaseVersion == "++Fortnite+Release-33.30-CL-39768313-Windows")
			{
				Offsets::StaticFindObject = 0x200C490;
				Offsets::ProcessEvent = 0x1EE6470; // (Index: 0x27)
			}

			// Chapter 6 Season 2

			if (ReleaseVersion == "++Fortnite+Release-34.00-CL-40085084-Windows")
			{
				Offsets::StaticFindObject = 0x2EC0224;
				Offsets::ProcessEvent = 0x25AE34C; // (Index: 0x20)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.00-CL-40228973-Windows")
			{
				Offsets::StaticFindObject = 0x21EE808;
				Offsets::ProcessEvent = 0x232D314; // (Index: 0x22)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.00-CL-40398515-Windows")
			{
				Offsets::StaticFindObject = 0x219721C;
				Offsets::ProcessEvent = 0x1EF93C8; // (Index: 0xE)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.00-CL-40446427-Windows")
			{
				Offsets::StaticFindObject = 0x261B494;
				Offsets::ProcessEvent = 0x25961C0; // (Index: 0x43)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.10-CL-40567068-Windows")
			{
				Offsets::StaticFindObject = 0x206D1F0;
				Offsets::ProcessEvent = 0x222F2C0; // (Index: 0x2F)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.20-CL-40965447-Windows")
			{
				Offsets::StaticFindObject = 0x29A40BC;
				Offsets::ProcessEvent = 0x27E2C80; // (Index: 0x3C)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.21-CL-41092960-Windows")
			{
				Offsets::StaticFindObject = 0x28125FC;
				Offsets::ProcessEvent = 0x2095F8C; // (Index: 0x1E)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.30-CL-41387772-Windows")
			{
				Offsets::StaticFindObject = 0x2557834;
				Offsets::ProcessEvent = 0x20F0CF4; // (Index: 0x20)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.30-CL-41588354-Windows")
			{
				Offsets::StaticFindObject = 0x232218C;
				Offsets::ProcessEvent = 0x2080324; // (Index: 0x48)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-34.40-CL-41753727-Windows")
			{
				Offsets::StaticFindObject = 0x282B660;
				Offsets::ProcessEvent = 0x2963210; // (Index: 0x26)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			// Chapter 6 Season 3

			if (ReleaseVersion == "++Fortnite+Release-35.00-CL-41994699-Windows")
			{
				Offsets::StaticFindObject = 0x28F0834;
				Offsets::ProcessEvent = 0x1FDC51C; // (Index: 0x39)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-35.00-CL-42223143-Windows")
			{
				Offsets::StaticFindObject = 0x2422F34;
				Offsets::ProcessEvent = 0x2430F40; // (Index: 0x45)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-35.10-CL-42476511-Windows")
			{
				Offsets::StaticFindObject = 0x25592F8;
				Offsets::ProcessEvent = 0x252303C; // (Index: 0x2A)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-35.10-CL-42696140-Windows")
			{
				Offsets::StaticFindObject = 0x24F78EC;
				Offsets::ProcessEvent = 0x2279C24; // (Index: 0x32)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			if (ReleaseVersion == "++Fortnite+Release-35.20-CL-42911808-Windows")
			{
				Offsets::StaticFindObject = 0x2A6A150;
				Offsets::ProcessEvent = 0x269D750; // (Index: 0xc)

				Offsets::Engine::UEngine::GameViewport = 0xa38;
			}

			// Chapter 6 Season 4

			if (ReleaseVersion == "++Fortnite+Release-36.00-CL-43214806-Windows")
			{
				Offsets::StaticFindObject = 0x2688398;
				Offsets::ProcessEvent = 0x21844FC; // (Index: 0x2b)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.00-CL-43339403-Windows")
			{
				Offsets::StaticFindObject = 0x20BAA30;
				Offsets::ProcessEvent = 0x21E4630; // (Index: 0x45)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.10-CL-43486998-Windows")
			{
				Offsets::StaticFindObject = 0x21390C0;
				Offsets::ProcessEvent = 0x20E8728; // (Index: 0x43)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.10-CL-43713507-Windows")
			{
				Offsets::StaticFindObject = 0x21A3D50;
				Offsets::ProcessEvent = 0x23FB67C; // (Index: 0x25)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.10-CL-43997926-Windows")
			{
				Offsets::StaticFindObject = 0x21EEB40;
				Offsets::ProcessEvent = 0x240045C; // (Index: 0x2f)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.20-CL-43847582-Windows")
			{
				Offsets::StaticFindObject = 0x1E3C9A8;
				Offsets::ProcessEvent = 0x1A33BF8; // (Index: 0x4c)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.20-CL-44118662-Windows")
			{
				Offsets::StaticFindObject = 0x1E6D864;
				Offsets::ProcessEvent = 0x1A41578; // (Index: 0x4c)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-36.30-CL-44367537-Windows")
			{
				Offsets::StaticFindObject = 0x2582538;
				Offsets::ProcessEvent = 0x2218A2C; // (Index: 0x2b)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			// Chapter 6 Season 5
			if (ReleaseVersion == "++Fortnite+Release-37.00-CL-44501951-Windows")
			{
				Offsets::StaticFindObject = 0x2BD2CBC;
				Offsets::ProcessEvent = 0x2877C98; // (Index: 0x2e)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}

			if (ReleaseVersion == "++Fortnite+Release-37.00-CL-44765404-Windows")
			{
				Offsets::StaticFindObject = 0x2D5FD14;
				Offsets::ProcessEvent = 0x28CE568; // (Index: 0x4e)

				Offsets::Engine::UEngine::GameViewport = 0xa50;
			}
		}

		return Offsets::StaticFindObject != 0x0 && Offsets::ProcessEvent != 0x0;
	}
}

/* /Script/CoreUObject */
class UObject;
class UStruct;
class UClass;
class UFunction;

/* /Script/Engine */
class UEngine;
class UGameViewportClient;
class UConsole;
class UGameplayStatics;

/* /Script/FortniteGame */
class UFortEngine;
class UFortGameViewportClient;
class UFortConsole;

#include "sdk/unreal_containers.h"

/* /Script/CoreUObject */
#include "sdk/core_uobject/uobject.h"
#include "sdk/core_uobject/ustruct.h"
#include "sdk/core_uobject/uclass.h"
#include "sdk/core_uobject/ufunction.h"

/* /Script/Engine */
#include "sdk/engine/uengine.h"
#include "sdk/engine/ugame_viewport_client.h"
#include "sdk/engine/uconsole.h"
#include "sdk/engine/ugameplay_statics.h"

/* /Script/FortniteGame */
#include "sdk/fortnite_game/ufort_engine.h"
#include "sdk/fortnite_game/ufort_game_viewport_client.h"
#include "sdk/fortnite_game/ufort_console.h"
