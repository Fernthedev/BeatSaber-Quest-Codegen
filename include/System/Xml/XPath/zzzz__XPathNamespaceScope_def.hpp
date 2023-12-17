#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNamespaceScope)
// Forward declare root types
namespace System::Xml::XPath {
struct XPathNamespaceScope;
}
// Write type traits
MARK_VAL_T(::System::Xml::XPath::XPathNamespaceScope);
// Type: System.Xml.XPath::XPathNamespaceScope
namespace System::Xml::XPath {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11581))
// CS Name: ::System.Xml.XPath::XPathNamespaceScope
struct CORDL_TYPE XPathNamespaceScope : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XPathNamespaceScope_Unwrapped
enum struct __XPathNamespaceScope_Unwrapped : int32_t {
__E_All = static_cast<int32_t>(0x0),
__E_ExcludeXml = static_cast<int32_t>(0x1),
__E_Local = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field All value: static_cast<int32_t>(0x0)
static ::System::Xml::XPath::XPathNamespaceScope const All;

/// @brief Field ExcludeXml value: static_cast<int32_t>(0x1)
static ::System::Xml::XPath::XPathNamespaceScope const ExcludeXml;

/// @brief Field Local value: static_cast<int32_t>(0x2)
static ::System::Xml::XPath::XPathNamespaceScope const Local;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XPathNamespaceScope_Unwrapped () const noexcept {
return std::bit_cast<__XPathNamespaceScope_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XPathNamespaceScope(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XPathNamespaceScope(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XPathNamespaceScope()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNamespaceScope, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::XPath
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNamespaceScope, "System.Xml.XPath", "XPathNamespaceScope");
