#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_3_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
CORDL_MODULE_EXPORT(CookedEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class CookedEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::CookedEvent);
// Type: HoudiniEngineUnity::CookedEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10467)), TypeDefinitionIndex(TypeDefinitionIndex(10196)), TypeDefinitionIndex(TypeDefinitionIndex(3843)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3843), inst: 311 }), TypeDefinitionIndex(TypeDefinitionIndex(9639)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10467), inst: 5233 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9602))
// CS Name: ::HoudiniEngineUnity::CookedEvent*
class CORDL_TYPE CookedEvent : public ::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_3<::HoudiniEngineUnity::HEU_HoudiniAsset*,bool,::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>)]{};

static inline ::HoudiniEngineUnity::CookedEvent* New_ctor() ;

/// @brief Method .ctor addr 0x214e448 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CookedEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CookedEvent(CookedEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CookedEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CookedEvent(CookedEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CookedEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::CookedEvent, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::CookedEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::CookedEvent*, "HoudiniEngineUnity", "CookedEvent");
