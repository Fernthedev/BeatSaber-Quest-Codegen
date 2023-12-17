#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventHandler_1)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System {
template<::il2cpp_utils::il2cpp_reference_type TEventArgs>
class EventHandler_1<TEventArgs>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::EventHandler_1);
// Type: System::EventHandler`1
// Type: System::EventHandler`1
namespace System {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TEventArgs>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611)), TypeDefinitionIndex(TypeDefinitionIndex(2378))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2378), inst: 2 })
// CS Name: ::System::EventHandler`1<TEventArgs>*
class CORDL_TYPE EventHandler_1<TEventArgs> : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::EventHandler_1<TEventArgs>* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Invoke(::System::Object*  sender, TEventArgs  e) ;

// Ctor Parameters [CppParam { name: "", ty: "EventHandler_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EventHandler_1(EventHandler_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventHandler_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventHandler_1(EventHandler_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EventHandler_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::EventHandler_1, "System", "EventHandler`1");
