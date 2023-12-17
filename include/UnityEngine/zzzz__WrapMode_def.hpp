#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrapMode)
// Forward declare root types
namespace UnityEngine {
struct WrapMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::WrapMode);
// Type: UnityEngine::WrapMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10042))
// CS Name: ::UnityEngine::WrapMode
struct CORDL_TYPE WrapMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WrapMode_Unwrapped
enum struct __WrapMode_Unwrapped : int32_t {
__E_Once = static_cast<int32_t>(0x1),
__E_Loop = static_cast<int32_t>(0x2),
__E_PingPong = static_cast<int32_t>(0x4),
__E_Default = static_cast<int32_t>(0x0),
__E_ClampForever = static_cast<int32_t>(0x8),
__E_Clamp = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Once value: static_cast<int32_t>(0x1)
static ::UnityEngine::WrapMode const Once;

/// @brief Field Loop value: static_cast<int32_t>(0x2)
static ::UnityEngine::WrapMode const Loop;

/// @brief Field PingPong value: static_cast<int32_t>(0x4)
static ::UnityEngine::WrapMode const PingPong;

/// @brief Field Default value: static_cast<int32_t>(0x0)
static ::UnityEngine::WrapMode const Default;

/// @brief Field ClampForever value: static_cast<int32_t>(0x8)
static ::UnityEngine::WrapMode const ClampForever;

/// @brief Field Clamp value: static_cast<int32_t>(0x1)
static ::UnityEngine::WrapMode const Clamp;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __WrapMode_Unwrapped () const noexcept {
return std::bit_cast<__WrapMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WrapMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WrapMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WrapMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::WrapMode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WrapMode, "UnityEngine", "WrapMode");
