#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_CookedDataEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_CookedDataEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_CookedDataEvent);
// Type: HoudiniEngineUnity::HEU_CookedDataEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9597)), TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 5237 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9603))
// CS Name: ::HoudiniEngineUnity::HEU_CookedDataEvent*
class CORDL_TYPE HEU_CookedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_CookedEventData*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_CookedEventData*>)]{};

static inline ::HoudiniEngineUnity::HEU_CookedDataEvent* New_ctor() ;

/// @brief Method .ctor addr 0x214e490 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_CookedDataEvent(HEU_CookedDataEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_CookedDataEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_CookedDataEvent(HEU_CookedDataEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_CookedDataEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_CookedDataEvent, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_CookedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_CookedDataEvent*, "HoudiniEngineUnity", "HEU_CookedDataEvent");
