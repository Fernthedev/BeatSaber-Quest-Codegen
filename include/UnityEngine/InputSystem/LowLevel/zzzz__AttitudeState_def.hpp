#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(AttitudeState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct AttitudeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::AttitudeState);
// Type: UnityEngine.InputSystem.LowLevel::AttitudeState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6511))
// CS Name: ::UnityEngine.InputSystem.LowLevel::AttitudeState
struct CORDL_TYPE AttitudeState : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field attitude offset 0x0
 __declspec(property(get=__get_attitude, put=__set_attitude)) ::UnityEngine::Quaternion  attitude;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_attitude(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_attitude() ;

constexpr ::UnityEngine::Quaternion const& __get_attitude() const;

/// @brief Method get_kFormat addr 0x2ae8c9c size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x2ae8ccc size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "attitude", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }]
constexpr AttitudeState(::UnityEngine::Quaternion  attitude) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AttitudeState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AttitudeState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::AttitudeState, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::AttitudeState, "UnityEngine.InputSystem.LowLevel", "AttitudeState");
