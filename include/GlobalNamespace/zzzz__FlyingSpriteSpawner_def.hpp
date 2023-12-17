#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FlyingSpriteSpawner)
namespace GlobalNamespace {
class FlyingObjectEffect;
}
namespace GlobalNamespace {
class IFlyingObjectEffectDidFinishEvent;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class __FlyingSpriteEffect__Pool;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingSpriteSpawner;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlyingSpriteSpawner);
// Type: ::FlyingSpriteSpawner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4890))
// CS Name: ::FlyingSpriteSpawner*
class CORDL_TYPE FlyingSpriteSpawner : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _sprite offset 0x18
 __declspec(property(get=__get__sprite, put=__set__sprite)) ::UnityEngine::Sprite*  _sprite;

/// @brief Field _material offset 0x20
 __declspec(property(get=__get__material, put=__set__material)) ::UnityEngine::Material*  _material;

/// @brief Field _duration offset 0x28
 __declspec(property(get=__get__duration, put=__set__duration)) float_t  _duration;

/// @brief Field _xSpread offset 0x2c
 __declspec(property(get=__get__xSpread, put=__set__xSpread)) float_t  _xSpread;

/// @brief Field _targetYPos offset 0x30
 __declspec(property(get=__get__targetYPos, put=__set__targetYPos)) float_t  _targetYPos;

/// @brief Field _targetZPos offset 0x34
 __declspec(property(get=__get__targetZPos, put=__set__targetZPos)) float_t  _targetZPos;

/// @brief Field _color offset 0x38
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _shake offset 0x48
 __declspec(property(get=__get__shake, put=__set__shake)) bool  _shake;

/// @brief Field _flyingSpriteEffectPool offset 0x50
 __declspec(property(get=__get__flyingSpriteEffectPool, put=__set__flyingSpriteEffectPool)) ::GlobalNamespace::__FlyingSpriteEffect__Pool*  _flyingSpriteEffectPool;

/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr operator  ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept;

constexpr void __set__sprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__sprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__sprite() const;

constexpr void __set__material(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material() const;

constexpr void __set__duration(float_t  value) ;

constexpr float_t& __get__duration() ;

constexpr float_t const& __get__duration() const;

constexpr void __set__xSpread(float_t  value) ;

constexpr float_t& __get__xSpread() ;

constexpr float_t const& __get__xSpread() const;

constexpr void __set__targetYPos(float_t  value) ;

constexpr float_t& __get__targetYPos() ;

constexpr float_t const& __get__targetYPos() const;

constexpr void __set__targetZPos(float_t  value) ;

constexpr float_t& __get__targetZPos() ;

constexpr float_t const& __get__targetZPos() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__shake(bool  value) ;

constexpr bool& __get__shake() ;

constexpr bool const& __get__shake() const;

constexpr void __set__flyingSpriteEffectPool(::GlobalNamespace::__FlyingSpriteEffect__Pool*  value) ;

constexpr ::GlobalNamespace::__FlyingSpriteEffect__Pool* __get__flyingSpriteEffectPool() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingSpriteEffect__Pool*> __get__flyingSpriteEffectPool() const;

/// @brief Method SpawnFlyingSprite addr 0x23a1114 size 0x1fc virtual false final false
inline void SpawnFlyingSprite(::UnityEngine::Vector3  pos, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Quaternion  inverseRotation) ;

/// @brief Method HandleFlyingObjectEffectDidFinish addr 0x23a1df0 size 0x11c virtual true final true
inline void HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect*  flyingObjectEffect) ;

static inline ::GlobalNamespace::FlyingSpriteSpawner* New_ctor() ;

/// @brief Method .ctor addr 0x23a1f0c size 0x20 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlyingSpriteSpawner(FlyingSpriteSpawner && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlyingSpriteSpawner", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlyingSpriteSpawner(FlyingSpriteSpawner const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlyingSpriteSpawner()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlyingSpriteSpawner, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlyingSpriteSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingSpriteSpawner*, "", "FlyingSpriteSpawner");
