#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagAttribute)
namespace TMPro {
struct TagValueType;
}
namespace TMPro {
struct TagUnitType;
}
// Forward declare root types
namespace TMPro {
struct RichTextTagAttribute;
}
// Write type traits
MARK_VAL_T(::TMPro::RichTextTagAttribute);
// Type: TMPro::RichTextTagAttribute
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12326))
// CS Name: ::TMPro::RichTextTagAttribute
struct CORDL_TYPE RichTextTagAttribute : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field nameHashCode offset 0x0
 __declspec(property(get=__get_nameHashCode, put=__set_nameHashCode)) int32_t  nameHashCode;

/// @brief Field valueHashCode offset 0x4
 __declspec(property(get=__get_valueHashCode, put=__set_valueHashCode)) int32_t  valueHashCode;

/// @brief Field valueType offset 0x8
 __declspec(property(get=__get_valueType, put=__set_valueType)) ::TMPro::TagValueType  valueType;

/// @brief Field valueStartIndex offset 0xc
 __declspec(property(get=__get_valueStartIndex, put=__set_valueStartIndex)) int32_t  valueStartIndex;

/// @brief Field valueLength offset 0x10
 __declspec(property(get=__get_valueLength, put=__set_valueLength)) int32_t  valueLength;

/// @brief Field unitType offset 0x14
 __declspec(property(get=__get_unitType, put=__set_unitType)) ::TMPro::TagUnitType  unitType;

constexpr void __set_nameHashCode(int32_t  value) ;

constexpr int32_t& __get_nameHashCode() ;

constexpr int32_t const& __get_nameHashCode() const;

constexpr void __set_valueHashCode(int32_t  value) ;

constexpr int32_t& __get_valueHashCode() ;

constexpr int32_t const& __get_valueHashCode() const;

constexpr void __set_valueType(::TMPro::TagValueType  value) ;

constexpr ::TMPro::TagValueType& __get_valueType() ;

constexpr ::TMPro::TagValueType const& __get_valueType() const;

constexpr void __set_valueStartIndex(int32_t  value) ;

constexpr int32_t& __get_valueStartIndex() ;

constexpr int32_t const& __get_valueStartIndex() const;

constexpr void __set_valueLength(int32_t  value) ;

constexpr int32_t& __get_valueLength() ;

constexpr int32_t const& __get_valueLength() const;

constexpr void __set_unitType(::TMPro::TagUnitType  value) ;

constexpr ::TMPro::TagUnitType& __get_unitType() ;

constexpr ::TMPro::TagUnitType const& __get_unitType() const;

// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "::TMPro::TagValueType", modifiers: "", def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unitType", ty: "::TMPro::TagUnitType", modifiers: "", def_value: None }]
constexpr RichTextTagAttribute(int32_t  nameHashCode, int32_t  valueHashCode, ::TMPro::TagValueType  valueType, int32_t  valueStartIndex, int32_t  valueLength, ::TMPro::TagUnitType  unitType) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RichTextTagAttribute(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RichTextTagAttribute()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::RichTextTagAttribute, 0x18>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::RichTextTagAttribute, "TMPro", "RichTextTagAttribute");
