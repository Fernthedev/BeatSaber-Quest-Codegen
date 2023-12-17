#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WriteState)
// Forward declare root types
namespace System::Xml {
struct WriteState;
}
// Write type traits
MARK_VAL_T(::System::Xml::WriteState);
// Type: System.Xml::WriteState
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11490))
// CS Name: ::System.Xml::WriteState
struct CORDL_TYPE WriteState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __WriteState_Unwrapped
enum struct __WriteState_Unwrapped : int32_t {
__E_Start = static_cast<int32_t>(0x0),
__E_Prolog = static_cast<int32_t>(0x1),
__E_Element = static_cast<int32_t>(0x2),
__E_Attribute = static_cast<int32_t>(0x3),
__E_Content = static_cast<int32_t>(0x4),
__E_Closed = static_cast<int32_t>(0x5),
__E_Error = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Start value: static_cast<int32_t>(0x0)
static ::System::Xml::WriteState const Start;

/// @brief Field Prolog value: static_cast<int32_t>(0x1)
static ::System::Xml::WriteState const Prolog;

/// @brief Field Element value: static_cast<int32_t>(0x2)
static ::System::Xml::WriteState const Element;

/// @brief Field Attribute value: static_cast<int32_t>(0x3)
static ::System::Xml::WriteState const Attribute;

/// @brief Field Content value: static_cast<int32_t>(0x4)
static ::System::Xml::WriteState const Content;

/// @brief Field Closed value: static_cast<int32_t>(0x5)
static ::System::Xml::WriteState const Closed;

/// @brief Field Error value: static_cast<int32_t>(0x6)
static ::System::Xml::WriteState const Error;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __WriteState_Unwrapped () const noexcept {
return std::bit_cast<__WriteState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WriteState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit WriteState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 WriteState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::WriteState, 0x4>, "Size mismatch!");

} // namespace end def System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::WriteState, "System.Xml", "WriteState");
