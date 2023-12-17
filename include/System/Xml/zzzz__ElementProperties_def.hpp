#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ElementProperties)
// Forward declare root types
namespace System::Xml {
struct ElementProperties;
}
// Write type traits
MARK_VAL_T(::System::Xml::ElementProperties);
// Type: System.Xml::ElementProperties
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11437))
// CS Name: ::System.Xml::ElementProperties
struct CORDL_TYPE ElementProperties : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = uint32_t;

/// @brief Nested struct __ElementProperties_Unwrapped
enum struct __ElementProperties_Unwrapped : uint32_t {
__E_DEFAULT = static_cast<uint32_t>(0x4020100u),
__E_URI_PARENT = static_cast<uint32_t>(0x8040201u),
__E_BOOL_PARENT = static_cast<uint32_t>(0x10080402u),
__E_NAME_PARENT = static_cast<uint32_t>(0x20100804u),
__E_EMPTY = static_cast<uint32_t>(0x40201008u),
__E_NO_ENTITIES = static_cast<uint32_t>(0x80402010u),
__E_HEAD = static_cast<uint32_t>(0x80804020u),
__E_BLOCK_WS = static_cast<uint32_t>(0x808040u),
__E_HAS_NS = static_cast<uint32_t>(0x1008080u),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DEFAULT value: static_cast<uint32_t>(0x4020100u)
static ::System::Xml::ElementProperties const DEFAULT;

/// @brief Field URI_PARENT value: static_cast<uint32_t>(0x8040201u)
static ::System::Xml::ElementProperties const URI_PARENT;

/// @brief Field BOOL_PARENT value: static_cast<uint32_t>(0x10080402u)
static ::System::Xml::ElementProperties const BOOL_PARENT;

/// @brief Field NAME_PARENT value: static_cast<uint32_t>(0x20100804u)
static ::System::Xml::ElementProperties const NAME_PARENT;

/// @brief Field EMPTY value: static_cast<uint32_t>(0x40201008u)
static ::System::Xml::ElementProperties const EMPTY;

/// @brief Field NO_ENTITIES value: static_cast<uint32_t>(0x80402010u)
static ::System::Xml::ElementProperties const NO_ENTITIES;

/// @brief Field HEAD value: static_cast<uint32_t>(0x80804020u)
static ::System::Xml::ElementProperties const HEAD;

/// @brief Field BLOCK_WS value: static_cast<uint32_t>(0x808040u)
static ::System::Xml::ElementProperties const BLOCK_WS;

/// @brief Field HAS_NS value: static_cast<uint32_t>(0x1008080u)
static ::System::Xml::ElementProperties const HAS_NS;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) uint32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ElementProperties_Unwrapped () const noexcept {
return std::bit_cast<__ElementProperties_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(uint32_t  value) ;

constexpr uint32_t& __get_value__() ;

constexpr uint32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ElementProperties(uint32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ElementProperties(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ElementProperties()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ElementProperties, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ElementProperties, "System.Xml", "ElementProperties");
