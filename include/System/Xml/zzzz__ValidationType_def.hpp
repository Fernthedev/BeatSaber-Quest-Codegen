#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValidationType)
// Forward declare root types
namespace System::Xml {
struct ValidationType;
}
// Write type traits
MARK_VAL_T(::System::Xml::ValidationType);
// Type: System.Xml::ValidationType
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11445))
// CS Name: ::System.Xml::ValidationType
struct CORDL_TYPE ValidationType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ValidationType_Unwrapped
enum struct __ValidationType_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Auto = static_cast<int32_t>(0x1),
__E_DTD = static_cast<int32_t>(0x2),
__E_XDR = static_cast<int32_t>(0x3),
__E_Schema = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Xml::ValidationType const None;

/// @brief Field Auto value: static_cast<int32_t>(0x1)
static ::System::Xml::ValidationType const Auto;

/// @brief Field DTD value: static_cast<int32_t>(0x2)
static ::System::Xml::ValidationType const DTD;

/// @brief Field XDR value: static_cast<int32_t>(0x3)
static ::System::Xml::ValidationType const XDR;

/// @brief Field Schema value: static_cast<int32_t>(0x4)
static ::System::Xml::ValidationType const Schema;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ValidationType_Unwrapped () const noexcept {
return std::bit_cast<__ValidationType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ValidationType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ValidationType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ValidationType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ValidationType, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidationType, "System.Xml", "ValidationType");
