#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
CORDL_MODULE_EXPORT(InjectLocalAttribute)
// Forward declare root types
namespace Zenject {
class InjectLocalAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectLocalAttribute);
// Type: Zenject::InjectLocalAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15710))
// CS Name: ::Zenject::InjectLocalAttribute*
class CORDL_TYPE InjectLocalAttribute : public ::Zenject::InjectAttributeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::InjectAttributeBase)]{};

static inline ::Zenject::InjectLocalAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eb97f4 size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InjectLocalAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InjectLocalAttribute(InjectLocalAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InjectLocalAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InjectLocalAttribute(InjectLocalAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InjectLocalAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectLocalAttribute, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InjectLocalAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectLocalAttribute*, "Zenject", "InjectLocalAttribute");
