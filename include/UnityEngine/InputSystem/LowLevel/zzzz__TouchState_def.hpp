#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchState)
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem {
struct TouchPhase;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::TouchState);
// Type: UnityEngine.InputSystem.LowLevel::TouchState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6514))
// CS Name: ::UnityEngine.InputSystem.LowLevel::TouchState
struct CORDL_TYPE TouchState : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field kSizeInBytes offset 0x0
static constexpr int32_t  kSizeInBytes{static_cast<int32_t>(0x38)};

/// @brief Field touchId offset 0x0
 __declspec(property(get=__get_touchId, put=__set_touchId)) int32_t  touchId;

/// @brief Field position offset 0x4
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector2  position;

/// @brief Field delta offset 0xc
 __declspec(property(get=__get_delta, put=__set_delta)) ::UnityEngine::Vector2  delta;

/// @brief Field pressure offset 0x14
 __declspec(property(get=__get_pressure, put=__set_pressure)) float_t  pressure;

/// @brief Field radius offset 0x18
 __declspec(property(get=__get_radius, put=__set_radius)) ::UnityEngine::Vector2  radius;

/// @brief Field phaseId offset 0x20
 __declspec(property(get=__get_phaseId, put=__set_phaseId)) uint8_t  phaseId;

/// @brief Field tapCount offset 0x21
 __declspec(property(get=__get_tapCount, put=__set_tapCount)) uint8_t  tapCount;

/// @brief Field displayIndex offset 0x22
 __declspec(property(get=__get_displayIndex, put=__set_displayIndex)) uint8_t  displayIndex;

/// @brief Field flags offset 0x23
 __declspec(property(get=__get_flags, put=__set_flags)) uint8_t  flags;

/// @brief Field updateStepCount offset 0x24
 __declspec(property(get=__get_updateStepCount, put=__set_updateStepCount)) uint32_t  updateStepCount;

/// @brief Field startTime offset 0x28
 __declspec(property(get=__get_startTime, put=__set_startTime)) double_t  startTime;

/// @brief Field startPosition offset 0x30
 __declspec(property(get=__get_startPosition, put=__set_startPosition)) ::UnityEngine::Vector2  startPosition;

 __declspec(property(get=get_phase, put=set_phase)) ::UnityEngine::InputSystem::TouchPhase  phase;

 __declspec(property(get=get_isNoneEndedOrCanceled)) bool  isNoneEndedOrCanceled;

 __declspec(property(get=get_isInProgress)) bool  isInProgress;

 __declspec(property(get=get_isPrimaryTouch, put=set_isPrimaryTouch)) bool  isPrimaryTouch;

 __declspec(property(get=get_isOrphanedPrimaryTouch, put=set_isOrphanedPrimaryTouch)) bool  isOrphanedPrimaryTouch;

 __declspec(property(get=get_isIndirectTouch, put=set_isIndirectTouch)) bool  isIndirectTouch;

 __declspec(property(get=get_isTap, put=set_isTap)) bool  isTap;

 __declspec(property(get=get_isTapPress, put=set_isTapPress)) bool  isTapPress;

 __declspec(property(get=get_isTapRelease, put=set_isTapRelease)) bool  isTapRelease;

 __declspec(property(get=get_beganInSameFrame, put=set_beganInSameFrame)) bool  beganInSameFrame;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_touchId(int32_t  value) ;

constexpr int32_t& __get_touchId() ;

constexpr int32_t const& __get_touchId() const;

