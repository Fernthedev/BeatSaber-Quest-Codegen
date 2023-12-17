#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MonoSslPolicyErrors)
// Forward declare root types
namespace Mono::Security::Interface {
struct MonoSslPolicyErrors;
}
// Write type traits
MARK_VAL_T(::Mono::Security::Interface::MonoSslPolicyErrors);
// Type: Mono.Security.Interface::MonoSslPolicyErrors
namespace Mono::Security::Interface {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13779))
// CS Name: ::Mono.Security.Interface::MonoSslPolicyErrors
struct CORDL_TYPE MonoSslPolicyErrors : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MonoSslPolicyErrors_Unwrapped
enum struct __MonoSslPolicyErrors_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_RemoteCertificateNotAvailable = static_cast<int32_t>(0x1),
__E_RemoteCertificateNameMismatch = static_cast<int32_t>(0x2),
__E_RemoteCertificateChainErrors = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::Mono::Security::Interface::MonoSslPolicyErrors const None;

/// @brief Field RemoteCertificateNotAvailable value: static_cast<int32_t>(0x1)
static ::Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateNotAvailable;

/// @brief Field RemoteCertificateNameMismatch value: static_cast<int32_t>(0x2)
static ::Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateNameMismatch;

/// @brief Field RemoteCertificateChainErrors value: static_cast<int32_t>(0x4)
static ::Mono::Security::Interface::MonoSslPolicyErrors const RemoteCertificateChainErrors;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MonoSslPolicyErrors_Unwrapped () const noexcept {
return std::bit_cast<__MonoSslPolicyErrors_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MonoSslPolicyErrors(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MonoSslPolicyErrors(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MonoSslPolicyErrors()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Interface::MonoSslPolicyErrors, 0x4>, "Size mismatch!");

} // namespace end def Mono::Security::Interface
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoSslPolicyErrors, "Mono.Security.Interface", "MonoSslPolicyErrors");
