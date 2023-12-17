#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(_Assembly)
// Forward declare root types
namespace System::Runtime::InteropServices {
class _Assembly;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::_Assembly);
// Type: System.Runtime.InteropServices::_Assembly
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3343))
// CS Name: ::System.Runtime.InteropServices::_Assembly*
class CORDL_TYPE _Assembly {
public:
// Declarations
// Ctor Parameters [CppParam { name: "", ty: "_Assembly", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
_Assembly(_Assembly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "_Assembly", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
_Assembly(_Assembly const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::_Assembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::_Assembly*, "System.Runtime.InteropServices", "_Assembly");
