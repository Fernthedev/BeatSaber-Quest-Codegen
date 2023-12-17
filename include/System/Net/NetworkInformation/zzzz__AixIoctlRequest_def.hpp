#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AixIoctlRequest)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixIoctlRequest;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixIoctlRequest);
// Type: System.Net.NetworkInformation::AixIoctlRequest
namespace System::Net::NetworkInformation {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9264))
// CS Name: ::System.Net.NetworkInformation::AixIoctlRequest
struct CORDL_TYPE AixIoctlRequest : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __AixIoctlRequest_Unwrapped
enum struct __AixIoctlRequest_Unwrapped : uint32_t {
__E_SIOCGSIZIFCONF = static_cast<uint32_t>(0x4696af0u),
__E_SIOCGIFCONF = static_cast<uint32_t>(0x106945f0u),
__E_SIOCGIFFLAGS = static_cast<uint32_t>(0x286911f0u),
__E_SIOCGIFNETMASK = static_cast<uint32_t>(0x286925f0u),
__E_SIOCGIFMTU = static_cast<uint32_t>(0x286956f0u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field SIOCGSIZIFCONF value: static_cast<uint32_t>(0x4696af0u)
static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGSIZIFCONF;

/// @brief Field SIOCGIFCONF value: static_cast<uint32_t>(0x106945f0u)
static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFCONF;

/// @brief Field SIOCGIFFLAGS value: static_cast<uint32_t>(0x286911f0u)
static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFFLAGS;

/// @brief Field SIOCGIFNETMASK value: static_cast<uint32_t>(0x286925f0u)
static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFNETMASK;

/// @brief Field SIOCGIFMTU value: static_cast<uint32_t>(0x286956f0u)
static ::System::Net::NetworkInformation::AixIoctlRequest const SIOCGIFMTU;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AixIoctlRequest_Unwrapped () const noexcept {
return std::bit_cast<__AixIoctlRequest_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AixIoctlRequest(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AixIoctlRequest(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AixIoctlRequest()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixIoctlRequest, 0x4>, "Size mismatch!");

} // namespace end def System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixIoctlRequest, "System.Net.NetworkInformation", "AixIoctlRequest");
