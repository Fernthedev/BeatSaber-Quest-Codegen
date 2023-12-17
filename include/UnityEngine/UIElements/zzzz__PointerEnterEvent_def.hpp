#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerEnterEvent)
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerEnterEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerEnterEvent);
// Type: UnityEngine.UIElements::PointerEnterEvent
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7198)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7198), inst: 4836 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7205))
// CS Name: ::UnityEngine.UIElements::PointerEnterEvent*
class CORDL_TYPE PointerEnterEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerEnterEvent*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xf0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xf0 - sizeof(::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerEnterEvent*>)]{};

/// @brief Method Init addr 0x2e50700 size 0x54 virtual true final false
inline void Init() ;

/// @brief Method LocalInit addr 0x2e50754 size 0xc virtual false final false
inline void LocalInit() ;

static inline ::UnityEngine::UIElements::PointerEnterEvent* New_ctor() ;

/// @brief Method .ctor addr 0x2e50760 size 0x54 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointerEnterEvent(PointerEnterEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointerEnterEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointerEnterEvent(PointerEnterEvent const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointerEnterEvent()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerEnterEvent, 0xf0>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerEnterEvent*, "UnityEngine.UIElements", "PointerEnterEvent");
