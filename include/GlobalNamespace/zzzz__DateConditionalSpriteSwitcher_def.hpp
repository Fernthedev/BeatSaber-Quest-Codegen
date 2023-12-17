#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DateConditionalSpriteSwitcher)
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class ConditionalSpriteSwitcher;
}
// Forward declare root types
namespace GlobalNamespace {
class DateConditionalSpriteSwitcher;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DateConditionalSpriteSwitcher);
// Type: ::DateConditionalSpriteSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5357))
// CS Name: ::DateConditionalSpriteSwitcher*
class CORDL_TYPE DateConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _day offset 0x18
 __declspec(property(get=__get__day, put=__set__day)) int32_t  _day;

/// @brief Field _month offset 0x1c
 __declspec(property(get=__get__month, put=__set__month)) int32_t  _month;

/// @brief Field _falseSprite offset 0x20
 __declspec(property(get=__get__falseSprite, put=__set__falseSprite)) ::UnityEngine::Sprite*  _falseSprite;

/// @brief Field _trueSprite offset 0x28
 __declspec(property(get=__get__trueSprite, put=__set__trueSprite)) ::UnityEngine::Sprite*  _trueSprite;

/// @brief Field _conditionalSpriteSwitcher offset 0x30
 __declspec(property(get=__get__conditionalSpriteSwitcher, put=__set__conditionalSpriteSwitcher)) ::GlobalNamespace::ConditionalSpriteSwitcher*  _conditionalSpriteSwitcher;

constexpr void __set__day(int32_t  value) ;

constexpr int32_t& __get__day() ;

constexpr int32_t const& __get__day() const;

constexpr void __set__month(int32_t  value) ;

constexpr int32_t& __get__month() ;

constexpr int32_t const& __get__month() const;

constexpr void __set__falseSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__falseSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__falseSprite() const;

constexpr void __set__trueSprite(::UnityEngine::Sprite*  value) ;

constexpr ::UnityEngine::Sprite* __get__trueSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> __get__trueSprite() const;

constexpr void __set__conditionalSpriteSwitcher(::GlobalNamespace::ConditionalSpriteSwitcher*  value) ;

constexpr ::GlobalNamespace::ConditionalSpriteSwitcher* __get__conditionalSpriteSwitcher() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ConditionalSpriteSwitcher*> __get__conditionalSpriteSwitcher() const;

/// @brief Method Awake addr 0x226c250 size 0xb8 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::DateConditionalSpriteSwitcher* New_ctor() ;

/// @brief Method .ctor addr 0x226c308 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DateConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DateConditionalSpriteSwitcher(DateConditionalSpriteSwitcher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DateConditionalSpriteSwitcher", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DateConditionalSpriteSwitcher(DateConditionalSpriteSwitcher const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DateConditionalSpriteSwitcher()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DateConditionalSpriteSwitcher, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DateConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DateConditionalSpriteSwitcher*, "", "DateConditionalSpriteSwitcher");
