#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaContentType)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaContentType);
// Type: System.Xml.Schema::XmlSchemaContentType
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11722))
// CS Name: ::System.Xml.Schema::XmlSchemaContentType
struct CORDL_TYPE XmlSchemaContentType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaContentType_Unwrapped
enum struct __XmlSchemaContentType_Unwrapped : int32_t {
__E_TextOnly = static_cast<int32_t>(0x0),
__E_Empty = static_cast<int32_t>(0x1),
__E_ElementOnly = static_cast<int32_t>(0x2),
__E_Mixed = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field TextOnly value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::XmlSchemaContentType const TextOnly;

/// @brief Field Empty value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::XmlSchemaContentType const Empty;

/// @brief Field ElementOnly value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::XmlSchemaContentType const ElementOnly;

/// @brief Field Mixed value: static_cast<int32_t>(0x3)
static ::System::Xml::Schema::XmlSchemaContentType const Mixed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaContentType_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaContentType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaContentType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XmlSchemaContentType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XmlSchemaContentType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaContentType, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaContentType, "System.Xml.Schema", "XmlSchemaContentType");
