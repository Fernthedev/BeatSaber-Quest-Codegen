#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlOutputMethod)
// Forward declare root types
namespace System::Xml {
struct XmlOutputMethod;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlOutputMethod);
// Type: System.Xml::XmlOutputMethod
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11492))
// CS Name: ::System.Xml::XmlOutputMethod
struct CORDL_TYPE XmlOutputMethod : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XmlOutputMethod_Unwrapped
enum struct __XmlOutputMethod_Unwrapped : int32_t {
__E_Xml = static_cast<int32_t>(0x0),
__E_Html = static_cast<int32_t>(0x1),
__E_Text = static_cast<int32_t>(0x2),
__E_AutoDetect = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Xml value: static_cast<int32_t>(0x0)
static ::System::Xml::XmlOutputMethod const Xml;

/// @brief Field Html value: static_cast<int32_t>(0x1)
static ::System::Xml::XmlOutputMethod const Html;

/// @brief Field Text value: static_cast<int32_t>(0x2)
static ::System::Xml::XmlOutputMethod const Text;

/// @brief Field AutoDetect value: static_cast<int32_t>(0x3)
static ::System::Xml::XmlOutputMethod const AutoDetect;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XmlOutputMethod_Unwrapped () const noexcept {
return std::bit_cast<__XmlOutputMethod_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XmlOutputMethod(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XmlOutputMethod(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XmlOutputMethod()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlOutputMethod, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlOutputMethod, "System.Xml", "XmlOutputMethod");
