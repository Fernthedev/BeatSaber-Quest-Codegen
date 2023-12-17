#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OpusApplication)
// Forward declare root types
namespace UnityOpus {
struct OpusApplication;
}
// Write type traits
MARK_VAL_T(::UnityOpus::OpusApplication);
// Type: UnityOpus::OpusApplication
namespace UnityOpus {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16216))
// CS Name: ::UnityOpus::OpusApplication
struct CORDL_TYPE OpusApplication : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __OpusApplication_Unwrapped
enum struct __OpusApplication_Unwrapped : int32_t {
__E_VoIP = static_cast<int32_t>(0x800),
__E_Audio = static_cast<int32_t>(0x801),
__E_RestrictedLowDelay = static_cast<int32_t>(0x803),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field VoIP value: static_cast<int32_t>(0x800)
static ::UnityOpus::OpusApplication const VoIP;

/// @brief Field Audio value: static_cast<int32_t>(0x801)
static ::UnityOpus::OpusApplication const Audio;

/// @brief Field RestrictedLowDelay value: static_cast<int32_t>(0x803)
static ::UnityOpus::OpusApplication const RestrictedLowDelay;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusApplication_Unwrapped () const noexcept {
return std::bit_cast<__OpusApplication_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusApplication(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OpusApplication(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OpusApplication()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityOpus::OpusApplication, 0x4>, "Size mismatch!");

} // namespace end def UnityOpus
DEFINE_IL2CPP_ARG_TYPE(::UnityOpus::OpusApplication, "UnityOpus", "OpusApplication");
