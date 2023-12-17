#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PropertyAttributes)
// Forward declare root types
namespace System::Reflection {
struct PropertyAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::PropertyAttributes);
// Type: System.Reflection::PropertyAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3487))
// CS Name: ::System.Reflection::PropertyAttributes
struct CORDL_TYPE PropertyAttributes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PropertyAttributes_Unwrapped
enum struct __PropertyAttributes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_SpecialName = static_cast<int32_t>(0x200),
__E_RTSpecialName = static_cast<int32_t>(0x400),
__E_HasDefault = static_cast<int32_t>(0x1000),
__E_Reserved2 = static_cast<int32_t>(0x2000),
__E_Reserved3 = static_cast<int32_t>(0x4000),
__E_Reserved4 = static_cast<int32_t>(0x8000),
__E_ReservedMask = static_cast<int32_t>(0xf400),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Reflection::PropertyAttributes const None;

/// @brief Field SpecialName value: static_cast<int32_t>(0x200)
static ::System::Reflection::PropertyAttributes const SpecialName;

/// @brief Field RTSpecialName value: static_cast<int32_t>(0x400)
static ::System::Reflection::PropertyAttributes const RTSpecialName;

/// @brief Field HasDefault value: static_cast<int32_t>(0x1000)
static ::System::Reflection::PropertyAttributes const HasDefault;

/// @brief Field Reserved2 value: static_cast<int32_t>(0x2000)
static ::System::Reflection::PropertyAttributes const Reserved2;

/// @brief Field Reserved3 value: static_cast<int32_t>(0x4000)
static ::System::Reflection::PropertyAttributes const Reserved3;

/// @brief Field Reserved4 value: static_cast<int32_t>(0x8000)
static ::System::Reflection::PropertyAttributes const Reserved4;

/// @brief Field ReservedMask value: static_cast<int32_t>(0xf400)
static ::System::Reflection::PropertyAttributes const ReservedMask;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PropertyAttributes_Unwrapped () const noexcept {
return std::bit_cast<__PropertyAttributes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PropertyAttributes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PropertyAttributes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PropertyAttributes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::PropertyAttributes, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PropertyAttributes, "System.Reflection", "PropertyAttributes");
