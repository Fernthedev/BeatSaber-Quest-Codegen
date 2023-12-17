#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(NativeDisableParallelForRestrictionAttribute)
// Forward declare root types
namespace Unity::Collections {
class NativeDisableParallelForRestrictionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::NativeDisableParallelForRestrictionAttribute);
// Type: Unity.Collections::NativeDisableParallelForRestrictionAttribute
namespace Unity::Collections {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10009))
// CS Name: ::Unity.Collections::NativeDisableParallelForRestrictionAttribute*
class CORDL_TYPE NativeDisableParallelForRestrictionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::Unity::Collections::NativeDisableParallelForRestrictionAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2c9e0bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableParallelForRestrictionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NativeDisableParallelForRestrictionAttribute(NativeDisableParallelForRestrictionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NativeDisableParallelForRestrictionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NativeDisableParallelForRestrictionAttribute(NativeDisableParallelForRestrictionAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NativeDisableParallelForRestrictionAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::NativeDisableParallelForRestrictionAttribute, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections
NEED_NO_BOX(::Unity::Collections::NativeDisableParallelForRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeDisableParallelForRestrictionAttribute*, "Unity.Collections", "NativeDisableParallelForRestrictionAttribute");
