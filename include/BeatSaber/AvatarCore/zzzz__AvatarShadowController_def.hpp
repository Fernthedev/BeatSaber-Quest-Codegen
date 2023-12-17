#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(AvatarShadowController)
namespace UnityEngine {
struct Vector3;
}
namespace BeatSaber::AvatarCore {
class AvatarController;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarShadowController;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarShadowController);
// Type: BeatSaber.AvatarCore::AvatarShadowController
namespace BeatSaber::AvatarCore {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15178))
// CS Name: ::BeatSaber.AvatarCore::AvatarShadowController*
class CORDL_TYPE AvatarShadowController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _spriteRenderer offset 0x18
 __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer)) ::UnityEngine::SpriteRenderer*  _spriteRenderer;

/// @brief Field _distanceScale offset 0x20
 __declspec(property(get=__get__distanceScale, put=__set__distanceScale)) float_t  _distanceScale;

/// @brief Field _scale offset 0x24
 __declspec(property(get=__get__scale, put=__set__scale)) float_t  _scale;

/// @brief Field _alpha offset 0x28
 __declspec(property(get=__get__alpha, put=__set__alpha)) float_t  _alpha;

/// @brief Field _floorYPos offset 0x2c
 __declspec(property(get=__get__floorYPos, put=__set__floorYPos)) float_t  _floorYPos;

/// @brief Field _floorYPosLocal offset 0x30
 __declspec(property(get=__get__floorYPosLocal, put=__set__floorYPosLocal)) bool  _floorYPosLocal;

/// @brief Field _avatarController offset 0x38
 __declspec(property(get=__get__avatarController, put=__set__avatarController)) ::BeatSaber::AvatarCore::AvatarController*  _avatarController;

/// @brief Field _transform offset 0x40
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__spriteRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__spriteRenderer() const;

constexpr void __set__distanceScale(float_t  value) ;

constexpr float_t& __get__distanceScale() ;

constexpr float_t const& __get__distanceScale() const;

constexpr void __set__scale(float_t  value) ;

constexpr float_t& __get__scale() ;

constexpr float_t const& __get__scale() const;

constexpr void __set__alpha(float_t  value) ;

constexpr float_t& __get__alpha() ;

constexpr float_t const& __get__alpha() const;

constexpr void __set__floorYPos(float_t  value) ;

constexpr float_t& __get__floorYPos() ;

constexpr float_t const& __get__floorYPos() const;

constexpr void __set__floorYPosLocal(bool  value) ;

constexpr bool& __get__floorYPosLocal() ;

constexpr bool const& __get__floorYPosLocal() const;

constexpr void __set__avatarController(::BeatSaber::AvatarCore::AvatarController*  value) ;

constexpr ::BeatSaber::AvatarCore::AvatarController* __get__avatarController() ;

constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarController*> __get__avatarController() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

/// @brief Method Start addr 0xe0c9a4 size 0x1c virtual false final false
inline void Start() ;

/// @brief Method Update addr 0xe0c9c0 size 0xa8 virtual false final false
inline void Update() ;

/// @brief Method FollowPosition addr 0xe0ca68 size 0xe8 virtual false final false
inline void FollowPosition(::UnityEngine::Vector3  followPosition) ;

static inline ::BeatSaber::AvatarCore::AvatarShadowController* New_ctor() ;

/// @brief Method .ctor addr 0xe0cb50 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AvatarShadowController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarShadowController(AvatarShadowController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarShadowController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarShadowController(AvatarShadowController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AvatarShadowController()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarShadowController, 0x48>, "Size mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarShadowController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarShadowController*, "BeatSaber.AvatarCore", "AvatarShadowController");
