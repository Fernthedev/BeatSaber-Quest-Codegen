#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FtpLoginState)
// Forward declare root types
namespace System::Net {
struct FtpLoginState;
}
// Write type traits
MARK_VAL_T(::System::Net::FtpLoginState);
// Type: System.Net::FtpLoginState
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9039))
// CS Name: ::System.Net::FtpLoginState
struct CORDL_TYPE FtpLoginState : public ::bs_hook::EnumTypeWrapper<0x1> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint8_t;

/// @brief Nested struct __FtpLoginState_Unwrapped
enum struct __FtpLoginState_Unwrapped : uint8_t {
__E_NotLoggedIn = static_cast<uint8_t>(0x0u),
__E_LoggedIn = static_cast<uint8_t>(0x1u),
__E_LoggedInButNeedsRelogin = static_cast<uint8_t>(0x2u),
__E_ReloginFailed = static_cast<uint8_t>(0x3u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field NotLoggedIn value: static_cast<uint8_t>(0x0u)
static ::System::Net::FtpLoginState const NotLoggedIn;

/// @brief Field LoggedIn value: static_cast<uint8_t>(0x1u)
static ::System::Net::FtpLoginState const LoggedIn;

/// @brief Field LoggedInButNeedsRelogin value: static_cast<uint8_t>(0x2u)
static ::System::Net::FtpLoginState const LoggedInButNeedsRelogin;

/// @brief Field ReloginFailed value: static_cast<uint8_t>(0x3u)
static ::System::Net::FtpLoginState const ReloginFailed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint8_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FtpLoginState_Unwrapped () const noexcept {
return std::bit_cast<__FtpLoginState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x1>::instance);
}

constexpr void __set_value__(uint8_t  value) ;

constexpr uint8_t& __get_value__() ;

constexpr uint8_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr FtpLoginState(uint8_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FtpLoginState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FtpLoginState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FtpLoginState, 0x1>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpLoginState, "System.Net", "FtpLoginState");
