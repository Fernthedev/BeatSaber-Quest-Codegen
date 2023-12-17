#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SelectMode)
// Forward declare root types
namespace System::Net::Sockets {
struct SelectMode;
}
// Write type traits
MARK_VAL_T(::System::Net::Sockets::SelectMode);
// Type: System.Net.Sockets::SelectMode
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9344))
// CS Name: ::System.Net.Sockets::SelectMode
struct CORDL_TYPE SelectMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SelectMode_Unwrapped
enum struct __SelectMode_Unwrapped : int32_t {
__E_SelectRead = static_cast<int32_t>(0x0),
__E_SelectWrite = static_cast<int32_t>(0x1),
__E_SelectError = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field SelectRead value: static_cast<int32_t>(0x0)
static ::System::Net::Sockets::SelectMode const SelectRead;

/// @brief Field SelectWrite value: static_cast<int32_t>(0x1)
static ::System::Net::Sockets::SelectMode const SelectWrite;

/// @brief Field SelectError value: static_cast<int32_t>(0x2)
static ::System::Net::Sockets::SelectMode const SelectError;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SelectMode_Unwrapped () const noexcept {
return std::bit_cast<__SelectMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SelectMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SelectMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SelectMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Sockets::SelectMode, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::SelectMode, "System.Net.Sockets", "SelectMode");
