#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PoseState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
struct PoseState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::XR::PoseState);
// Type: UnityEngine.InputSystem.XR::PoseState
namespace UnityEngine::InputSystem::XR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6322))
// CS Name: ::UnityEngine.InputSystem.XR::PoseState
struct CORDL_TYPE PoseState : public ::bs_hook::ValueTypeWrapper<0x3c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x3c};

/// @brief Field kSizeInBytes offset 0x0
static constexpr int32_t  kSizeInBytes{static_cast<int32_t>(0x3c)};

/// @brief Field isTracked offset 0x0
 __declspec(property(get=__get_isTracked, put=__set_isTracked)) bool  isTracked;

/// @brief Field trackingState offset 0x4
 __declspec(property(get=__get_trackingState, put=__set_trackingState)) ::UnityEngine::XR::InputTrackingState  trackingState;

/// @brief Field position offset 0x8
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation offset 0x14
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field velocity offset 0x24
 __declspec(property(get=__get_velocity, put=__set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Field angularVelocity offset 0x30
 __declspec(property(get=__get_angularVelocity, put=__set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_isTracked(bool  value) ;

constexpr bool& __get_isTracked() ;

constexpr bool const& __get_isTracked() const;

constexpr void __set_trackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr ::UnityEngine::XR::InputTrackingState& __get_trackingState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __get_trackingState() const;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

constexpr void __set_velocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_velocity() ;

constexpr ::UnityEngine::Vector3 const& __get_velocity() const;

constexpr void __set_angularVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_angularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_angularVelocity() const;

/// @brief Method get_format addr 0x2ac5264 size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method .ctor addr 0x2ac5294 size 0x40 virtual false final false
inline void _ctor(bool  isTracked, ::UnityEngine::XR::InputTrackingState  trackingState, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) ;

// Ctor Parameters [CppParam { name: "isTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "trackingState", ty: "::UnityEngine::XR::InputTrackingState", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "velocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr PoseState(bool  isTracked, ::UnityEngine::XR::InputTrackingState  trackingState, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angularVelocity) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PoseState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x3c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PoseState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::XR::PoseState, 0x3c>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::PoseState, "UnityEngine.InputSystem.XR", "PoseState");
