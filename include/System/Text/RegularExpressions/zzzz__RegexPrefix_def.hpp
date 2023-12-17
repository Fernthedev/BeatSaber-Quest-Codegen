#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RegexPrefix)
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexPrefix);
// Type: System.Text.RegularExpressions::RegexPrefix
namespace System::Text::RegularExpressions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8927))
// CS Name: ::System.Text.RegularExpressions::RegexPrefix
struct CORDL_TYPE RegexPrefix : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field <CaseInsensitive>k__BackingField offset 0x0
 __declspec(property(get=__get__CaseInsensitive_k__BackingField, put=__set__CaseInsensitive_k__BackingField)) bool  _CaseInsensitive_k__BackingField;

/// @brief Field <Prefix>k__BackingField offset 0x8
 __declspec(property(get=__get__Prefix_k__BackingField, put=__set__Prefix_k__BackingField)) ::StringW  _Prefix_k__BackingField;

 __declspec(property(get=get_CaseInsensitive)) bool  CaseInsensitive;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

constexpr void __set__CaseInsensitive_k__BackingField(bool  value) ;

constexpr bool& __get__CaseInsensitive_k__BackingField() ;

constexpr bool const& __get__CaseInsensitive_k__BackingField() const;

static inline void setStaticF__Empty_k__BackingField(::System::Text::RegularExpressions::RegexPrefix  value) ;

static inline ::System::Text::RegularExpressions::RegexPrefix getStaticF__Empty_k__BackingField() ;

constexpr void __set__Prefix_k__BackingField(::StringW  value) ;

constexpr ::StringW& __get__Prefix_k__BackingField() ;

constexpr ::StringW const& __get__Prefix_k__BackingField() const;

/// @brief Method .ctor addr 0x295f1d4 size 0x10 virtual false final false
inline void _ctor(::StringW  prefix, bool  ci) ;

/// @brief Method get_CaseInsensitive addr 0x2969270 size 0x8 virtual false final false
inline bool get_CaseInsensitive() ;

/// @brief Method get_Empty addr 0x2969278 size 0x58 virtual false final false
static inline ::System::Text::RegularExpressions::RegexPrefix get_Empty() ;

/// @brief Method get_Prefix addr 0x29692d0 size 0x8 virtual false final false
inline ::StringW get_Prefix() ;

// Ctor Parameters [CppParam { name: "_CaseInsensitive_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Prefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr RegexPrefix(bool  _CaseInsensitive_k__BackingField, ::StringW  _Prefix_k__BackingField) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RegexPrefix(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RegexPrefix()  = default;


// Fields

// Static field <Empty>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexPrefix, 0x10>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexPrefix, "System.Text.RegularExpressions", "RegexPrefix");
