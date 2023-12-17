#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeContainerIsReadOnlyAttribute)
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class NativeContainerIsReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute);
// Type: Unity.Collections.LowLevel.Unsafe::NativeContainerIsReadOnlyAttribute
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10015))
// CS Name: ::Unity.Collections.LowLevel.Unsafe::NativeContainerIsReadOnlyAttribute*
class CORDL_TYPE NativeContainerIsReadOnlyAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsReadOnlyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeContainerIsReadOnlyAttribute(NativeContainerIsReadOnlyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeContainerIsReadOnlyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeContainerIsReadOnlyAttribute(NativeContainerIsReadOnlyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeContainerIsReadOnlyAttribute()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::NativeContainerIsReadOnlyAttribute*, "Unity.Collections.LowLevel.Unsafe", "NativeContainerIsReadOnlyAttribute");
