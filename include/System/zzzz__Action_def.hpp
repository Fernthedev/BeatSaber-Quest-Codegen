#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Action)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class Action;
}
// Write type traits
MARK_REF_PTR_T(::System::Action);
// Type: System::Action
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2322))
// CS Name: ::System::Action*
class CORDL_TYPE Action : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Action* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x251f0ac size 0xbc virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x251f168 size 0x14 virtual true final false
inline void Invoke() ;

// Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Action(Action && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Action", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Action(Action const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Action()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Action, 0x80>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Action);
DEFINE_IL2CPP_ARG_TYPE(::System::Action*, "System", "Action");
