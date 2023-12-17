#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PInfo)
// Forward declare root types
namespace System::Reflection {
struct PInfo;
}
// Write type traits
MARK_VAL_T(::System::Reflection::PInfo);
// Type: System.Reflection::PInfo
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3528))
// CS Name: ::System.Reflection::PInfo
struct CORDL_TYPE PInfo : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PInfo_Unwrapped
enum struct __PInfo_Unwrapped : int32_t {
__E_Attributes = static_cast<int32_t>(0x1),
__E_GetMethod = static_cast<int32_t>(0x2),
__E_SetMethod = static_cast<int32_t>(0x4),
__E_ReflectedType = static_cast<int32_t>(0x8),
__E_DeclaringType = static_cast<int32_t>(0x10),
__E_Name = static_cast<int32_t>(0x20),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Attributes value: static_cast<int32_t>(0x1)
static ::System::Reflection::PInfo const Attributes;

/// @brief Field GetMethod value: static_cast<int32_t>(0x2)
static ::System::Reflection::PInfo const GetMethod;

/// @brief Field SetMethod value: static_cast<int32_t>(0x4)
static ::System::Reflection::PInfo const SetMethod;

/// @brief Field ReflectedType value: static_cast<int32_t>(0x8)
static ::System::Reflection::PInfo const ReflectedType;

/// @brief Field DeclaringType value: static_cast<int32_t>(0x10)
static ::System::Reflection::PInfo const DeclaringType;

/// @brief Field Name value: static_cast<int32_t>(0x20)
static ::System::Reflection::PInfo const Name;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __PInfo_Unwrapped () const noexcept {
return std::bit_cast<__PInfo_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PInfo(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit PInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 PInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::PInfo, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::PInfo, "System.Reflection", "PInfo");
