#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_WordInfo)
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace TMPro {
struct TMP_WordInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::TMP_WordInfo);
// Type: TMPro::TMP_WordInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12320))
// CS Name: ::TMPro::TMP_WordInfo
struct CORDL_TYPE TMP_WordInfo : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field textComponent offset 0x0
 __declspec(property(get=__get_textComponent, put=__set_textComponent)) ::TMPro::TMP_Text*  textComponent;

/// @brief Field firstCharacterIndex offset 0x8
 __declspec(property(get=__get_firstCharacterIndex, put=__set_firstCharacterIndex)) int32_t  firstCharacterIndex;

/// @brief Field lastCharacterIndex offset 0xc
 __declspec(property(get=__get_lastCharacterIndex, put=__set_lastCharacterIndex)) int32_t  lastCharacterIndex;

/// @brief Field characterCount offset 0x10
 __declspec(property(get=__get_characterCount, put=__set_characterCount)) int32_t  characterCount;

constexpr void __set_textComponent(::TMPro::TMP_Text*  value) ;

constexpr ::TMPro::TMP_Text* __get_textComponent() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> __get_textComponent() const;

constexpr void __set_firstCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_firstCharacterIndex() ;

constexpr int32_t const& __get_firstCharacterIndex() const;

constexpr void __set_lastCharacterIndex(int32_t  value) ;

constexpr int32_t& __get_lastCharacterIndex() ;

constexpr int32_t const& __get_lastCharacterIndex() const;

constexpr void __set_characterCount(int32_t  value) ;

constexpr int32_t& __get_characterCount() ;

constexpr int32_t const& __get_characterCount() const;

/// @brief Method GetWord addr 0x2c00fd4 size 0xdc virtual false final false
inline ::StringW GetWord() ;

// Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text*", modifiers: "", def_value: None }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TMP_WordInfo(::TMPro::TMP_Text*  textComponent, int32_t  firstCharacterIndex, int32_t  lastCharacterIndex, int32_t  characterCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TMP_WordInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TMP_WordInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_WordInfo, 0x18>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_WordInfo, "TMPro", "TMP_WordInfo");
