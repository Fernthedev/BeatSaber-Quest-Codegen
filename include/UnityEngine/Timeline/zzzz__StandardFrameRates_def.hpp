#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StandardFrameRates)
// Forward declare root types
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::StandardFrameRates);
// Type: UnityEngine.Timeline::StandardFrameRates
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13941))
// CS Name: ::UnityEngine.Timeline::StandardFrameRates
struct CORDL_TYPE StandardFrameRates : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StandardFrameRates_Unwrapped
enum struct __StandardFrameRates_Unwrapped : int32_t {
__E_Fps24 = static_cast<int32_t>(0x0),
__E_Fps23_97 = static_cast<int32_t>(0x1),
__E_Fps25 = static_cast<int32_t>(0x2),
__E_Fps30 = static_cast<int32_t>(0x3),
__E_Fps29_97 = static_cast<int32_t>(0x4),
__E_Fps50 = static_cast<int32_t>(0x5),
__E_Fps60 = static_cast<int32_t>(0x6),
__E_Fps59_94 = static_cast<int32_t>(0x7),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Fps24 value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::StandardFrameRates const Fps24;

/// @brief Field Fps23_97 value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::StandardFrameRates const Fps23_97;

/// @brief Field Fps25 value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::StandardFrameRates const Fps25;

/// @brief Field Fps30 value: static_cast<int32_t>(0x3)
static ::UnityEngine::Timeline::StandardFrameRates const Fps30;

/// @brief Field Fps29_97 value: static_cast<int32_t>(0x4)
static ::UnityEngine::Timeline::StandardFrameRates const Fps29_97;

/// @brief Field Fps50 value: static_cast<int32_t>(0x5)
static ::UnityEngine::Timeline::StandardFrameRates const Fps50;

/// @brief Field Fps60 value: static_cast<int32_t>(0x6)
static ::UnityEngine::Timeline::StandardFrameRates const Fps60;

/// @brief Field Fps59_94 value: static_cast<int32_t>(0x7)
static ::UnityEngine::Timeline::StandardFrameRates const Fps59_94;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StandardFrameRates_Unwrapped () const noexcept {
return std::bit_cast<__StandardFrameRates_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StandardFrameRates(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StandardFrameRates(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StandardFrameRates()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::StandardFrameRates, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::StandardFrameRates, "UnityEngine.Timeline", "StandardFrameRates");
