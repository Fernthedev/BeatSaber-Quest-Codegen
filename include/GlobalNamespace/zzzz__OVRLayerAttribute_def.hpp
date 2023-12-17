#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
CORDL_MODULE_EXPORT(OVRLayerAttribute)
// Forward declare root types
namespace GlobalNamespace {
class OVRLayerAttribute;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRLayerAttribute);
// Type: ::OVRLayerAttribute
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7627))
// CS Name: ::OVRLayerAttribute*
class CORDL_TYPE OVRLayerAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::UnityEngine::PropertyAttribute)]{};

static inline ::GlobalNamespace::OVRLayerAttribute* New_ctor() ;

/// @brief Method .ctor addr 0x273905c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRLayerAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRLayerAttribute(OVRLayerAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRLayerAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRLayerAttribute(OVRLayerAttribute const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRLayerAttribute()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRLayerAttribute, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRLayerAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRLayerAttribute*, "", "OVRLayerAttribute");
