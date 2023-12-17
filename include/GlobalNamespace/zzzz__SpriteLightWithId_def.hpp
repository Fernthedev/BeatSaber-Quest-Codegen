#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SpriteLightWithId)
namespace UnityEngine {
class SpriteRenderer;
}
namespace GlobalNamespace {
struct __SpriteLightWithId__MultiplyColorByAlphaType;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct __SpriteLightWithId__MultiplyColorByAlphaType;
}
namespace GlobalNamespace {
class SpriteLightWithId;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType);
MARK_REF_PTR_T(::GlobalNamespace::SpriteLightWithId);
// Type: ::MultiplyColorByAlphaType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14556))
// CS Name: ::SpriteLightWithId::MultiplyColorByAlphaType
struct CORDL_TYPE __SpriteLightWithId__MultiplyColorByAlphaType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped
enum struct ____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_BeforeApplyingMinAlpha = static_cast<int32_t>(0x1),
__E_AfterApplyingMinAlpha = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const None;

/// @brief Field BeforeApplyingMinAlpha value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const BeforeApplyingMinAlpha;

/// @brief Field AfterApplyingMinAlpha value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const AfterApplyingMinAlpha;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped () const noexcept {
return std::bit_cast<____SpriteLightWithId__MultiplyColorByAlphaType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __SpriteLightWithId__MultiplyColorByAlphaType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __SpriteLightWithId__MultiplyColorByAlphaType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __SpriteLightWithId__MultiplyColorByAlphaType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SpriteLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14557))
// CS Name: ::SpriteLightWithId*
class CORDL_TYPE SpriteLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using MultiplyColorByAlphaType = ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _spriteRenderer offset 0x30
 __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer)) ::UnityEngine::SpriteRenderer*  _spriteRenderer;

/// @brief Field _hideIfAlphaOutOfRange offset 0x38
 __declspec(property(get=__get__hideIfAlphaOutOfRange, put=__set__hideIfAlphaOutOfRange)) bool  _hideIfAlphaOutOfRange;

/// @brief Field _hideAlphaRangeMin offset 0x3c
 __declspec(property(get=__get__hideAlphaRangeMin, put=__set__hideAlphaRangeMin)) float_t  _hideAlphaRangeMin;

/// @brief Field _hideAlphaRangeMax offset 0x40
 __declspec(property(get=__get__hideAlphaRangeMax, put=__set__hideAlphaRangeMax)) float_t  _hideAlphaRangeMax;

/// @brief Field _intensity offset 0x44
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _minAlpha offset 0x48
 __declspec(property(get=__get__minAlpha, put=__set__minAlpha)) float_t  _minAlpha;

/// @brief Field _multiplyColorByAlpha offset 0x4c
 __declspec(property(get=__get__multiplyColorByAlpha, put=__set__multiplyColorByAlpha)) ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType  _multiplyColorByAlpha;

/// @brief Field _setColorOnly offset 0x50
 __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly)) bool  _setColorOnly;

/// @brief Field _setAlphaOnly offset 0x51
 __declspec(property(get=__get__setAlphaOnly, put=__set__setAlphaOnly)) bool  _setAlphaOnly;

/// @brief Field _setOnlyOnce offset 0x52
 __declspec(property(get=__get__setOnlyOnce, put=__set__setOnlyOnce)) bool  _setOnlyOnce;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__spriteRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__spriteRenderer() const;

constexpr void __set__hideIfAlphaOutOfRange(bool  value) ;

constexpr bool& __get__hideIfAlphaOutOfRange() ;

constexpr bool const& __get__hideIfAlphaOutOfRange() const;

constexpr void __set__hideAlphaRangeMin(float_t  value) ;

constexpr float_t& __get__hideAlphaRangeMin() ;

constexpr float_t const& __get__hideAlphaRangeMin() const;

constexpr void __set__hideAlphaRangeMax(float_t  value) ;

constexpr float_t& __get__hideAlphaRangeMax() ;

constexpr float_t const& __get__hideAlphaRangeMax() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__minAlpha(float_t  value) ;

constexpr float_t& __get__minAlpha() ;

constexpr float_t const& __get__minAlpha() const;

constexpr void __set__multiplyColorByAlpha(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType  value) ;

constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType& __get__multiplyColorByAlpha() ;

constexpr ::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType const& __get__multiplyColorByAlpha() const;

constexpr void __set__setColorOnly(bool  value) ;

constexpr bool& __get__setColorOnly() ;

constexpr bool const& __get__setColorOnly() const;

constexpr void __set__setAlphaOnly(bool  value) ;

constexpr bool& __get__setAlphaOnly() ;

constexpr bool const& __get__setAlphaOnly() const;

constexpr void __set__setOnlyOnce(bool  value) ;

constexpr bool& __get__setOnlyOnce() ;

constexpr bool const& __get__setOnlyOnce() const;

/// @brief Method get_color addr 0x2113eb4 size 0x1c virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x2113ed0 size 0x144 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::SpriteLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x2114014 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SpriteLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpriteLightWithId(SpriteLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpriteLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpriteLightWithId(SpriteLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpriteLightWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpriteLightWithId, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpriteLightWithId__MultiplyColorByAlphaType, "", "SpriteLightWithId/MultiplyColorByAlphaType");
NEED_NO_BOX(::GlobalNamespace::SpriteLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpriteLightWithId*, "", "SpriteLightWithId");
