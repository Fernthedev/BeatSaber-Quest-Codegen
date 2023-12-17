#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_AssetEventData)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_AssetEventData;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_AssetEventData);
// Type: HoudiniEngineUnity::HEU_AssetEventData
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9595))
// CS Name: ::HoudiniEngineUnity::HEU_AssetEventData*
class CORDL_TYPE HEU_AssetEventData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field Asset offset 0x10
 __declspec(property(get=__get_Asset, put=__set_Asset)) ::HoudiniEngineUnity::HEU_HoudiniAsset*  Asset;

/// @brief Field CookSuccess offset 0x18
 __declspec(property(get=__get_CookSuccess, put=__set_CookSuccess)) bool  CookSuccess;

/// @brief Field OutputObjects offset 0x20
 __declspec(property(get=__get_OutputObjects, put=__set_OutputObjects)) ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  OutputObjects;

/// @brief Field EventType offset 0x28
 __declspec(property(get=__get_EventType, put=__set_EventType)) ::HoudiniEngineUnity::HEU_AssetEventType  EventType;

constexpr void __set_Asset(::HoudiniEngineUnity::HEU_HoudiniAsset*  value) ;

constexpr ::HoudiniEngineUnity::HEU_HoudiniAsset* __get_Asset() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_HoudiniAsset*> __get_Asset() const;

constexpr void __set_CookSuccess(bool  value) ;

constexpr bool& __get_CookSuccess() ;

constexpr bool const& __get_CookSuccess() const;

constexpr void __set_OutputObjects(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* __get_OutputObjects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> __get_OutputObjects() const;

constexpr void __set_EventType(::HoudiniEngineUnity::HEU_AssetEventType  value) ;

constexpr ::HoudiniEngineUnity::HEU_AssetEventType& __get_EventType() ;

constexpr ::HoudiniEngineUnity::HEU_AssetEventType const& __get_EventType() const;

static inline ::HoudiniEngineUnity::HEU_AssetEventData* New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects) ;

/// @brief Method .ctor addr 0x214e24c size 0x40 virtual false final false
inline void _ctor(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  successful, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*  outputObjects) ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_AssetEventData(HEU_AssetEventData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_AssetEventData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_AssetEventData(HEU_AssetEventData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_AssetEventData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetEventData, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_AssetEventData);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetEventData*, "HoudiniEngineUnity", "HEU_AssetEventData");
