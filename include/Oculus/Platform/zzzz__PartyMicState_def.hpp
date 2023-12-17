#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyMicState)
// Forward declare root types
namespace Oculus::Platform {
struct PartyMicState;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PartyMicState);
// Type: Oculus.Platform::PartyMicState
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13344))
// CS Name: ::Oculus.Platform::PartyMicState
struct CORDL_TYPE PartyMicState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PartyMicState_Unwrapped
enum struct __PartyMicState_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Party = static_cast<int32_t>(0x1),
__E_App = static_cast<int32_t>(0x2),
__E_Mute = static_cast<int32_t>(0x3),
__E_Inactive = static_cast<int32_t>(0x4),
__E_InputShared = static_cast<int32_t>(0x5),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::PartyMicState const Unknown;

/// @brief Field Party value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::PartyMicState const Party;

/// @brief Field App value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::PartyMicState const App;

/// @brief Field Mute value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::PartyMicState const Mute;

/// @brief Field Inactive value: static_cast<int32_t>(0x4)
static ::Oculus::Platform::PartyMicState const Inactive;

/// @brief Field InputShared value: static_cast<int32_t>(0x5)
static ::Oculus::Platform::PartyMicState const InputShared;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PartyMicState_Unwrapped () const noexcept {
return std::bit_cast<__PartyMicState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PartyMicState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PartyMicState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PartyMicState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PartyMicState, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PartyMicState, "Oculus.Platform", "PartyMicState");
