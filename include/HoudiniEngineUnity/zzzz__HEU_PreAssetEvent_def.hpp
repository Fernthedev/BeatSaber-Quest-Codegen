#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HEU_PreAssetEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_PreAssetEvent)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_PreAssetEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_PreAssetEvent);
// Type: HoudiniEngineUnity::HEU_PreAssetEvent
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10465)), TypeDefinitionIndex(TypeDefinitionIndex(9599)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10465), inst: 5238 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9606))
// CS Name: ::HoudiniEngineUnity::HEU_PreAssetEvent*
class CORDL_TYPE HEU_PreAssetEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_PreAssetEventData*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_PreAssetEventData*>)]{};

static inline ::HoudiniEngineUnity::HEU_PreAssetEvent* New_ctor() ;

/// @brief Method .ctor addr 0x214e568 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_PreAssetEvent(HEU_PreAssetEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_PreAssetEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_PreAssetEvent(HEU_PreAssetEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HEU_PreAssetEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_PreAssetEvent, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_PreAssetEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_PreAssetEvent*, "HoudiniEngineUnity", "HEU_PreAssetEvent");
