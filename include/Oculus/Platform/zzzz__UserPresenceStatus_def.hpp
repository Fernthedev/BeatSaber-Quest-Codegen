#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UserPresenceStatus)
// Forward declare root types
namespace Oculus::Platform {
struct UserPresenceStatus;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::UserPresenceStatus);
// Type: Oculus.Platform::UserPresenceStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13395))
// CS Name: ::Oculus.Platform::UserPresenceStatus
struct CORDL_TYPE UserPresenceStatus : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UserPresenceStatus_Unwrapped
enum struct __UserPresenceStatus_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Online = static_cast<int32_t>(0x1),
__E_Offline = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::UserPresenceStatus const Unknown;

/// @brief Field Online value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::UserPresenceStatus const Online;

/// @brief Field Offline value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::UserPresenceStatus const Offline;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UserPresenceStatus_Unwrapped () const noexcept {
return std::bit_cast<__UserPresenceStatus_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UserPresenceStatus(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UserPresenceStatus(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UserPresenceStatus()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::UserPresenceStatus, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserPresenceStatus, "Oculus.Platform", "UserPresenceStatus");
