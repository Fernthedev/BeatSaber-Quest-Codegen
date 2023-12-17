#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AndroidSensorCapabilities)
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorType;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Android::LowLevel {
struct AndroidSensorCapabilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities);
// Type: UnityEngine.InputSystem.Android.LowLevel::AndroidSensorCapabilities
namespace UnityEngine::InputSystem::Android::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6455))
// CS Name: ::UnityEngine.InputSystem.Android.LowLevel::AndroidSensorCapabilities
struct CORDL_TYPE AndroidSensorCapabilities : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field sensorType offset 0x0
 __declspec(property(get=__get_sensorType, put=__set_sensorType)) ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  sensorType;

constexpr void __set_sensorType(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  value) ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType& __get_sensorType() ;

constexpr ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType const& __get_sensorType() const;

/// @brief Method ToJson addr 0x2ae6c10 size 0x64 virtual false final false
inline ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2ae6c74 size 0xa0 virtual false final false
static inline ::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities FromJson(::StringW  json) ;

/// @brief Method ToString addr 0x2ae6d14 size 0x98 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "sensorType", ty: "::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: None }]
constexpr AndroidSensorCapabilities(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType  sensorType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AndroidSensorCapabilities(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AndroidSensorCapabilities()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidSensorCapabilities");
