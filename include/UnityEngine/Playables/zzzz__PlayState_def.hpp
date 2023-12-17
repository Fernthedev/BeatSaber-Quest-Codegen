#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayState)
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayState);
// Type: UnityEngine.Playables::PlayState
namespace UnityEngine::Playables {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10439))
// CS Name: ::UnityEngine.Playables::PlayState
struct CORDL_TYPE PlayState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlayState_Unwrapped
enum struct __PlayState_Unwrapped : int32_t {
__E_Paused = static_cast<int32_t>(0x0),
__E_Playing = static_cast<int32_t>(0x1),
__E_Delayed = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Paused value: static_cast<int32_t>(0x0)
static ::UnityEngine::Playables::PlayState const Paused;

/// @brief Field Playing value: static_cast<int32_t>(0x1)
static ::UnityEngine::Playables::PlayState const Playing;

/// @brief Field Delayed value: static_cast<int32_t>(0x2)
static ::UnityEngine::Playables::PlayState const Delayed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayState_Unwrapped () const noexcept {
return std::bit_cast<__PlayState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PlayState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PlayState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayState, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayState, "UnityEngine.Playables", "PlayState");
