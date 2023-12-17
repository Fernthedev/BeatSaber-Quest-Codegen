#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeFixedLengthAttribute)
// Forward declare root types
namespace Unity::Collections {
class NativeFixedLengthAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeFixedLengthAttribute);
// Type: Unity.Collections::NativeFixedLengthAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10007))
// CS Name: ::Unity.Collections::NativeFixedLengthAttribute*
class CORDL_TYPE NativeFixedLengthAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

// Ctor Parameters [CppParam { name: "", ty: "NativeFixedLengthAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeFixedLengthAttribute(NativeFixedLengthAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeFixedLengthAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeFixedLengthAttribute(NativeFixedLengthAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeFixedLengthAttribute()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeFixedLengthAttribute, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeFixedLengthAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeFixedLengthAttribute*, "Unity.Collections", "NativeFixedLengthAttribute");
