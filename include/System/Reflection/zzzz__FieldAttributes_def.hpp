#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FieldAttributes)
// Forward declare root types
namespace System::Reflection {
struct FieldAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::FieldAttributes);
// Type: System.Reflection::FieldAttributes
namespace System::Reflection {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3468))
// CS Name: ::System.Reflection::FieldAttributes
struct CORDL_TYPE FieldAttributes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __FieldAttributes_Unwrapped
enum struct __FieldAttributes_Unwrapped : int32_t {
__E_FieldAccessMask = static_cast<int32_t>(0x7),
__E_PrivateScope = static_cast<int32_t>(0x0),
__E_Private = static_cast<int32_t>(0x1),
__E_FamANDAssem = static_cast<int32_t>(0x2),
__E_Assembly = static_cast<int32_t>(0x3),
__E_Family = static_cast<int32_t>(0x4),
__E_FamORAssem = static_cast<int32_t>(0x5),
__E_Public = static_cast<int32_t>(0x6),
__E_Static = static_cast<int32_t>(0x10),
__E_InitOnly = static_cast<int32_t>(0x20),
__E_Literal = static_cast<int32_t>(0x40),
__E_NotSerialized = static_cast<int32_t>(0x80),
__E_SpecialName = static_cast<int32_t>(0x200),
__E_PinvokeImpl = static_cast<int32_t>(0x2000),
__E_RTSpecialName = static_cast<int32_t>(0x400),
__E_HasFieldMarshal = static_cast<int32_t>(0x1000),
__E_HasDefault = static_cast<int32_t>(0x8000),
__E_HasFieldRVA = static_cast<int32_t>(0x100),
__E_ReservedMask = static_cast<int32_t>(0x9500),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FieldAccessMask value: static_cast<int32_t>(0x7)
static ::System::Reflection::FieldAttributes const FieldAccessMask;

/// @brief Field PrivateScope value: static_cast<int32_t>(0x0)
static ::System::Reflection::FieldAttributes const PrivateScope;

/// @brief Field Private value: static_cast<int32_t>(0x1)
static ::System::Reflection::FieldAttributes const Private;

/// @brief Field FamANDAssem value: static_cast<int32_t>(0x2)
static ::System::Reflection::FieldAttributes const FamANDAssem;

/// @brief Field Assembly value: static_cast<int32_t>(0x3)
static ::System::Reflection::FieldAttributes const Assembly;

/// @brief Field Family value: static_cast<int32_t>(0x4)
static ::System::Reflection::FieldAttributes const Family;

/// @brief Field FamORAssem value: static_cast<int32_t>(0x5)
static ::System::Reflection::FieldAttributes const FamORAssem;

/// @brief Field Public value: static_cast<int32_t>(0x6)
static ::System::Reflection::FieldAttributes const Public;

/// @brief Field Static value: static_cast<int32_t>(0x10)
static ::System::Reflection::FieldAttributes const Static;

/// @brief Field InitOnly value: static_cast<int32_t>(0x20)
static ::System::Reflection::FieldAttributes const InitOnly;

/// @brief Field Literal value: static_cast<int32_t>(0x40)
static ::System::Reflection::FieldAttributes const Literal;

/// @brief Field NotSerialized value: static_cast<int32_t>(0x80)
static ::System::Reflection::FieldAttributes const NotSerialized;

/// @brief Field SpecialName value: static_cast<int32_t>(0x200)
static ::System::Reflection::FieldAttributes const SpecialName;

/// @brief Field PinvokeImpl value: static_cast<int32_t>(0x2000)
static ::System::Reflection::FieldAttributes const PinvokeImpl;

/// @brief Field RTSpecialName value: static_cast<int32_t>(0x400)
static ::System::Reflection::FieldAttributes const RTSpecialName;

/// @brief Field HasFieldMarshal value: static_cast<int32_t>(0x1000)
static ::System::Reflection::FieldAttributes const HasFieldMarshal;

/// @brief Field HasDefault value: static_cast<int32_t>(0x8000)
static ::System::Reflection::FieldAttributes const HasDefault;

/// @brief Field HasFieldRVA value: static_cast<int32_t>(0x100)
static ::System::Reflection::FieldAttributes const HasFieldRVA;

/// @brief Field ReservedMask value: static_cast<int32_t>(0x9500)
static ::System::Reflection::FieldAttributes const ReservedMask;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __FieldAttributes_Unwrapped () const noexcept {
return std::bit_cast<__FieldAttributes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FieldAttributes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit FieldAttributes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 FieldAttributes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::FieldAttributes, 0x4>, "Size mismatch!");

} // namespace end def System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::FieldAttributes, "System.Reflection", "FieldAttributes");
