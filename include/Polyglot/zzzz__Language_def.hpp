#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Language)
// Forward declare root types
namespace Polyglot {
struct Language;
}
// Write type traits
MARK_VAL_T(::Polyglot::Language);
// Type: Polyglot::Language
namespace Polyglot {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15554))
// CS Name: ::Polyglot::Language
struct CORDL_TYPE Language : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Language_Unwrapped
enum struct __Language_Unwrapped : int32_t {
__E_English = static_cast<int32_t>(0x0),
__E_French = static_cast<int32_t>(0x1),
__E_Spanish = static_cast<int32_t>(0x2),
__E_German = static_cast<int32_t>(0x3),
__E_Italian = static_cast<int32_t>(0x4),
__E_Portuguese_Brazil = static_cast<int32_t>(0x5),
__E_Portuguese = static_cast<int32_t>(0x6),
__E_Russian = static_cast<int32_t>(0x7),
__E_Greek = static_cast<int32_t>(0x8),
__E_Turkish = static_cast<int32_t>(0x9),
__E_Danish = static_cast<int32_t>(0xa),
__E_Norwegian = static_cast<int32_t>(0xb),
__E_Swedish = static_cast<int32_t>(0xc),
__E_Dutch = static_cast<int32_t>(0xd),
__E_Polish = static_cast<int32_t>(0xe),
__E_Finnish = static_cast<int32_t>(0xf),
__E_Japanese = static_cast<int32_t>(0x10),
__E_Simplified_Chinese = static_cast<int32_t>(0x11),
__E_Traditional_Chinese = static_cast<int32_t>(0x12),
__E_Korean = static_cast<int32_t>(0x13),
__E_Czech = static_cast<int32_t>(0x14),
__E_Hungarian = static_cast<int32_t>(0x15),
__E_Romanian = static_cast<int32_t>(0x16),
__E_Thai = static_cast<int32_t>(0x17),
__E_Bulgarian = static_cast<int32_t>(0x18),
__E_Hebrew = static_cast<int32_t>(0x19),
__E_Arabic = static_cast<int32_t>(0x1a),
__E_Bosnian = static_cast<int32_t>(0x1b),
__E_Debug_Keys = static_cast<int32_t>(0x1c),
__E_Debug_English_Reverted = static_cast<int32_t>(0x1d),
__E_Debug_Word_With_Max_Lenght = static_cast<int32_t>(0x1e),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field English value: static_cast<int32_t>(0x0)
static ::Polyglot::Language const English;

/// @brief Field French value: static_cast<int32_t>(0x1)
static ::Polyglot::Language const French;

/// @brief Field Spanish value: static_cast<int32_t>(0x2)
static ::Polyglot::Language const Spanish;

/// @brief Field German value: static_cast<int32_t>(0x3)
static ::Polyglot::Language const German;

/// @brief Field Italian value: static_cast<int32_t>(0x4)
static ::Polyglot::Language const Italian;

/// @brief Field Portuguese_Brazil value: static_cast<int32_t>(0x5)
static ::Polyglot::Language const Portuguese_Brazil;

/// @brief Field Portuguese value: static_cast<int32_t>(0x6)
static ::Polyglot::Language const Portuguese;

/// @brief Field Russian value: static_cast<int32_t>(0x7)
static ::Polyglot::Language const Russian;

/// @brief Field Greek value: static_cast<int32_t>(0x8)
static ::Polyglot::Language const Greek;

/// @brief Field Turkish value: static_cast<int32_t>(0x9)
static ::Polyglot::Language const Turkish;

/// @brief Field Danish value: static_cast<int32_t>(0xa)
static ::Polyglot::Language const Danish;

/// @brief Field Norwegian value: static_cast<int32_t>(0xb)
static ::Polyglot::Language const Norwegian;

/// @brief Field Swedish value: static_cast<int32_t>(0xc)
static ::Polyglot::Language const Swedish;

/// @brief Field Dutch value: static_cast<int32_t>(0xd)
static ::Polyglot::Language const Dutch;

/// @brief Field Polish value: static_cast<int32_t>(0xe)
static ::Polyglot::Language const Polish;

/// @brief Field Finnish value: static_cast<int32_t>(0xf)
static ::Polyglot::Language const Finnish;

/// @brief Field Japanese value: static_cast<int32_t>(0x10)
static ::Polyglot::Language const Japanese;

/// @brief Field Simplified_Chinese value: static_cast<int32_t>(0x11)
static ::Polyglot::Language const Simplified_Chinese;

/// @brief Field Traditional_Chinese value: static_cast<int32_t>(0x12)
static ::Polyglot::Language const Traditional_Chinese;

/// @brief Field Korean value: static_cast<int32_t>(0x13)
static ::Polyglot::Language const Korean;

/// @brief Field Czech value: static_cast<int32_t>(0x14)
static ::Polyglot::Language const Czech;

/// @brief Field Hungarian value: static_cast<int32_t>(0x15)
static ::Polyglot::Language const Hungarian;

/// @brief Field Romanian value: static_cast<int32_t>(0x16)
static ::Polyglot::Language const Romanian;

/// @brief Field Thai value: static_cast<int32_t>(0x17)
static ::Polyglot::Language const Thai;

/// @brief Field Bulgarian value: static_cast<int32_t>(0x18)
static ::Polyglot::Language const Bulgarian;

/// @brief Field Hebrew value: static_cast<int32_t>(0x19)
static ::Polyglot::Language const Hebrew;

/// @brief Field Arabic value: static_cast<int32_t>(0x1a)
static ::Polyglot::Language const Arabic;

/// @brief Field Bosnian value: static_cast<int32_t>(0x1b)
static ::Polyglot::Language const Bosnian;

/// @brief Field Debug_Keys value: static_cast<int32_t>(0x1c)
static ::Polyglot::Language const Debug_Keys;

/// @brief Field Debug_English_Reverted value: static_cast<int32_t>(0x1d)
static ::Polyglot::Language const Debug_English_Reverted;

/// @brief Field Debug_Word_With_Max_Lenght value: static_cast<int32_t>(0x1e)
static ::Polyglot::Language const Debug_Word_With_Max_Lenght;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __Language_Unwrapped () const noexcept {
return std::bit_cast<__Language_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Language(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Language(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Language()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Polyglot::Language, 0x4>, "Size mismatch!");

} // namespace end def Polyglot
DEFINE_IL2CPP_ARG_TYPE(::Polyglot::Language, "Polyglot", "Language");
