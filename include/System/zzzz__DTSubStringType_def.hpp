#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DTSubStringType)
// Forward declare root types
namespace System {
struct DTSubStringType;
}
// Write type traits
MARK_VAL_T(::System::DTSubStringType);
// Type: System::DTSubStringType
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2393))
// CS Name: ::System::DTSubStringType
struct CORDL_TYPE DTSubStringType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __DTSubStringType_Unwrapped
enum struct __DTSubStringType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Invalid = static_cast<int32_t>(0x1),
__E_Number = static_cast<int32_t>(0x2),
__E_End = static_cast<int32_t>(0x3),
__E_Other = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::System::DTSubStringType const Unknown;

/// @brief Field Invalid value: static_cast<int32_t>(0x1)
static ::System::DTSubStringType const Invalid;

/// @brief Field Number value: static_cast<int32_t>(0x2)
static ::System::DTSubStringType const Number;

/// @brief Field End value: static_cast<int32_t>(0x3)
static ::System::DTSubStringType const End;

/// @brief Field Other value: static_cast<int32_t>(0x4)
static ::System::DTSubStringType const Other;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __DTSubStringType_Unwrapped () const noexcept {
return std::bit_cast<__DTSubStringType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DTSubStringType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit DTSubStringType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 DTSubStringType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DTSubStringType, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::DTSubStringType, "System", "DTSubStringType");
