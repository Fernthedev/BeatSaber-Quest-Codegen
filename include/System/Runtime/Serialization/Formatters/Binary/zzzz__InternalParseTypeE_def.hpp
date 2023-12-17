#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InternalParseTypeE)
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
struct InternalParseTypeE;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE);
// Type: System.Runtime.Serialization.Formatters.Binary::InternalParseTypeE
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3247))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::InternalParseTypeE
struct CORDL_TYPE InternalParseTypeE : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InternalParseTypeE_Unwrapped
enum struct __InternalParseTypeE_Unwrapped : int32_t {
__E_Empty = static_cast<int32_t>(0x0),
__E_SerializedStreamHeader = static_cast<int32_t>(0x1),
__E_Object = static_cast<int32_t>(0x2),
__E_Member = static_cast<int32_t>(0x3),
__E_ObjectEnd = static_cast<int32_t>(0x4),
__E_MemberEnd = static_cast<int32_t>(0x5),
__E_Headers = static_cast<int32_t>(0x6),
__E_HeadersEnd = static_cast<int32_t>(0x7),
__E_SerializedStreamHeaderEnd = static_cast<int32_t>(0x8),
__E_Envelope = static_cast<int32_t>(0x9),
__E_EnvelopeEnd = static_cast<int32_t>(0xa),
__E_Body = static_cast<int32_t>(0xb),
__E_BodyEnd = static_cast<int32_t>(0xc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Empty value: static_cast<int32_t>(0x0)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Empty;

/// @brief Field SerializedStreamHeader value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const SerializedStreamHeader;

/// @brief Field Object value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Object;

/// @brief Field Member value: static_cast<int32_t>(0x3)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Member;

/// @brief Field ObjectEnd value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const ObjectEnd;

/// @brief Field MemberEnd value: static_cast<int32_t>(0x5)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const MemberEnd;

/// @brief Field Headers value: static_cast<int32_t>(0x6)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Headers;

/// @brief Field HeadersEnd value: static_cast<int32_t>(0x7)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const HeadersEnd;

/// @brief Field SerializedStreamHeaderEnd value: static_cast<int32_t>(0x8)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const SerializedStreamHeaderEnd;

/// @brief Field Envelope value: static_cast<int32_t>(0x9)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Envelope;

/// @brief Field EnvelopeEnd value: static_cast<int32_t>(0xa)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const EnvelopeEnd;

/// @brief Field Body value: static_cast<int32_t>(0xb)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const Body;

/// @brief Field BodyEnd value: static_cast<int32_t>(0xc)
static ::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE const BodyEnd;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __InternalParseTypeE_Unwrapped () const noexcept {
return std::bit_cast<__InternalParseTypeE_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InternalParseTypeE(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InternalParseTypeE(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InternalParseTypeE()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization::Formatters::Binary
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE, "System.Runtime.Serialization.Formatters.Binary", "InternalParseTypeE");
