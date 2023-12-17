#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TubeLightBehaviour)
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class DirectionalLight;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct __TubeLightBehaviour__ParameterType;
}
namespace UnityEngine::Playables {
struct FrameData;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TubeLightBehaviour__ParameterType;
}
namespace GlobalNamespace {
class TubeLightBehaviour;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TubeLightBehaviour__ParameterType);
MARK_REF_PTR_T(::GlobalNamespace::TubeLightBehaviour);
// Type: ::ParameterType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6021))
// CS Name: ::TubeLightBehaviour::ParameterType
struct CORDL_TYPE __TubeLightBehaviour__ParameterType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TubeLightBehaviour__ParameterType_Unwrapped
enum struct ____TubeLightBehaviour__ParameterType_Unwrapped : int32_t {
__E_Values = static_cast<int32_t>(0x0),
__E_References = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Values value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__TubeLightBehaviour__ParameterType const Values;

/// @brief Field References value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__TubeLightBehaviour__ParameterType const References;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TubeLightBehaviour__ParameterType_Unwrapped () const noexcept {
return std::bit_cast<____TubeLightBehaviour__ParameterType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TubeLightBehaviour__ParameterType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TubeLightBehaviour__ParameterType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TubeLightBehaviour__ParameterType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TubeLightBehaviour__ParameterType, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TubeLightBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6022))
// CS Name: ::TubeLightBehaviour*
class CORDL_TYPE TubeLightBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
using ParameterType = ::GlobalNamespace::__TubeLightBehaviour__ParameterType;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field _noPredefinedStartValue offset 0x10
 __declspec(property(get=__get__noPredefinedStartValue, put=__set__noPredefinedStartValue)) bool  _noPredefinedStartValue;

/// @brief Field startColor offset 0x18
 __declspec(property(get=__get_startColor, put=__set_startColor)) ::GlobalNamespace::ColorSO*  startColor;

/// @brief Field endColor offset 0x20
 __declspec(property(get=__get_endColor, put=__set_endColor)) ::GlobalNamespace::ColorSO*  endColor;

/// @brief Field blend offset 0x28
 __declspec(property(get=__get_blend, put=__set_blend)) float_t  blend;

/// @brief Field _initialized offset 0x2c
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _originalColor offset 0x30
 __declspec(property(get=__get__originalColor, put=__set__originalColor)) ::UnityEngine::Color  _originalColor;

/// @brief Field _tubeLights offset 0x40
 __declspec(property(get=__get__tubeLights, put=__set__tubeLights)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  _tubeLights;

/// @brief Field _directionalLights offset 0x48
 __declspec(property(get=__get__directionalLights, put=__set__directionalLights)) ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  _directionalLights;

/// @brief Field started offset 0x50
 __declspec(property(get=__get_started, put=__set_started)) bool  started;

/// @brief Field _firstFrameColor offset 0x54
 __declspec(property(get=__get__firstFrameColor, put=__set__firstFrameColor)) ::UnityEngine::Color  _firstFrameColor;

constexpr void __set__noPredefinedStartValue(bool  value) ;

constexpr bool& __get__noPredefinedStartValue() ;

constexpr bool const& __get__noPredefinedStartValue() const;

constexpr void __set_startColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get_startColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get_startColor() const;

constexpr void __set_endColor(::GlobalNamespace::ColorSO*  value) ;

constexpr ::GlobalNamespace::ColorSO* __get_endColor() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorSO*> __get_endColor() const;

constexpr void __set_blend(float_t  value) ;

constexpr float_t& __get_blend() ;

constexpr float_t const& __get_blend() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__originalColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__originalColor() ;

constexpr ::UnityEngine::Color const& __get__originalColor() const;

constexpr void __set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__tubeLights() ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__tubeLights() const;

constexpr void __set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>& __get__directionalLights() ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*> const& __get__directionalLights() const;

constexpr void __set_started(bool  value) ;

constexpr bool& __get_started() ;

constexpr bool const& __get_started() const;

constexpr void __set__firstFrameColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__firstFrameColor() ;

constexpr ::UnityEngine::Color const& __get__firstFrameColor() const;

/// @brief Method ProcessFrame addr 0x2317dc0 size 0x408 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method OnPlayableDestroy addr 0x23181c8 size 0xcc virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

static inline ::GlobalNamespace::TubeLightBehaviour* New_ctor() ;

/// @brief Method .ctor addr 0x2318294 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TubeLightBehaviour(TubeLightBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TubeLightBehaviour(TubeLightBehaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TubeLightBehaviour()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightBehaviour, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TubeLightBehaviour__ParameterType, "", "TubeLightBehaviour/ParameterType");
NEED_NO_BOX(::GlobalNamespace::TubeLightBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightBehaviour*, "", "TubeLightBehaviour");
