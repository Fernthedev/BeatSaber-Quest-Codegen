#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusSignal)
// Forward declare root types
namespace UnityOpus {
struct OpusSignal;
}
// Write type traits
MARK_VAL_T(::UnityOpus::OpusSignal);
// Type: UnityOpus::OpusSignal
namespace UnityOpus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16217))
// CS Name: ::UnityOpus::OpusSignal
struct CORDL_TYPE OpusSignal : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusSignal_Unwrapped
enum struct __OpusSignal_Unwrapped : int32_t {
__E_Auto = static_cast<int32_t>(0xfffffc18),
__E_Voice = static_cast<int32_t>(0xbb9),
__E_Music = static_cast<int32_t>(0xbba),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Auto value: static_cast<int32_t>(0xfffffc18)
static ::UnityOpus::OpusSignal const Auto;

/// @brief Field Voice value: static_cast<int32_t>(0xbb9)
static ::UnityOpus::OpusSignal const Voice;

/// @brief Field Music value: static_cast<int32_t>(0xbba)
static ::UnityOpus::OpusSignal const Music;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusSignal_Unwrapped () const noexcept {
return std::bit_cast<__OpusSignal_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusSignal(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OpusSignal(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OpusSignal()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::OpusSignal, 0x4>, "Size mismatch!");

} // namespace end def UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::OpusSignal, "UnityOpus", "OpusSignal");
