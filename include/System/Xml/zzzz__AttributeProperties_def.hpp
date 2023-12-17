#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AttributeProperties)
// Forward declare root types
namespace System::Xml {
struct AttributeProperties;
}
// Write type traits
MARK_VAL_T(::System::Xml::AttributeProperties);
// Type: System.Xml::AttributeProperties
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11438))
// CS Name: ::System.Xml::AttributeProperties
struct CORDL_TYPE AttributeProperties : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __AttributeProperties_Unwrapped
enum struct __AttributeProperties_Unwrapped : uint32_t {
__E_DEFAULT = static_cast<uint32_t>(0x4020100u),
__E_URI = static_cast<uint32_t>(0x40201u),
__E_BOOLEAN = static_cast<uint32_t>(0x2000402u),
__E_NAME = static_cast<uint32_t>(0x4020004u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DEFAULT value: static_cast<uint32_t>(0x4020100u)
static ::System::Xml::AttributeProperties const DEFAULT;

/// @brief Field URI value: static_cast<uint32_t>(0x40201u)
static ::System::Xml::AttributeProperties const URI;

/// @brief Field BOOLEAN value: static_cast<uint32_t>(0x2000402u)
static ::System::Xml::AttributeProperties const BOOLEAN;

/// @brief Field NAME value: static_cast<uint32_t>(0x4020004u)
static ::System::Xml::AttributeProperties const NAME;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AttributeProperties_Unwrapped () const noexcept {
return std::bit_cast<__AttributeProperties_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr AttributeProperties(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AttributeProperties(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AttributeProperties()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::AttributeProperties, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::AttributeProperties, "System.Xml", "AttributeProperties");
