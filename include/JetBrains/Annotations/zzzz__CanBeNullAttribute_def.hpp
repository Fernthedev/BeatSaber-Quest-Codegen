#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(CanBeNullAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class CanBeNullAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::CanBeNullAttribute);
// Type: JetBrains.Annotations::CanBeNullAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15736))
// CS Name: ::JetBrains.Annotations::CanBeNullAttribute*
class CORDL_TYPE CanBeNullAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::JetBrains::Annotations::CanBeNullAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eb9f50 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "CanBeNullAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CanBeNullAttribute(CanBeNullAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CanBeNullAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CanBeNullAttribute(CanBeNullAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CanBeNullAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::CanBeNullAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::CanBeNullAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::CanBeNullAttribute*, "JetBrains.Annotations", "CanBeNullAttribute");
