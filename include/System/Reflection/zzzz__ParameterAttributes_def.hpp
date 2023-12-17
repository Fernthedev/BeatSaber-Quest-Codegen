#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ParameterAttributes)
// Forward declare root types
namespace System::Reflection {
struct ParameterAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::ParameterAttributes);
// Type: System.Reflection::ParameterAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3482))
// CS Name: ::System.Reflection::ParameterAttributes
struct CORDL_TYPE ParameterAttributes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ParameterAttributes_Unwrapped
enum struct __ParameterAttributes_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_In = static_cast<int32_t>(0x1),
__E_Out = static_cast<int32_t>(0x2),
__E_Lcid = static_cast<int32_t>(0x4),
__E_Retval = static_cast<int32_t>(0x8),
__E_Optional = static_cast<int32_t>(0x10),
__E_HasDefault = static_cast<int32_t>(0x1000),
__E_HasFieldMarshal = static_cast<int32_t>(0x2000),
__E_Reserved3 = static_cast<int32_t>(0x4000),
__E_Reserved4 = static_cast<int32_t>(0x8000),
__E_ReservedMask = static_cast<int32_t>(0xf000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Reflection::ParameterAttributes const None;

/// @brief Field In value: static_cast<int32_t>(0x1)
static ::System::Reflection::ParameterAttributes const In;

/// @brief Field Out value: static_cast<int32_t>(0x2)
static ::System::Reflection::ParameterAttributes const Out;

/// @brief Field Lcid value: static_cast<int32_t>(0x4)
static ::System::Reflection::ParameterAttributes const Lcid;

/// @brief Field Retval value: static_cast<int32_t>(0x8)
static ::System::Reflection::ParameterAttributes const Retval;

/// @brief Field Optional value: static_cast<int32_t>(0x10)
static ::System::Reflection::ParameterAttributes const Optional;

/// @brief Field HasDefault value: static_cast<int32_t>(0x1000)
static ::System::Reflection::ParameterAttributes const HasDefault;

/// @brief Field HasFieldMarshal value: static_cast<int32_t>(0x2000)
static ::System::Reflection::ParameterAttributes const HasFieldMarshal;

/// @brief Field Reserved3 value: static_cast<int32_t>(0x4000)
static ::System::Reflection::ParameterAttributes const Reserved3;

/// @brief Field Reserved4 value: static_cast<int32_t>(0x8000)
static ::System::Reflection::ParameterAttributes const Reserved4;

/// @brief Field ReservedMask value: static_cast<int32_t>(0xf000)
static ::System::Reflection::ParameterAttributes const ReservedMask;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ParameterAttributes_Unwrapped () const noexcept {
return std::bit_cast<__ParameterAttributes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ParameterAttributes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ParameterAttributes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ParameterAttributes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::ParameterAttributes, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ParameterAttributes, "System.Reflection", "ParameterAttributes");
