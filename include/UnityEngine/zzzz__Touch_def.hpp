#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Touch)
namespace UnityEngine {
struct TouchPhase;
}
namespace UnityEngine {
struct TouchType;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
struct Touch;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Touch);
// Type: UnityEngine::Touch
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15953))
// CS Name: ::UnityEngine::Touch
struct CORDL_TYPE Touch : public ::bs_hook::ValueTypeWrapper<0x44> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x44};

/// @brief Field m_FingerId offset 0x0
 __declspec(property(get=__get_m_FingerId, put=__set_m_FingerId)) int32_t  m_FingerId;

/// @brief Field m_Position offset 0x4
 __declspec(property(get=__get_m_Position, put=__set_m_Position)) ::UnityEngine::Vector2  m_Position;

/// @brief Field m_RawPosition offset 0xc
 __declspec(property(get=__get_m_RawPosition, put=__set_m_RawPosition)) ::UnityEngine::Vector2  m_RawPosition;

/// @brief Field m_PositionDelta offset 0x14
 __declspec(property(get=__get_m_PositionDelta, put=__set_m_PositionDelta)) ::UnityEngine::Vector2  m_PositionDelta;

/// @brief Field m_TimeDelta offset 0x1c
 __declspec(property(get=__get_m_TimeDelta, put=__set_m_TimeDelta)) float_t  m_TimeDelta;

/// @brief Field m_TapCount offset 0x20
 __declspec(property(get=__get_m_TapCount, put=__set_m_TapCount)) int32_t  m_TapCount;

/// @brief Field m_Phase offset 0x24
 __declspec(property(get=__get_m_Phase, put=__set_m_Phase)) ::UnityEngine::TouchPhase  m_Phase;

/// @brief Field m_Type offset 0x28
 __declspec(property(get=__get_m_Type, put=__set_m_Type)) ::UnityEngine::TouchType  m_Type;

/// @brief Field m_Pressure offset 0x2c
 __declspec(property(get=__get_m_Pressure, put=__set_m_Pressure)) float_t  m_Pressure;

/// @brief Field m_maximumPossiblePressure offset 0x30
 __declspec(property(get=__get_m_maximumPossiblePressure, put=__set_m_maximumPossiblePressure)) float_t  m_maximumPossiblePressure;

/// @brief Field m_Radius offset 0x34
 __declspec(property(get=__get_m_Radius, put=__set_m_Radius)) float_t  m_Radius;

/// @brief Field m_RadiusVariance offset 0x38
 __declspec(property(get=__get_m_RadiusVariance, put=__set_m_RadiusVariance)) float_t  m_RadiusVariance;

/// @brief Field m_AltitudeAngle offset 0x3c
 __declspec(property(get=__get_m_AltitudeAngle, put=__set_m_AltitudeAngle)) float_t  m_AltitudeAngle;

/// @brief Field m_AzimuthAngle offset 0x40
 __declspec(property(get=__get_m_AzimuthAngle, put=__set_m_AzimuthAngle)) float_t  m_AzimuthAngle;

 __declspec(property(get=get_fingerId)) int32_t  fingerId;

 __declspec(property(get=get_position, put=set_position)) ::UnityEngine::Vector2  position;

 __declspec(property(get=get_rawPosition, put=set_rawPosition)) ::UnityEngine::Vector2  rawPosition;

 __declspec(property(get=get_deltaPosition, put=set_deltaPosition)) ::UnityEngine::Vector2  deltaPosition;

 __declspec(property(get=get_deltaTime)) float_t  deltaTime;

 __declspec(property(get=get_tapCount)) int32_t  tapCount;

 __declspec(property(get=get_phase)) ::UnityEngine::TouchPhase  phase;

 __declspec(property(get=get_pressure)) float_t  pressure;

 __declspec(property(get=get_maximumPossiblePressure)) float_t  maximumPossiblePressure;

 __declspec(property(get=get_type)) ::UnityEngine::TouchType  type;

 __declspec(property(get=get_altitudeAngle)) float_t  altitudeAngle;

 __declspec(property(get=get_azimuthAngle)) float_t  azimuthAngle;

 __declspec(property(get=get_radius)) float_t  radius;

 __declspec(property(get=get_radiusVariance)) float_t  radiusVariance;

constexpr void __set_m_FingerId(int32_t  value) ;

constexpr int32_t& __get_m_FingerId() ;

constexpr int32_t const& __get_m_FingerId() const;

constexpr void __set_m_Position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_Position() ;

constexpr ::UnityEngine::Vector2 const& __get_m_Position() const;

