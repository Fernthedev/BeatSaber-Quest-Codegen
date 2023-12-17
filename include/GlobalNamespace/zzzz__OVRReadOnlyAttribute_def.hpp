#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(OVRReadOnlyAttribute)
// Forward declare root types
namespace GlobalNamespace {
class OVRReadOnlyAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRReadOnlyAttribute);
// Type: ::OVRReadOnlyAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8159))
// CS Name: ::OVRReadOnlyAttribute*
class CORDL_TYPE OVRReadOnlyAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::PropertyAttribute)]{};

static inline ::GlobalNamespace::OVRReadOnlyAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x27baa3c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRReadOnlyAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRReadOnlyAttribute(OVRReadOnlyAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRReadOnlyAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRReadOnlyAttribute(OVRReadOnlyAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRReadOnlyAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRReadOnlyAttribute, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRReadOnlyAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRReadOnlyAttribute*, "", "OVRReadOnlyAttribute");
