#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(OptionalAttribute)
// Forward declare root types
namespace System::Runtime::InteropServices {
class OptionalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::OptionalAttribute);
// Type: System.Runtime.InteropServices::OptionalAttribute
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3327))
// CS Name: ::System.Runtime.InteropServices::OptionalAttribute*
class CORDL_TYPE OptionalAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::InteropServices::OptionalAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24d72e0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OptionalAttribute(OptionalAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OptionalAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OptionalAttribute(OptionalAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OptionalAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::OptionalAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::OptionalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OptionalAttribute*, "System.Runtime.InteropServices", "OptionalAttribute");