constexpr void __set_m_RawPosition(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_RawPosition() ;

constexpr ::UnityEngine::Vector2 const& __get_m_RawPosition() const;

constexpr void __set_m_PositionDelta(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_m_PositionDelta() ;

constexpr ::UnityEngine::Vector2 const& __get_m_PositionDelta() const;

constexpr void __set_m_TimeDelta(float_t  value) ;

constexpr float_t& __get_m_TimeDelta() ;

constexpr float_t const& __get_m_TimeDelta() const;

constexpr void __set_m_TapCount(int32_t  value) ;

constexpr int32_t& __get_m_TapCount() ;

constexpr int32_t const& __get_m_TapCount() const;

constexpr void __set_m_Phase(::UnityEngine::TouchPhase  value) ;

constexpr ::UnityEngine::TouchPhase& __get_m_Phase() ;

constexpr ::UnityEngine::TouchPhase const& __get_m_Phase() const;

constexpr void __set_m_Type(::UnityEngine::TouchType  value) ;

constexpr ::UnityEngine::TouchType& __get_m_Type() ;

constexpr ::UnityEngine::TouchType const& __get_m_Type() const;

constexpr void __set_m_Pressure(float_t  value) ;

constexpr float_t& __get_m_Pressure() ;

constexpr float_t const& __get_m_Pressure() const;

constexpr void __set_m_maximumPossiblePressure(float_t  value) ;

constexpr float_t& __get_m_maximumPossiblePressure() ;

constexpr float_t const& __get_m_maximumPossiblePressure() const;

constexpr void __set_m_Radius(float_t  value) ;

constexpr float_t& __get_m_Radius() ;

constexpr float_t const& __get_m_Radius() const;

constexpr void __set_m_RadiusVariance(float_t  value) ;

constexpr float_t& __get_m_RadiusVariance() ;

constexpr float_t const& __get_m_RadiusVariance() const;

constexpr void __set_m_AltitudeAngle(float_t  value) ;

constexpr float_t& __get_m_AltitudeAngle() ;

constexpr float_t const& __get_m_AltitudeAngle() const;

constexpr void __set_m_AzimuthAngle(float_t  value) ;

constexpr float_t& __get_m_AzimuthAngle() ;

constexpr float_t const& __get_m_AzimuthAngle() const;

/// @brief Method get_fingerId addr 0x2d0e1d0 size 0x8 virtual false final false
inline int32_t get_fingerId() ;

/// @brief Method get_position addr 0x2d0e1d8 size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_position() ;

/// @brief Method set_position addr 0x2d0e1e0 size 0x8 virtual false final false
inline void set_position(::UnityEngine::Vector2  value) ;

/// @brief Method get_rawPosition addr 0x2d0e1e8 size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_rawPosition() ;

/// @brief Method set_rawPosition addr 0x2d0e1f0 size 0x8 virtual false final false
inline void set_rawPosition(::UnityEngine::Vector2  value) ;

/// @brief Method get_deltaPosition addr 0x2d0e1f8 size 0x8 virtual false final false
inline ::UnityEngine::Vector2 get_deltaPosition() ;

/// @brief Method set_deltaPosition addr 0x2d0e200 size 0x8 virtual false final false
inline void set_deltaPosition(::UnityEngine::Vector2  value) ;

/// @brief Method get_deltaTime addr 0x2d0e208 size 0x8 virtual false final false
inline float_t get_deltaTime() ;

/// @brief Method get_tapCount addr 0x2d0e210 size 0x8 virtual false final false
inline int32_t get_tapCount() ;

/// @brief Method get_phase addr 0x2d0e218 size 0x8 virtual false final false
inline ::UnityEngine::TouchPhase get_phase() ;

/// @brief Method get_pressure addr 0x2d0e220 size 0x8 virtual false final false
inline float_t get_pressure() ;

/// @brief Method get_maximumPossiblePressure addr 0x2d0e228 size 0x8 virtual false final false
inline float_t get_maximumPossiblePressure() ;

/// @brief Method get_type addr 0x2d0e230 size 0x8 virtual false final false
inline ::UnityEngine::TouchType get_type() ;

/// @brief Method get_altitudeAngle addr 0x2d0e238 size 0x8 virtual false final false
inline float_t get_altitudeAngle() ;

/// @brief Method get_azimuthAngle addr 0x2d0e240 size 0x8 virtual false final false
inline float_t get_azimuthAngle() ;

/// @brief Method get_radius addr 0x2d0e248 size 0x8 virtual false final false
inline float_t get_radius() ;

/// @brief Method get_radiusVariance addr 0x2d0e250 size 0x8 virtual false final false
inline float_t get_radiusVariance() ;

// Ctor Parameters [CppParam { name: "m_FingerId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_RawPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_PositionDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_TimeDelta", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_TapCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Phase", ty: "::UnityEngine::TouchPhase", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::UnityEngine::TouchType", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_maximumPossiblePressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_RadiusVariance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }]
constexpr Touch(int32_t  m_FingerId, ::UnityEngine::Vector2  m_Position, ::UnityEngine::Vector2  m_RawPosition, ::UnityEngine::Vector2  m_PositionDelta, float_t  m_TimeDelta, int32_t  m_TapCount, ::UnityEngine::TouchPhase  m_Phase, ::UnityEngine::TouchType  m_Type, float_t  m_Pressure, float_t  m_maximumPossiblePressure, float_t  m_Radius, float_t  m_RadiusVariance, float_t  m_AltitudeAngle, float_t  m_AzimuthAngle) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Touch(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x44>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Touch()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Touch, 0x44>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Touch, "UnityEngine", "Touch");
