#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LinearAccelerationState)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct LinearAccelerationState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::LinearAccelerationState);
// Type: UnityEngine.InputSystem.LowLevel::LinearAccelerationState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6512))
// CS Name: ::UnityEngine.InputSystem.LowLevel::LinearAccelerationState
struct CORDL_TYPE LinearAccelerationState : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field acceleration offset 0x0
 __declspec(property(get=__get_acceleration, put=__set_acceleration)) ::UnityEngine::Vector3  acceleration;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_acceleration(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_acceleration() ;

constexpr ::UnityEngine::Vector3 const& __get_acceleration() const;

/// @brief Method get_kFormat addr 0x2ae8cfc size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x2ae8d2c size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "acceleration", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr LinearAccelerationState(::UnityEngine::Vector3  acceleration) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LinearAccelerationState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LinearAccelerationState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::LinearAccelerationState, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::LinearAccelerationState, "UnityEngine.InputSystem.LowLevel", "LinearAccelerationState");
