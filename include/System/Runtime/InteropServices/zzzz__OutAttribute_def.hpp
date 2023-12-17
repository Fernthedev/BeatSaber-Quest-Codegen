#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OutAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class OutAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::OutAttribute);
// Type: System.Runtime.InteropServices::OutAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3326))
// CS Name: ::System.Runtime.InteropServices::OutAttribute*
class CORDL_TYPE OutAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::InteropServices::OutAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24d72d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OutAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OutAttribute(OutAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OutAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OutAttribute(OutAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OutAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OutAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::OutAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OutAttribute*, "System.Runtime.InteropServices", "OutAttribute");
