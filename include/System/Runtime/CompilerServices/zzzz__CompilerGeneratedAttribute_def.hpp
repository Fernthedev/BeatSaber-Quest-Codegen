#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CompilerGeneratedAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class CompilerGeneratedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::CompilerGeneratedAttribute);
// Type: System.Runtime.CompilerServices::CompilerGeneratedAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3360))
// CS Name: ::System.Runtime.CompilerServices::CompilerGeneratedAttribute*
class CORDL_TYPE CompilerGeneratedAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::System::Runtime::CompilerServices::CompilerGeneratedAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x24da980 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CompilerGeneratedAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CompilerGeneratedAttribute(CompilerGeneratedAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CompilerGeneratedAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CompilerGeneratedAttribute(CompilerGeneratedAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CompilerGeneratedAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::CompilerGeneratedAttribute, 0x10>, "Size mismatch!");

} // namespace end def System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::CompilerGeneratedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilerGeneratedAttribute*, "System.Runtime.CompilerServices", "CompilerGeneratedAttribute");
