#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClientCertificateOption)
// Forward declare root types
namespace System::Net::Http {
struct ClientCertificateOption;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::ClientCertificateOption);
// Type: System.Net.Http::ClientCertificateOption
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14641))
// CS Name: ::System.Net.Http::ClientCertificateOption
struct CORDL_TYPE ClientCertificateOption : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClientCertificateOption_Unwrapped
enum struct __ClientCertificateOption_Unwrapped : int32_t {
__E_Manual = static_cast<int32_t>(0x0),
__E_Automatic = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Manual value: static_cast<int32_t>(0x0)
static ::System::Net::Http::ClientCertificateOption const Manual;

/// @brief Field Automatic value: static_cast<int32_t>(0x1)
static ::System::Net::Http::ClientCertificateOption const Automatic;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ClientCertificateOption_Unwrapped () const noexcept {
return std::bit_cast<__ClientCertificateOption_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ClientCertificateOption(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ClientCertificateOption(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ClientCertificateOption()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::ClientCertificateOption, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Http
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::ClientCertificateOption, "System.Net.Http", "ClientCertificateOption");
