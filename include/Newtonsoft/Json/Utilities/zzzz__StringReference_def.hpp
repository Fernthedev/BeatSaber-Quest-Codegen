#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StringReference)
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
struct StringReference;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Utilities::StringReference);
// Type: Newtonsoft.Json.Utilities::StringReference
namespace Newtonsoft::Json::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11866))
// CS Name: ::Newtonsoft.Json.Utilities::StringReference
struct CORDL_TYPE StringReference : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _chars offset 0x0
 __declspec(property(get=__get__chars, put=__set__chars)) ::ArrayW<char16_t,::Array<char16_t>*>  _chars;

/// @brief Field _startIndex offset 0x8
 __declspec(property(get=__get__startIndex, put=__set__startIndex)) int32_t  _startIndex;

/// @brief Field _length offset 0xc
 __declspec(property(get=__get__length, put=__set__length)) int32_t  _length;

 __declspec(property(get=get_Item)) char16_t  Item[];

 __declspec(property(get=get_Chars)) ::ArrayW<char16_t,::Array<char16_t>*>  Chars;

 __declspec(property(get=get_StartIndex)) int32_t  StartIndex;

 __declspec(property(get=get_Length)) int32_t  Length;

constexpr void __set__chars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*>& __get__chars() ;

constexpr ::ArrayW<char16_t,::Array<char16_t>*> const& __get__chars() const;

constexpr void __set__startIndex(int32_t  value) ;

constexpr int32_t& __get__startIndex() ;

constexpr int32_t const& __get__startIndex() const;

constexpr void __set__length(int32_t  value) ;

constexpr int32_t& __get__length() ;

constexpr int32_t const& __get__length() const;

/// @brief Method get_Item addr 0x265ba18 size 0x30 virtual false final false
inline char16_t get_Item(int32_t  i) ;

/// @brief Method get_Chars addr 0x265ba48 size 0x8 virtual false final false
inline ::ArrayW<char16_t,::Array<char16_t>*> get_Chars() ;

/// @brief Method get_StartIndex addr 0x265ba50 size 0x8 virtual false final false
inline int32_t get_StartIndex() ;

/// @brief Method get_Length addr 0x265ba58 size 0x8 virtual false final false
inline int32_t get_Length() ;

/// @brief Method .ctor addr 0x265ba60 size 0xc virtual false final false
inline void _ctor(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  startIndex, int32_t  length) ;

/// @brief Method ToString addr 0x265ba6c size 0x14 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "_chars", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "_startIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StringReference(::ArrayW<char16_t,::Array<char16_t>*>  _chars, int32_t  _startIndex, int32_t  _length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StringReference(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StringReference()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::StringReference, 0x10>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Utilities
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::StringReference, "Newtonsoft.Json.Utilities", "StringReference");
