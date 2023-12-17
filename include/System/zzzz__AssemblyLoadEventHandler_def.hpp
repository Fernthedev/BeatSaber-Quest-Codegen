#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyLoadEventHandler)
namespace System {
class AssemblyLoadEventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::AssemblyLoadEventHandler);
// Type: System::AssemblyLoadEventHandler
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2352))
// CS Name: ::System::AssemblyLoadEventHandler*
class CORDL_TYPE AssemblyLoadEventHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::AssemblyLoadEventHandler* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x25211cc size 0x130 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x25212fc size 0x14 virtual true final false
inline void Invoke(::System::Object*  sender, ::System::AssemblyLoadEventArgs*  args) ;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyLoadEventHandler(AssemblyLoadEventHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyLoadEventHandler(AssemblyLoadEventHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AssemblyLoadEventHandler()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AssemblyLoadEventHandler, 0x80>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::AssemblyLoadEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventHandler*, "System", "AssemblyLoadEventHandler");
