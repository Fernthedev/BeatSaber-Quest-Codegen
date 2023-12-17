#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightMode)
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Experimental::GlobalIllumination::LightMode);
// Type: UnityEngine.Experimental.GlobalIllumination::LightMode
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10387))
// CS Name: ::UnityEngine.Experimental.GlobalIllumination::LightMode
struct CORDL_TYPE LightMode : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __LightMode_Unwrapped
enum struct __LightMode_Unwrapped : uint8_t {
__E_Realtime = static_cast<uint8_t>(0x0u),
__E_Mixed = static_cast<uint8_t>(0x1u),
__E_Baked = static_cast<uint8_t>(0x2u),
__E_Unknown = static_cast<uint8_t>(0x3u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Realtime value: static_cast<uint8_t>(0x0u)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Realtime;

/// @brief Field Mixed value: static_cast<uint8_t>(0x1u)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Mixed;

/// @brief Field Baked value: static_cast<uint8_t>(0x2u)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Baked;

/// @brief Field Unknown value: static_cast<uint8_t>(0x3u)
static ::UnityEngine::Experimental::GlobalIllumination::LightMode const Unknown;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LightMode_Unwrapped () const noexcept {
return std::bit_cast<__LightMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr LightMode(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LightMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LightMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Experimental::GlobalIllumination::LightMode, 0x1>, "Size mismatch!");

} // namespace end def UnityEngine::Experimental::GlobalIllumination
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LightMode, "UnityEngine.Experimental.GlobalIllumination", "LightMode");
