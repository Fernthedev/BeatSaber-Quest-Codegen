#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IComparer)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections {
class IComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Collections::IComparer);
// Type: System.Collections::IComparer
namespace System::Collections {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3756))
// CS Name: ::System.Collections::IComparer*
class CORDL_TYPE IComparer {
public:
// Declarations
/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final false
inline int32_t Compare(::System::Object*  x, ::System::Object*  y) ;

// Ctor Parameters [CppParam { name: "", ty: "IComparer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IComparer(IComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IComparer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IComparer(IComparer const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections
NEED_NO_BOX(::System::Collections::IComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::IComparer*, "System.Collections", "IComparer");
