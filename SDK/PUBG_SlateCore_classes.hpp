#pragma once

// PLAYERUNKNOWN'S BATTLEGROUNDS (3.7.27.28) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace Classes
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class SlateCore.SlateWidgetStyleContainerBase
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleContainerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0028(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerBase");
		return ptr;
	}

};


// Class SlateCore.FontBulkData
// 0x00A0 (0x00C8 - 0x0028)
class UFontBulkData : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA0];                                      // 0x0028(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontBulkData");
		return ptr;
	}

};


// Class SlateCore.FontFaceInterface
// 0x0000 (0x0028 - 0x0028)
class UFontFaceInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontFaceInterface");
		return ptr;
	}

};


// Class SlateCore.FontProviderInterface
// 0x0000 (0x0028 - 0x0028)
class UFontProviderInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.FontProviderInterface");
		return ptr;
	}

};


// Class SlateCore.SlateTypes
// 0x0000 (0x0028 - 0x0028)
class USlateTypes : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateTypes");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleContainerInterface
// 0x0000 (0x0028 - 0x0028)
class USlateWidgetStyleContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleContainerInterface");
		return ptr;
	}

};


// Class SlateCore.SlateWidgetStyleAsset
// 0x0008 (0x0030 - 0x0028)
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*              CustomStyle;                                              // 0x0028(0x0008) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class SlateCore.SlateWidgetStyleAsset");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
