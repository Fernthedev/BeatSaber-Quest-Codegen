#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FloorLightTile)
namespace UnityEngine {
struct Color;
}
namespace Ice {
class __FloorLightTile__Pool;
}
namespace Tweening {
class ColorTween;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Tweening {
class SongTimeTweeningManager;
}
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
// Forward declare root types
namespace Ice {
class FloorLightTile;
}
namespace Ice {
class __FloorLightTile__Pool;
}
// Write type traits
MARK_REF_PTR_T(::Ice::FloorLightTile);
MARK_REF_PTR_T(::Ice::__FloorLightTile__Pool);
// Type: Ice::FloorLightTile
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16168))
// CS Name: ::Ice::FloorLightTile*
class CORDL_TYPE FloorLightTile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::Ice::__FloorLightTile__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _colorSetter offset 0x18
 __declspec(property(get=__get__colorSetter, put=__set__colorSetter)) ::GlobalNamespace::MaterialPropertyBlockColorSetter*  _colorSetter;

/// @brief Field _tubeBloomPrePassLight offset 0x20
 __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight)) ::GlobalNamespace::TubeBloomPrePassLight*  _tubeBloomPrePassLight;

/// @brief Field _songTimeTweeningManager offset 0x28
 __declspec(property(get=__get__songTimeTweeningManager, put=__set__songTimeTweeningManager)) ::Tweening::SongTimeTweeningManager*  _songTimeTweeningManager;

/// @brief Field didFinish offset 0x30
 __declspec(property(get=__get_didFinish, put=__set_didFinish)) ::System::Action_1<::Ice::FloorLightTile*>*  didFinish;

/// @brief Field _fadeInTween offset 0x38
 __declspec(property(get=__get__fadeInTween, put=__set__fadeInTween)) ::Tweening::ColorTween*  _fadeInTween;

/// @brief Field _fadeOutTween offset 0x40
 __declspec(property(get=__get__fadeOutTween, put=__set__fadeOutTween)) ::Tweening::ColorTween*  _fadeOutTween;

constexpr void __set__colorSetter(::GlobalNamespace::MaterialPropertyBlockColorSetter*  value) ;

constexpr ::GlobalNamespace::MaterialPropertyBlockColorSetter* __get__colorSetter() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockColorSetter*> __get__colorSetter() const;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__tubeBloomPrePassLight() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__tubeBloomPrePassLight() const;

constexpr void __set__songTimeTweeningManager(::Tweening::SongTimeTweeningManager*  value) ;

constexpr ::Tweening::SongTimeTweeningManager* __get__songTimeTweeningManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::SongTimeTweeningManager*> __get__songTimeTweeningManager() const;

constexpr void __set_didFinish(::System::Action_1<::Ice::FloorLightTile*>*  value) ;

constexpr ::System::Action_1<::Ice::FloorLightTile*>* __get_didFinish() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Ice::FloorLightTile*>*> __get_didFinish() const;

constexpr void __set__fadeInTween(::Tweening::ColorTween*  value) ;

constexpr ::Tweening::ColorTween* __get__fadeInTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> __get__fadeInTween() const;

constexpr void __set__fadeOutTween(::Tweening::ColorTween*  value) ;

constexpr ::Tweening::ColorTween* __get__fadeOutTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::ColorTween*> __get__fadeOutTween() const;

/// @brief Method Awake addr 0x129f894 size 0x1f0 virtual false final false
inline void Awake() ;

/// @brief Method OnDestroy addr 0x129fa84 size 0xa0 virtual false final false
inline void OnDestroy() ;

/// @brief Method HighlightWithColor addr 0x129fb24 size 0xcc virtual false final false
inline void HighlightWithColor(::UnityEngine::Color  color, float_t  fadeInDuration, float_t  fadeOutDuration) ;

/// @brief Method HandleFadeInTweenOnCompleted addr 0x129fbf0 size 0x24 virtual false final false
inline void HandleFadeInTweenOnCompleted() ;

/// @brief Method HandleFadeOutTweenOnCompleted addr 0x129fc14 size 0x20 virtual false final false
inline void HandleFadeOutTweenOnCompleted() ;

/// @brief Method SetColor addr 0x129fc34 size 0x60 virtual false final false
inline void SetColor(::UnityEngine::Color  color) ;

static inline ::Ice::FloorLightTile* New_ctor() ;

/// @brief Method .ctor addr 0x129fc94 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloorLightTile(FloorLightTile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloorLightTile", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloorLightTile(FloorLightTile const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FloorLightTile()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::FloorLightTile, 0x48>, "Size mismatch!");

} // namespace end def Ice
// Type: ::Pool
namespace Ice {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 308 }), TypeDefinitionIndex(TypeDefinitionIndex(16168))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16167))
// CS Name: ::FloorLightTile::Pool*
class CORDL_TYPE __FloorLightTile__Pool : public ::Zenject::MonoMemoryPool_1<::Ice::FloorLightTile*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::Ice::FloorLightTile*>)]{};

static inline ::Ice::__FloorLightTile__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x129fc9c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__FloorLightTile__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FloorLightTile__Pool(__FloorLightTile__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FloorLightTile__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FloorLightTile__Pool(__FloorLightTile__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FloorLightTile__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Ice::__FloorLightTile__Pool, 0x40>, "Size mismatch!");

} // namespace end def Ice
NEED_NO_BOX(::Ice::FloorLightTile);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightTile*, "Ice", "FloorLightTile");
NEED_NO_BOX(::Ice::__FloorLightTile__Pool);
DEFINE_IL2CPP_ARG_TYPE(::Ice::__FloorLightTile__Pool*, "Ice", "FloorLightTile/Pool");
