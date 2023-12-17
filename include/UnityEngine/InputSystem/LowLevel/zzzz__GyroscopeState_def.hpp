#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GyroscopeState)
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateTypeInfo;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct GyroscopeState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::LowLevel::GyroscopeState);
// Type: UnityEngine.InputSystem.LowLevel::GyroscopeState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6509))
// CS Name: ::UnityEngine.InputSystem.LowLevel::GyroscopeState
struct CORDL_TYPE GyroscopeState : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field angularVelocity offset 0x0
 __declspec(property(get=__get_angularVelocity, put=__set_angularVelocity)) ::UnityEngine::Vector3  angularVelocity;

 __declspec(property(get=get_format)) ::UnityEngine::InputSystem::Utilities::FourCC  format;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateTypeInfo*() ;

constexpr void __set_angularVelocity(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_angularVelocity() ;

constexpr ::UnityEngine::Vector3 const& __get_angularVelocity() const;

/// @brief Method get_kFormat addr 0x2ae8bdc size 0x30 virtual false final false
static inline ::UnityEngine::InputSystem::Utilities::FourCC get_kFormat() ;

/// @brief Method get_format addr 0x2ae8c0c size 0x30 virtual true final true
inline ::UnityEngine::InputSystem::Utilities::FourCC get_format() ;

// Ctor Parameters [CppParam { name: "angularVelocity", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr GyroscopeState(::UnityEngine::Vector3  angularVelocity) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GyroscopeState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GyroscopeState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::LowLevel::GyroscopeState, 0xc>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::GyroscopeState, "UnityEngine.InputSystem.LowLevel", "GyroscopeState");