constexpr void __set_position(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_position() ;

constexpr ::UnityEngine::Vector2 const& __get_position() const;

constexpr void __set_delta(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_delta() ;

constexpr ::UnityEngine::Vector2 const& __get_delta() const;

constexpr void __set_pressure(float_t  value) ;

constexpr float_t& __get_pressure() ;

constexpr float_t const& __get_pressure() const;

constexpr void __set_radius(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_radius() ;

constexpr ::UnityEngine::Vector2 const& __get_radius() const;

constexpr void __set_phaseId(uint8_t  value) ;

constexpr uint8_t& __get_phaseId() ;

constexpr uint8_t const& __get_phaseId() const;

constexpr void __set_tapCount(uint8_t  value) ;

constexpr uint8_t& __get_tapCount() ;

constexpr uint8_t const& __get_tapCount() const;

constexpr void __set_displayIndex(uint8_t  value) ;

constexpr uint8_t& __get_displayIndex() ;

constexpr uint8_t const& __get_displayIndex() const;

constexpr void __set_flags(uint8_t  value) ;

constexpr uint8_t& __get_flags() ;

constexpr uint8_t const& __get_flags() const;

constexpr void __set_updateStepCount(uint32_t  value) ;

constexpr uint32_t& __get_updateStepCount() ;

constexpr uint32_t const& __get_updateStepCount() const;

constexpr void __set_startTime(double_t  value) ;

constexpr double_t& __get_startTime() ;

constexpr double_t const& __get_startTime() const;

constexpr void __set_startPosition(::UnityEngine::Vector2  value) ;

constexpr ::UnityEngine::Vector2& __get_startPosition() ;

constexpr ::UnityEngine::Vector2 const& __get_startPosition() const;

/// @brief Method get_Format addr 0x2ae8d5c size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_Format() ;

/// @brief Method get_phase addr 0x2ae8d8c size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::TouchPhase get_phase() ;

/// @brief Method set_phase addr 0x2ae3720 size 0x8 virtual false final false
inline void set_phase(::UnityEngine::InputSystem::TouchPhase  value) ;

/// @brief Method get_isNoneEndedOrCanceled addr 0x2ae8d94 size 0x20 virtual false final false
inline bool get_isNoneEndedOrCanceled() ;

/// @brief Method get_isInProgress addr 0x2ae8db4 size 0x2c virtual false final false
inline bool get_isInProgress() ;

/// @brief Method get_isPrimaryTouch addr 0x2ae563c size 0xc virtual false final false
inline bool get_isPrimaryTouch() ;

/// @brief Method set_isPrimaryTouch addr 0x2ae5620 size 0x1c virtual false final false
inline void set_isPrimaryTouch(bool  value) ;

/// @brief Method get_isOrphanedPrimaryTouch addr 0x2ae8de0 size 0xc virtual false final false
inline bool get_isOrphanedPrimaryTouch() ;

/// @brief Method set_isOrphanedPrimaryTouch addr 0x2ae8dec size 0x1c virtual false final false
inline void set_isOrphanedPrimaryTouch(bool  value) ;

/// @brief Method get_isIndirectTouch addr 0x2ae8e08 size 0xc virtual false final false
inline bool get_isIndirectTouch() ;

/// @brief Method set_isIndirectTouch addr 0x2ae8e14 size 0x1c virtual false final false
inline void set_isIndirectTouch(bool  value) ;

/// @brief Method get_isTap addr 0x2ae1cb4 size 0xc virtual false final false
inline bool get_isTap() ;

/// @brief Method set_isTap addr 0x2ae5648 size 0x1c virtual false final false
inline void set_isTap(bool  value) ;

/// @brief Method get_isTapPress addr 0x2ae8e30 size 0xc virtual false final false
inline bool get_isTapPress() ;

/// @brief Method set_isTapPress addr 0x2ae8e3c size 0x1c virtual false final false
inline void set_isTapPress(bool  value) ;

/// @brief Method get_isTapRelease addr 0x2ae1280 size 0xc virtual false final false
inline bool get_isTapRelease() ;

/// @brief Method set_isTapRelease addr 0x2ae8e58 size 0x1c virtual false final false
inline void set_isTapRelease(bool  value) ;

/// @brief Method get_beganInSameFrame addr 0x2ae1538 size 0x10 virtual false final false
inline bool get_beganInSameFrame() ;

/// @brief Method set_beganInSameFrame addr 0x2ae1548 size 0x1c virtual false final false
inline void set_beganInSameFrame(bool  value) ;

/// @brief Method get_format addr 0x2ae8e74 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method ToString addr 0x2ae8ea4 size 0x2c0 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "touchId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "delta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "phaseId", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "tapCount", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "displayIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "updateStepCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "startPosition", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
constexpr TouchState(int32_t  touchId, ::UnityEngine::Vector2  position, ::UnityEngine::Vector2  delta, float_t  pressure, ::UnityEngine::Vector2  radius, uint8_t  phaseId, uint8_t  tapCount, uint8_t  displayIndex, uint8_t  flags, uint32_t  updateStepCount, double_t  startTime, ::UnityEngine::Vector2  startPosition) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TouchState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TouchState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::TouchState, 0x38>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::TouchState, "UnityEngine.InputSystem.LowLevel", "TouchState");
