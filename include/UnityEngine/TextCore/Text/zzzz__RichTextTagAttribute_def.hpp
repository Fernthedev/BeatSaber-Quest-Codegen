#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RichTextTagAttribute)
namespace UnityEngine::TextCore::Text {
struct TagValueType;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct RichTextTagAttribute;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::RichTextTagAttribute);
// Type: UnityEngine.TextCore.Text::RichTextTagAttribute
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13708))
// CS Name: ::UnityEngine.TextCore.Text::RichTextTagAttribute
struct CORDL_TYPE RichTextTagAttribute : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field nameHashCode offset 0x0
 __declspec(property(get=__get_nameHashCode, put=__set_nameHashCode)) int32_t  nameHashCode;

/// @brief Field valueHashCode offset 0x4
 __declspec(property(get=__get_valueHashCode, put=__set_valueHashCode)) int32_t  valueHashCode;

/// @brief Field valueType offset 0x8
 __declspec(property(get=__get_valueType, put=__set_valueType)) ::UnityEngine::TextCore::Text::TagValueType  valueType;

/// @brief Field valueStartIndex offset 0xc
 __declspec(property(get=__get_valueStartIndex, put=__set_valueStartIndex)) int32_t  valueStartIndex;

/// @brief Field valueLength offset 0x10
 __declspec(property(get=__get_valueLength, put=__set_valueLength)) int32_t  valueLength;

constexpr void __set_nameHashCode(int32_t  value) ;

constexpr int32_t& __get_nameHashCode() ;

constexpr int32_t const& __get_nameHashCode() const;

constexpr void __set_valueHashCode(int32_t  value) ;

constexpr int32_t& __get_valueHashCode() ;

constexpr int32_t const& __get_valueHashCode() const;

constexpr void __set_valueType(::UnityEngine::TextCore::Text::TagValueType  value) ;

constexpr ::UnityEngine::TextCore::Text::TagValueType& __get_valueType() ;

constexpr ::UnityEngine::TextCore::Text::TagValueType const& __get_valueType() const;

constexpr void __set_valueStartIndex(int32_t  value) ;

constexpr int32_t& __get_valueStartIndex() ;

constexpr int32_t const& __get_valueStartIndex() const;

constexpr void __set_valueLength(int32_t  value) ;

constexpr int32_t& __get_valueLength() ;

constexpr int32_t const& __get_valueLength() const;

// Ctor Parameters [CppParam { name: "nameHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueHashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueType", ty: "::UnityEngine::TextCore::Text::TagValueType", modifiers: "", def_value: None }, CppParam { name: "valueStartIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueLength", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RichTextTagAttribute(int32_t  nameHashCode, int32_t  valueHashCode, ::UnityEngine::TextCore::Text::TagValueType  valueType, int32_t  valueStartIndex, int32_t  valueLength) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RichTextTagAttribute(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RichTextTagAttribute()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::RichTextTagAttribute, 0x14>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::RichTextTagAttribute, "UnityEngine.TextCore.Text", "RichTextTagAttribute");
