#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LevelFailedTextEffect)
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelFailedTextEffect;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelFailedTextEffect);
// Type: ::LevelFailedTextEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4865))
// CS Name: ::LevelFailedTextEffect*
class CORDL_TYPE LevelFailedTextEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _animator offset 0x18
 __declspec(property(get=__get__animator, put=__set__animator)) ::UnityEngine::Animator*  _animator;

constexpr void __set__animator(::UnityEngine::Animator*  value) ;

constexpr ::UnityEngine::Animator* __get__animator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> __get__animator() const;

/// @brief Method ShowEffect addr 0x239a248 size 0x3c virtual false final false
inline void ShowEffect() ;

static inline ::GlobalNamespace::LevelFailedTextEffect* New_ctor() ;

/// @brief Method .ctor addr 0x239a284 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextEffect", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelFailedTextEffect(LevelFailedTextEffect && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelFailedTextEffect", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelFailedTextEffect(LevelFailedTextEffect const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LevelFailedTextEffect()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelFailedTextEffect, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelFailedTextEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelFailedTextEffect*, "", "LevelFailedTextEffect");
