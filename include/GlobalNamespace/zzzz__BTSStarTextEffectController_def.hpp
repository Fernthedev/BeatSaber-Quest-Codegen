#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_4_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BTSStarTextEffectController)
namespace UnityEngine {
class Animation;
}
namespace GlobalNamespace {
class __BTSStarTextEffectController__Pool;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
namespace GlobalNamespace {
class __BTSStarTextEffectController__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BTSStarTextEffectController);
MARK_REF_PTR_T(::GlobalNamespace::__BTSStarTextEffectController__Pool);
// Type: ::BTSStarTextEffectController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3979))
// CS Name: ::BTSStarTextEffectController*
class CORDL_TYPE BTSStarTextEffectController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::__BTSStarTextEffectController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kAnimationName offset 0x0
static constexpr ::ConstString  kAnimationName{u"StarTextShort"};

/// @brief Field _transform offset 0x18
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _spriteRenderer offset 0x20
 __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer)) ::UnityEngine::SpriteRenderer*  _spriteRenderer;

/// @brief Field _animation offset 0x28
 __declspec(property(get=__get__animation, put=__set__animation)) ::UnityEngine::Animation*  _animation;

/// @brief Field _currentAnimationDuration offset 0x30
 __declspec(property(get=__get__currentAnimationDuration, put=__set__currentAnimationDuration)) float_t  _currentAnimationDuration;

 __declspec(property(get=get_animationDuration)) float_t  animationDuration;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__spriteRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__spriteRenderer() const;

constexpr void __set__animation(::UnityEngine::Animation*  value) ;

constexpr ::UnityEngine::Animation* __get__animation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> __get__animation() const;

constexpr void __set__currentAnimationDuration(float_t  value) ;

constexpr float_t& __get__currentAnimationDuration() ;

constexpr float_t const& __get__currentAnimationDuration() const;

/// @brief Method get_animationDuration addr 0x221d164 size 0x8 virtual false final false
inline float_t get_animationDuration() ;

/// @brief Method Reinitialize addr 0x221d16c size 0x108 virtual false final false
inline void Reinitialize(::UnityEngine::Sprite*  sprite, ::UnityEngine::Transform*  parentTransform, float_t  desiredAnimationLength) ;

static inline ::GlobalNamespace::BTSStarTextEffectController* New_ctor() ;

/// @brief Method .ctor addr 0x221d274 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BTSStarTextEffectController(BTSStarTextEffectController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BTSStarTextEffectController(BTSStarTextEffectController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BTSStarTextEffectController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BTSStarTextEffectController, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11053)), TypeDefinitionIndex(TypeDefinitionIndex(10291)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11053), inst: 3514 }), TypeDefinitionIndex(TypeDefinitionIndex(10276)), TypeDefinitionIndex(TypeDefinitionIndex(3979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3978))
// CS Name: ::BTSStarTextEffectController::Pool*
class CORDL_TYPE __BTSStarTextEffectController__Pool : public ::Zenject::MonoMemoryPool_4<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t,::GlobalNamespace::BTSStarTextEffectController*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_4<::UnityEngine::Sprite*,::UnityEngine::Transform*,float_t,::GlobalNamespace::BTSStarTextEffectController*>)]{};

/// @brief Method Reinitialize addr 0x221d27c size 0x14 virtual true final false
inline void Reinitialize(::UnityEngine::Sprite*  sprite, ::UnityEngine::Transform*  transform, float_t  desiredAnimationLength, ::GlobalNamespace::BTSStarTextEffectController*  starTextEffectController) ;

static inline ::GlobalNamespace::__BTSStarTextEffectController__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x221d290 size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEffectController__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BTSStarTextEffectController__Pool(__BTSStarTextEffectController__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BTSStarTextEffectController__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BTSStarTextEffectController__Pool(__BTSStarTextEffectController__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __BTSStarTextEffectController__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BTSStarTextEffectController__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BTSStarTextEffectController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BTSStarTextEffectController*, "", "BTSStarTextEffectController");
NEED_NO_BOX(::GlobalNamespace::__BTSStarTextEffectController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BTSStarTextEffectController__Pool*, "", "BTSStarTextEffectController/Pool");
