// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.28) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace Classes
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LobbyPostPorcessEffect.LobbyPostPorcessEffect_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ALobbyPostPorcessEffect_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function LobbyPostPorcessEffect.LobbyPostPorcessEffect_C.UserConstructionScript");

	ALobbyPostPorcessEffect_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
