#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaWhiteSpace)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaWhiteSpace);
// Type: System.Xml.Schema::XmlSchemaWhiteSpace
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11618))
// CS Name: ::System.Xml.Schema::XmlSchemaWhiteSpace
struct CORDL_TYPE XmlSchemaWhiteSpace : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlSchemaWhiteSpace_Unwrapped
enum struct __XmlSchemaWhiteSpace_Unwrapped : int32_t {
__E_Preserve = static_cast<int32_t>(0x0),
__E_Replace = static_cast<int32_t>(0x1),
__E_Collapse = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Preserve value: static_cast<int32_t>(0x0)
static ::System::Xml::Schema::XmlSchemaWhiteSpace const Preserve;

/// @brief Field Replace value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::XmlSchemaWhiteSpace const Replace;

/// @brief Field Collapse value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::XmlSchemaWhiteSpace const Collapse;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlSchemaWhiteSpace_Unwrapped () const noexcept {
return std::bit_cast<__XmlSchemaWhiteSpace_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlSchemaWhiteSpace(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XmlSchemaWhiteSpace(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XmlSchemaWhiteSpace()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaWhiteSpace, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaWhiteSpace, "System.Xml.Schema", "XmlSchemaWhiteSpace");
