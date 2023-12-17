#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(IntrinsicAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IntrinsicAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::IntrinsicAttribute);
// Type: System.Runtime.CompilerServices::IntrinsicAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3376))
// CS Name: ::System.Runtime.CompilerServices::IntrinsicAttribute*
class CORDL_TYPE IntrinsicAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::CompilerServices::IntrinsicAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24db200 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntrinsicAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntrinsicAttribute(IntrinsicAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntrinsicAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntrinsicAttribute(IntrinsicAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntrinsicAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::IntrinsicAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::IntrinsicAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IntrinsicAttribute*, "System.Runtime.CompilerServices", "IntrinsicAttribute");
