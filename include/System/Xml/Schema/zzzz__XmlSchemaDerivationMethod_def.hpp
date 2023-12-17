#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaDerivationMethod)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaDerivationMethod;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaDerivationMethod);
// Type: System.Xml.Schema::XmlSchemaDerivationMethod
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11724))
// CS Name: ::System.Xml.Schema::XmlSchemaDerivationMethod
struct CORDL_TYPE XmlSchemaDerivationMethod : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaDerivationMethod_Unwrapped
enum struct __XmlSchemaDerivationMethod_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_Substitution = static_cast<int32_t>(0x1),
__E_Extension = static_cast<int32_t>(0x2),
__E_Restriction = static_cast<int32_t>(0x4),
__E_List = static_cast<int32_t>(0x8),
__E_Union = static_cast<int32_t>(0x10),
__E_All = static_cast<int32_t>(0xff),
__E_None = static_cast<int32_t>(0x100),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Empty value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Empty;

/// @brief Field Substitution value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Substitution;

/// @brief Field Extension value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Extension;

/// @brief Field Restriction value: static_cast<int32_t>(0x4)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Restriction;

/// @brief Field List value: static_cast<int32_t>(0x8)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const List;

/// @brief Field Union value: static_cast<int32_t>(0x10)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const Union;

/// @brief Field All value: static_cast<int32_t>(0xff)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const All;

/// @brief Field None value: static_cast<int32_t>(0x100)
static ::System::Xml::Schema::XmlSchemaDerivationMethod const None;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaDerivationMethod_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaDerivationMethod_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaDerivationMethod(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XmlSchemaDerivationMethod(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XmlSchemaDerivationMethod()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaDerivationMethod, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaDerivationMethod, "System.Xml.Schema", "XmlSchemaDerivationMethod");
