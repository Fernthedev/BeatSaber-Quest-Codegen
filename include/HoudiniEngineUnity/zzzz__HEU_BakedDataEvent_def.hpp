#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_BakedEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_BakedDataEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_BakedDataEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_BakedDataEvent);
// Type: HoudiniEngineUnity::HEU_BakedDataEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9598)), TypeDefinitionIndex(TypeDefinitionIndex(10465)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 5236 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9605))
// CS Name: ::HoudiniEngineUnity::HEU_BakedDataEvent*
class CORDL_TYPE HEU_BakedDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_BakedEventData*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_BakedEventData*>)]{};

static inline ::HoudiniEngineUnity::HEU_BakedDataEvent* New_ctor() ;

/// @brief Method .ctor addr 0x214e520 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedDataEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_BakedDataEvent(HEU_BakedDataEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_BakedDataEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_BakedDataEvent(HEU_BakedDataEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_BakedDataEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_BakedDataEvent, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_BakedDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_BakedDataEvent*, "HoudiniEngineUnity", "HEU_BakedDataEvent");
