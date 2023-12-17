#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LightGroupRotationYTransform)
// Forward declare root types
namespace GlobalNamespace {
class LightGroupRotationYTransform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightGroupRotationYTransform);
// Type: ::LightGroupRotationYTransform
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4933))
// CS Name: ::LightGroupRotationYTransform*
class CORDL_TYPE LightGroupRotationYTransform : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::UnityEngine::MonoBehaviour)]{};

static inline ::GlobalNamespace::LightGroupRotationYTransform* New_ctor() ;

/// @brief Method .ctor addr 0x23a9998 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationYTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightGroupRotationYTransform(LightGroupRotationYTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupRotationYTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightGroupRotationYTransform(LightGroupRotationYTransform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightGroupRotationYTransform()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightGroupRotationYTransform, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightGroupRotationYTransform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupRotationYTransform*, "", "LightGroupRotationYTransform");
