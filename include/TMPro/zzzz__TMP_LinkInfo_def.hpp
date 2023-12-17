#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_LinkInfo)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
struct TMP_LinkInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_LinkInfo);
// Type: TMPro::TMP_LinkInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12319))
// CS Name: ::TMPro::TMP_LinkInfo
struct CORDL_TYPE TMP_LinkInfo : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field textComponent offset 0x0
 __declspec(property(get=__get_textComponent, put=__set_textComponent)) ::TMPro::TMP_Text*  textComponent;

/// @brief Field hashCode offset 0x8
 __declspec(property(get=__get_hashCode, put=__set_hashCode)) int32_t  hashCode;

/// @brief Field linkIdFirstCharacterIndex offset 0xc
 __declspec(property(get=__get_linkIdFirstCharacterIndex, put=__set_linkIdFirstCharacterIndex)) int32_t  linkIdFirstCharacterIndex;

/// @brief Field linkIdLength offset 0x10
 __declspec(property(get=__get_linkIdLength, put=__set_linkIdLength)) int32_t  linkIdLength;

/// @brief Field linkTextfirstCharacterIndex offset 0x14
 __declspec(property(get=__get_linkTextfirstCharacterIndex, put=__set_linkTextfirstCharacterIndex)) int32_t  linkTextfirstCharacterIndex;

/// @brief Field linkTextLength offset 0x18
 __declspec(property(get=__get_linkTextLength, put=__set_linkTextLength)) int32_t  linkTextLength;

/// @brief Field linkID offset 0x20
 __declspec(property(get=__get_linkID, put=__set_linkID)) ::ArrayW<char16_t,::Array<char16_t>*>  linkID;

constexpr void __set_textComponent(::TMPro::TMP_Text*  value) ;

constexpr ::TMPro::TMP_Text* __get_textComponent() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> __get_textComponent() const;

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

constexpr void __set_linkID(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get_linkID() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get_linkID() const;

/// @brief Method SetLinkID addr 0x2c00d7c size 0xd4 virtual false final false
inline void SetLinkID(::ArrayW<char16_t,::Array<char16_t>*>  text, int32_t  startIndex, int32_t  length) ;

/// @brief Method GetLinkText addr 0x2c00e50 size 0xdc virtual false final false
inline ::StringW GetLinkText() ;

/// @brief Method GetLinkID addr 0x2c00f2c size 0xa8 virtual false final false
inline ::StringW GetLinkID() ;

// Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text*", modifiers: "", def_value: None }, CppParam { name: "hashCode", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdFirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkIdLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextfirstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkTextLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "linkID", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }]
constexpr TMP_LinkInfo(::TMPro::TMP_Text*  textComponent, int32_t  hashCode, int32_t  linkIdFirstCharacterIndex, int32_t  linkIdLength, int32_t  linkTextfirstCharacterIndex, int32_t  linkTextLength, ::ArrayW<char16_t,::Array<char16_t>*>  linkID) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_LinkInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_LinkInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_LinkInfo, 0x28>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_LinkInfo, "TMPro", "TMP_LinkInfo");
