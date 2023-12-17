#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(TerminatesProgramAttribute)
// Forward declare root types
namespace JetBrains::Annotations {
class TerminatesProgramAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::TerminatesProgramAttribute);
// Type: JetBrains.Annotations::TerminatesProgramAttribute
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15788))
// CS Name: ::JetBrains.Annotations::TerminatesProgramAttribute*
class CORDL_TYPE TerminatesProgramAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Attribute)]{};

static inline ::JetBrains::Annotations::TerminatesProgramAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eba754 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TerminatesProgramAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TerminatesProgramAttribute(TerminatesProgramAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TerminatesProgramAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TerminatesProgramAttribute(TerminatesProgramAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TerminatesProgramAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::TerminatesProgramAttribute, 0x10>, "Size mismatch!");

} // namespace end def JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::TerminatesProgramAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::TerminatesProgramAttribute*, "JetBrains.Annotations", "TerminatesProgramAttribute");
