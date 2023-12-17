#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpCompletionOption)
// Forward declare root types
namespace System::Net::Http {
struct HttpCompletionOption;
}
// Write type traits
MARK_VAL_T(::System::Net::Http::HttpCompletionOption);
// Type: System.Net.Http::HttpCompletionOption
namespace System::Net::Http {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14645))
// CS Name: ::System.Net.Http::HttpCompletionOption
struct CORDL_TYPE HttpCompletionOption : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HttpCompletionOption_Unwrapped
enum struct __HttpCompletionOption_Unwrapped : int32_t {
__E_ResponseContentRead = static_cast<int32_t>(0x0),
__E_ResponseHeadersRead = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ResponseContentRead value: static_cast<int32_t>(0x0)
static ::System::Net::Http::HttpCompletionOption const ResponseContentRead;

/// @brief Field ResponseHeadersRead value: static_cast<int32_t>(0x1)
static ::System::Net::Http::HttpCompletionOption const ResponseHeadersRead;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HttpCompletionOption_Unwrapped () const noexcept {
return std::bit_cast<__HttpCompletionOption_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HttpCompletionOption(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HttpCompletionOption(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HttpCompletionOption()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpCompletionOption, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Http
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpCompletionOption, "System.Net.Http", "HttpCompletionOption");
