#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ConditionalSpriteSwitcher)
namespace GlobalNamespace {
class BoolSO;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalSpriteSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConditionalSpriteSwitcher);
// Type: ::ConditionalSpriteSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5356))
// CS Name: ::ConditionalSpriteSwitcher*
class CORDL_TYPE ConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _sprite0 offset 0x18
 __declspec(property(get=__get__sprite0, put=__set__sprite0)) ::UnityEngine::Sprite*  _sprite0;

/// @brief Field _material0 offset 0x20
 __declspec(property(get=__get__material0, put=__set__material0)) ::UnityEngine::Material*  _material0;

/// @brief Field _sprite1 offset 0x28
 __declspec(property(get=__get__sprite1, put=__set__sprite1)) ::UnityEngine::Sprite*  _sprite1;

/// @brief Field _material1 offset 0x30
 __declspec(property(get=__get__material1, put=__set__material1)) ::UnityEngine::Material*  _material1;

/// @brief Field _value offset 0x38
 __declspec(property(get=__get__value, put=__set__value)) ::GlobalNamespace::BoolSO*  _value;

/// @brief Field _spriteRenderer offset 0x40
 __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer)) ::UnityEngine::SpriteRenderer*  _spriteRenderer;

 __declspec(property(get=get_falseSprite, put=set_falseSprite)) ::UnityEngine::Sprite*  falseSprite;

 __declspec(property(get=get_trueSprite, put=set_trueSprite)) ::UnityEngine::Sprite*  trueSprite;

constexpr void __set__sprite0(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__sprite0() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__sprite0() const;

constexpr void __set__material0(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material0() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material0() const;

constexpr void __set__sprite1(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__sprite1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__sprite1() const;

constexpr void __set__material1(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__material1() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__material1() const;

constexpr void __set__value(::GlobalNamespace::BoolSO*  value) ;

constexpr ::GlobalNamespace::BoolSO* __get__value() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> __get__value() const;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__spriteRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__spriteRenderer() const;

/// @brief Method get_falseSprite addr 0x226c180 size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_falseSprite() ;

/// @brief Method set_falseSprite addr 0x226c188 size 0x8 virtual false final false
inline void set_falseSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method get_trueSprite addr 0x226c190 size 0x8 virtual false final false
inline ::UnityEngine::Sprite* get_trueSprite() ;

/// @brief Method set_trueSprite addr 0x226c198 size 0x8 virtual false final false
inline void set_trueSprite(::UnityEngine::Sprite*  value) ;

/// @brief Method Awake addr 0x226c1a0 size 0x4 virtual false final false
inline void Awake() ;

/// @brief Method Apply addr 0x226c1a4 size 0xa4 virtual false final false
inline void Apply() ;

static inline ::GlobalNamespace::ConditionalSpriteSwitcher* New_ctor() ;

/// @brief Method .ctor addr 0x226c248 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalSpriteSwitcher(ConditionalSpriteSwitcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalSpriteSwitcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalSpriteSwitcher(ConditionalSpriteSwitcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ConditionalSpriteSwitcher()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConditionalSpriteSwitcher, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConditionalSpriteSwitcher*, "", "ConditionalSpriteSwitcher");
