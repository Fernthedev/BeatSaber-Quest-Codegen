#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ReflectionProbeBakingEffect)
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class ReflectionProbeBakingEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ReflectionProbeBakingEffect);
// Type: ::ReflectionProbeBakingEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14502))
// CS Name: ::ReflectionProbeBakingEffect*
class CORDL_TYPE ReflectionProbeBakingEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _material offset 0x18
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

/// @brief Method OnRenderImage addr 0x210c310 size 0x74 virtual false final false
inline void OnRenderImage(::UnityEngine::RenderTexture*  src, ::UnityEngine::RenderTexture*  dest) ;

static inline ::GlobalNamespace::ReflectionProbeBakingEffect* New_ctor() ;

/// @brief Method .ctor addr 0x210c384 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionProbeBakingEffect(ReflectionProbeBakingEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionProbeBakingEffect(ReflectionProbeBakingEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ReflectionProbeBakingEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ReflectionProbeBakingEffect, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ReflectionProbeBakingEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReflectionProbeBakingEffect*, "", "ReflectionProbeBakingEffect");
