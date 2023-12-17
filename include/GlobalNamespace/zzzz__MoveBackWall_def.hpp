#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MoveBackWall)
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveBackWall;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MoveBackWall);
// Type: ::MoveBackWall
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5269))
// CS Name: ::MoveBackWall*
class CORDL_TYPE MoveBackWall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _fadeInRegion offset 0x18
 __declspec(property(get=__get__fadeInRegion, put=__set__fadeInRegion)) float_t  _fadeInRegion;

/// @brief Field _meshRenderer offset 0x20
 __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer)) ::UnityEngine::MeshRenderer*  _meshRenderer;

/// @brief Field _playerTransforms offset 0x28
 __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms)) ::GlobalNamespace::PlayerTransforms*  _playerTransforms;

/// @brief Field _thisZ offset 0x30
 __declspec(property(get=__get__thisZ, put=__set__thisZ)) float_t  _thisZ;

/// @brief Field _isVisible offset 0x34
 __declspec(property(get=__get__isVisible, put=__set__isVisible)) bool  _isVisible;

/// @brief Field _material offset 0x38
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

constexpr void __set__fadeInRegion(float_t  value) ;

constexpr float_t& __get__fadeInRegion() ;

constexpr float_t const& __get__fadeInRegion() const;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get__meshRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get__meshRenderer() const;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms*  value) ;

constexpr ::GlobalNamespace::PlayerTransforms* __get__playerTransforms() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerTransforms*> __get__playerTransforms() const;

constexpr void __set__thisZ(float_t  value) ;

constexpr float_t& __get__thisZ() ;

constexpr float_t const& __get__thisZ() const;

constexpr void __set__isVisible(bool  value) ;

constexpr bool& __get__isVisible() ;

constexpr bool const& __get__isVisible() const;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

/// @brief Method Start addr 0x225fc68 size 0x54 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x225fcbc size 0xbc virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::MoveBackWall* New_ctor() ;

/// @brief Method .ctor addr 0x225fd78 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveBackWall(MoveBackWall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveBackWall(MoveBackWall const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MoveBackWall()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveBackWall, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveBackWall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveBackWall*, "", "MoveBackWall");
