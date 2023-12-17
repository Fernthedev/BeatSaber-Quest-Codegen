#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LinkInfo)
// Forward declare root types
namespace UnityEngine::TextCore::Text {
struct LinkInfo;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::Text::LinkInfo);
// Type: UnityEngine.TextCore.Text::LinkInfo
namespace UnityEngine::TextCore::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13686))
// CS Name: ::UnityEngine.TextCore.Text::LinkInfo
struct CORDL_TYPE LinkInfo : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field hashCode offset 0x0
 __declspec(property(get=__get_hashCode, put=__set_hashCode)) int32_t  hashCode;

/// @brief Field linkIdFirstCharacterIndex offset 0x4
 __declspec(property(get=__get_linkIdFirstCharacterIndex, put=__set_linkIdFirstCharacterIndex)) int32_t  linkIdFirstCharacterIndex;

/// @brief Field linkIdLength offset 0x8
 __declspec(property(get=__get_linkIdLength, put=__set_linkIdLength)) int32_t  linkIdLength;

/// @brief Field linkTextfirstCharacterIndex offset 0xc
 __declspec(property(get=__get_linkTextfirstCharacterIndex, put=__set_linkTextfirstCharacterIndex)) int32_t  linkTextfirstCharacterIndex;

/// @brief Field linkTextLength offset 0x10
 __declspec(property(get=__get_linkTextLength, put=__set_linkTextLength)) int32_t  linkTextLength;

/// @brief Field linkId offset 0x18
 __declspec(property(get=__get_linkId, put=__set_linkId)) ::ArrayW<char16_t,::Array<char16_t>*>  linkId;

constexpr void __set_hashCode(int32_t  value) ;

constexpr int32_t& __get_hashCode() ;

constexpr int32_t const& __get_hashCode() const;

constexpr void __set_linkIdFirstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_linkIdFirstCharacterIndex() ;

constexpr int32_t const& __get_linkIdFirstCharacterIndex() const;

constexpr void __set_linkIdLength(int32_t  value) ;

constexpr int32_t& __get_linkIdLength() ;

constexpr int32_t const& __get_linkIdLength() const;

constexpr void __set_linkTextfirstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_linkTextfirstCharacterIndex() ;

constexpr int32_t const& __get_linkTextfirstCharacterIndex() const;

constexpr void __set_linkTextLength(int32_t  value) ;

constexpr int32_t& __get_linkTextLength() ;

constexpr int32_t const& __get_linkTextLength() const;

constexpr void __set_linkId(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_linkId() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_linkId() const;

/// @brief Method SetLinkId addr 0x2d407a0 size 0xd4 virtual false final false
inline void SetLinkId(::ArrayW<char16_t,::Array<char16_t>*>  text, int32_t  startIndex, int32_t  length) ;

// Ctor Parameters [CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkId", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }]
constexpr LinkInfo(int32_t  hashCode, int32_t  linkIdFirstCharacterIndex, int32_t  linkIdLength, int32_t  linkTextfirstCharacterIndex, int32_t  linkTextLength, ::ArrayW<char16_t,::Array<char16_t>*>  linkId) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LinkInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LinkInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::LinkInfo, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::LinkInfo, "UnityEngine.TextCore.Text", "LinkInfo");
