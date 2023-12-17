#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__InjectAttributeBase_def.hpp"
CORDL_MODULE_EXPORT(InjectAttribute)
// Forward declare root types
namespace Zenject {
class InjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectAttribute);
// Type: Zenject::InjectAttribute
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15709))
// CS Name: ::Zenject::InjectAttribute*
class CORDL_TYPE InjectAttribute : public ::Zenject::InjectAttributeBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::InjectAttributeBase)]{};

static inline ::Zenject::InjectAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x2eb97ec size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InjectAttribute(InjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InjectAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InjectAttribute(InjectAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InjectAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectAttribute, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttribute*, "Zenject", "InjectAttribute");
