#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaValidationFlags)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaValidationFlags;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaValidationFlags);
// Type: System.Xml.Schema::XmlSchemaValidationFlags
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11743))
// CS Name: ::System.Xml.Schema::XmlSchemaValidationFlags
struct CORDL_TYPE XmlSchemaValidationFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaValidationFlags_Unwrapped
enum struct __XmlSchemaValidationFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_ProcessInlineSchema = static_cast<int32_t>(0x1),
__E_ProcessSchemaLocation = static_cast<int32_t>(0x2),
__E_ReportValidationWarnings = static_cast<int32_t>(0x4),
__E_ProcessIdentityConstraints = static_cast<int32_t>(0x8),
__E_AllowXmlAttributes = static_cast<int32_t>(0x10),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::XmlSchemaValidationFlags const None;

/// @brief Field ProcessInlineSchema value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessInlineSchema;

/// @brief Field ProcessSchemaLocation value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessSchemaLocation;

/// @brief Field ReportValidationWarnings value: static_cast<int32_t>(0x4)
static ::System::Xml::Schema::XmlSchemaValidationFlags const ReportValidationWarnings;

/// @brief Field ProcessIdentityConstraints value: static_cast<int32_t>(0x8)
static ::System::Xml::Schema::XmlSchemaValidationFlags const ProcessIdentityConstraints;

/// @brief Field AllowXmlAttributes value: static_cast<int32_t>(0x10)
static ::System::Xml::Schema::XmlSchemaValidationFlags const AllowXmlAttributes;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaValidationFlags_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaValidationFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaValidationFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XmlSchemaValidationFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XmlSchemaValidationFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaValidationFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidationFlags, "System.Xml.Schema", "XmlSchemaValidationFlags");
