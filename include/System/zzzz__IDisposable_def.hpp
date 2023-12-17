#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IDisposable)
// Forward declare root types
namespace System {
class IDisposable;
}
// Write type traits
MARK_REF_PTR_T(::System::IDisposable);
// Type: System::IDisposable
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2415))
// CS Name: ::System::IDisposable*
class CORDL_TYPE IDisposable {
public:
// Declarations
/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Dispose() ;

// Ctor Parameters [CppParam { name: "", ty: "IDisposable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IDisposable(IDisposable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IDisposable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IDisposable(IDisposable const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(::System::IDisposable);
DEFINE_IL2CPP_ARG_TYPE(::System::IDisposable*, "System", "IDisposable");
