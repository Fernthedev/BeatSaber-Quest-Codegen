#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(RandomAnimationStartTime)
namespace UnityEngine {
class Animation;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomAnimationStartTime;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RandomAnimationStartTime);
// Type: ::RandomAnimationStartTime
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14376))
// CS Name: ::RandomAnimationStartTime*
class CORDL_TYPE RandomAnimationStartTime : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _animation offset 0x18
 __declspec(property(get=__get__animation, put=__set__animation)) ::UnityEngine::Animation*  _animation;

constexpr void __set__animation(::UnityEngine::Animation*  value) ;

constexpr ::UnityEngine::Animation* __get__animation() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animation*> __get__animation() const;

/// @brief Method Start addr 0x20f39a4 size 0x2e4 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::RandomAnimationStartTime* New_ctor() ;

/// @brief Method .ctor addr 0x20f3c88 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RandomAnimationStartTime(RandomAnimationStartTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RandomAnimationStartTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RandomAnimationStartTime(RandomAnimationStartTime const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RandomAnimationStartTime()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RandomAnimationStartTime, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RandomAnimationStartTime);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomAnimationStartTime*, "", "RandomAnimationStartTime");
