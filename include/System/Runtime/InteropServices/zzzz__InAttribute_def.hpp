#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(InAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class InAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::InAttribute);
// Type: System.Runtime.InteropServices::InAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3325))
// CS Name: ::System.Runtime.InteropServices::InAttribute*
class CORDL_TYPE InAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::InteropServices::InAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24d72d0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InAttribute(InAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InAttribute(InAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::InAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::InAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::InAttribute*, "System.Runtime.InteropServices", "InAttribute");
