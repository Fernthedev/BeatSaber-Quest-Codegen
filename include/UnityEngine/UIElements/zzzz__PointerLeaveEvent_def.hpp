#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerLeaveEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerLeaveEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerLeaveEvent);
// Type: UnityEngine.UIElements::PointerLeaveEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4837 }), TypeDefinitionIndex(TypeDefinitionIndex(7198))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7206))
// CS Name: ::UnityEngine.UIElements::PointerLeaveEvent*
class CORDL_TYPE PointerLeaveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerLeaveEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerLeaveEvent*>)]{};

/// @brief Method Init addr 0x2e507b4 size 0x54 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e50808 size 0xc virtual false final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerLeaveEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e50814 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerLeaveEvent(PointerLeaveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerLeaveEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerLeaveEvent(PointerLeaveEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerLeaveEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerLeaveEvent, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerLeaveEvent*, "UnityEngine.UIElements", "PointerLeaveEvent");
