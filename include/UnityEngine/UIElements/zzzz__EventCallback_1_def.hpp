#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventCallback_1)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
template<::il2cpp_utils::il2cpp_reference_type TEventType>
class EventCallback_1<TEventType>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::EventCallback_1);
// Type: UnityEngine.UIElements::EventCallback`1
// Type: UnityEngine.UIElements::EventCallback`1
namespace UnityEngine::UIElements {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TEventType>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(7182))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7182), inst: 2 })
// CS Name: ::UnityEngine.UIElements::EventCallback`1<TEventType>*
class CORDL_TYPE EventCallback_1<TEventType> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::UnityEngine::UIElements::EventCallback_1<TEventType>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(TEventType  evt) ;

// Ctor Parameters [CppParam { name: "", ty: "EventCallback_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventCallback_1(EventCallback_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventCallback_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventCallback_1(EventCallback_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventCallback_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::EventCallback_1, "UnityEngine.UIElements", "EventCallback`1");
