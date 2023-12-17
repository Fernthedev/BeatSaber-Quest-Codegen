#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ObstacleMaterialSetter)
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
struct ObstaclesQuality;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Renderer;
}
namespace GlobalNamespace {
class ObstaclesQualitySO;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleMaterialSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleMaterialSetter);
// Type: ::ObstacleMaterialSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4795))
// CS Name: ::ObstacleMaterialSetter*
class CORDL_TYPE ObstacleMaterialSetter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _screenDisplacement offset 0x18
 __declspec(property(get=__get__screenDisplacement, put=__set__screenDisplacement)) ::GlobalNamespace::BoolSO*  _screenDisplacement;

/// @brief Field _obstaclesQuality offset 0x20
 __declspec(property(get=__get__obstaclesQuality, put=__set__obstaclesQuality)) ::GlobalNamespace::ObstaclesQualitySO*  _obstaclesQuality;

/// @brief Field _lwCoreMaterial offset 0x28
 __declspec(property(get=__get__lwCoreMaterial, put=__set__lwCoreMaterial)) ::UnityEngine::Material*  _lwCoreMaterial;

/// @brief Field _hwCoreMaterial offset 0x30
 __declspec(property(get=__get__hwCoreMaterial, put=__set__hwCoreMaterial)) ::UnityEngine::Material*  _hwCoreMaterial;

/// @brief Field _texturedCoreMaterial offset 0x38
 __declspec(property(get=__get__texturedCoreMaterial, put=__set__texturedCoreMaterial)) ::UnityEngine::Material*  _texturedCoreMaterial;

/// @brief Field _fakeGlowLWMaterial offset 0x40
 __declspec(property(get=__get__fakeGlowLWMaterial, put=__set__fakeGlowLWMaterial)) ::UnityEngine::Material*  _fakeGlowLWMaterial;

/// @brief Field _fakeGlowTexturedMaterial offset 0x48
 __declspec(property(get=__get__fakeGlowTexturedMaterial, put=__set__fakeGlowTexturedMaterial)) ::UnityEngine::Material*  _fakeGlowTexturedMaterial;

/// @brief Field _obstacleCoreRenderer offset 0x50
 __declspec(property(get=__get__obstacleCoreRenderer, put=__set__obstacleCoreRenderer)) ::UnityEngine::Renderer*  _obstacleCoreRenderer;

/// @brief Field _obstacleFakeGlowRenderer offset 0x58
 __declspec(property(get=__get__obstacleFakeGlowRenderer, put=__set__obstacleFakeGlowRenderer)) ::UnityEngine::Renderer*  _obstacleFakeGlowRenderer;

constexpr void __set__screenDisplacement(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__screenDisplacement() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__screenDisplacement() const;

constexpr void __set__obstaclesQuality(::GlobalNamespace::ObstaclesQualitySO*  value) ;

constexpr ::GlobalNamespace::ObstaclesQualitySO* __get__obstaclesQuality() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstaclesQualitySO*> __get__obstaclesQuality() const;

constexpr void __set__lwCoreMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__lwCoreMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__lwCoreMaterial() const;

constexpr void __set__hwCoreMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__hwCoreMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__hwCoreMaterial() const;

constexpr void __set__texturedCoreMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__texturedCoreMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__texturedCoreMaterial() const;

constexpr void __set__fakeGlowLWMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__fakeGlowLWMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__fakeGlowLWMaterial() const;

constexpr void __set__fakeGlowTexturedMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__fakeGlowTexturedMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__fakeGlowTexturedMaterial() const;

constexpr void __set__obstacleCoreRenderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__obstacleCoreRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__obstacleCoreRenderer() const;

constexpr void __set__obstacleFakeGlowRenderer(::UnityEngine::Renderer*  value) ;

constexpr ::UnityEngine::Renderer* __get__obstacleFakeGlowRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> __get__obstacleFakeGlowRenderer() const;

/// @brief Method Awake addr 0x238e5b4 size 0x68 virtual false final false
inline void Awake() ;

/// @brief Method SetCoreMaterial addr 0x238e61c size 0x138 virtual false final false
inline void SetCoreMaterial(::UnityEngine::Renderer*  renderer, ::GlobalNamespace::ObstaclesQuality  obstaclesQuality) ;

/// @brief Method SetFakeGlowMaterial addr 0x238e754 size 0x3c virtual false final false
inline void SetFakeGlowMaterial(::UnityEngine::Renderer*  renderer, ::GlobalNamespace::ObstaclesQuality  obstaclesQuality) ;

static inline ::GlobalNamespace::ObstacleMaterialSetter* New_ctor() ;

/// @brief Method .ctor addr 0x238e790 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleMaterialSetter", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObstacleMaterialSetter(ObstacleMaterialSetter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleMaterialSetter", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObstacleMaterialSetter(ObstacleMaterialSetter const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ObstacleMaterialSetter()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleMaterialSetter, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleMaterialSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleMaterialSetter*, "", "ObstacleMaterialSetter");
