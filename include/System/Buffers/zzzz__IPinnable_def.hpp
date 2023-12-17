#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPinnable)
// Forward declare root types
namespace System::Buffers {
class IPinnable;
}
// Write type traits
MARK_REF_PTR_T(::System::Buffers::IPinnable);
// Type: System.Buffers::IPinnable
namespace System::Buffers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3883))
// CS Name: ::System.Buffers::IPinnable*
class CORDL_TYPE IPinnable {
public:
// Declarations
/// @brief Method Unpin addr 0x0 size 0xffffffffffffffff virtual true final false
inline void Unpin() ;

// Ctor Parameters [CppParam { name: "", ty: "IPinnable", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IPinnable(IPinnable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IPinnable", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IPinnable(IPinnable const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Buffers
NEED_NO_BOX(::System::Buffers::IPinnable);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::IPinnable*, "System.Buffers", "IPinnable");
