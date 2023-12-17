#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RegexBoyerMoore)
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexBoyerMoore;
}
// Write type traits
MARK_REF_PTR_T(::System::Text::RegularExpressions::RegexBoyerMoore);
// Type: System.Text.RegularExpressions::RegexBoyerMoore
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8914))
// CS Name: ::System.Text.RegularExpressions::RegexBoyerMoore*
class CORDL_TYPE RegexBoyerMoore : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field Positive offset 0x10
 __declspec(property(get=__get_Positive, put=__set_Positive)) ::ArrayW<int32_t,::Array<int32_t>*>  Positive;

/// @brief Field NegativeASCII offset 0x18
 __declspec(property(get=__get_NegativeASCII, put=__set_NegativeASCII)) ::ArrayW<int32_t,::Array<int32_t>*>  NegativeASCII;

/// @brief Field NegativeUnicode offset 0x20
 __declspec(property(get=__get_NegativeUnicode, put=__set_NegativeUnicode)) ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  NegativeUnicode;

/// @brief Field Pattern offset 0x28
 __declspec(property(get=__get_Pattern, put=__set_Pattern)) ::StringW  Pattern;

/// @brief Field LowASCII offset 0x30
 __declspec(property(get=__get_LowASCII, put=__set_LowASCII)) int32_t  LowASCII;

/// @brief Field HighASCII offset 0x34
 __declspec(property(get=__get_HighASCII, put=__set_HighASCII)) int32_t  HighASCII;

/// @brief Field RightToLeft offset 0x38
 __declspec(property(get=__get_RightToLeft, put=__set_RightToLeft)) bool  RightToLeft;

/// @brief Field CaseInsensitive offset 0x39
 __declspec(property(get=__get_CaseInsensitive, put=__set_CaseInsensitive)) bool  CaseInsensitive;

/// @brief Field _culture offset 0x40
 __declspec(property(get=__get__culture, put=__set__culture)) ::System::Globalization::CultureInfo*  _culture;

constexpr void __set_Positive(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_Positive() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_Positive() const;

constexpr void __set_NegativeASCII(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_NegativeASCII() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_NegativeASCII() const;

constexpr void __set_NegativeUnicode(::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>  value) ;

constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*>& __get_NegativeUnicode() ;

constexpr ::ArrayW<::ArrayW<int32_t,::Array<int32_t>*>,::Array<::ArrayW<int32_t,::Array<int32_t>*>>*> const& __get_NegativeUnicode() const;

constexpr void __set_Pattern(::StringW  value) ;

constexpr ::StringW& __get_Pattern() ;

constexpr ::StringW const& __get_Pattern() const;

constexpr void __set_LowASCII(int32_t  value) ;

constexpr int32_t& __get_LowASCII() ;

constexpr int32_t const& __get_LowASCII() const;

constexpr void __set_HighASCII(int32_t  value) ;

constexpr int32_t& __get_HighASCII() ;

constexpr int32_t const& __get_HighASCII() const;

constexpr void __set_RightToLeft(bool  value) ;

constexpr bool& __get_RightToLeft() ;

constexpr bool const& __get_RightToLeft() const;

constexpr void __set_CaseInsensitive(bool  value) ;

constexpr bool& __get_CaseInsensitive() ;

constexpr bool const& __get_CaseInsensitive() const;

constexpr void __set__culture(::System::Globalization::CultureInfo*  value) ;

constexpr ::System::Globalization::CultureInfo* __get__culture() ;

constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> __get__culture() const;

static inline ::System::Text::RegularExpressions::RegexBoyerMoore* New_ctor(::StringW  pattern, bool  caseInsensitive, bool  rightToLeft, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method .ctor addr 0x2953dec size 0x4b4 virtual false final false
inline void _ctor(::StringW  pattern, bool  caseInsensitive, bool  rightToLeft, ::System::Globalization::CultureInfo*  culture) ;

/// @brief Method MatchPattern addr 0x29542a0 size 0x124 virtual false final false
inline bool MatchPattern(::StringW  text, int32_t  index) ;

/// @brief Method IsMatch addr 0x29543c4 size 0x6c virtual false final false
inline bool IsMatch(::StringW  text, int32_t  index, int32_t  beglimit, int32_t  endlimit) ;

/// @brief Method Scan addr 0x2954430 size 0x2e4 virtual false final false
inline int32_t Scan(::StringW  text, int32_t  index, int32_t  beglimit, int32_t  endlimit) ;

// Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RegexBoyerMoore(RegexBoyerMoore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RegexBoyerMoore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RegexBoyerMoore(RegexBoyerMoore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RegexBoyerMoore()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexBoyerMoore, 0x48>, "Size mismatch!");

} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(::System::Text::RegularExpressions::RegexBoyerMoore);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexBoyerMoore*, "System.Text.RegularExpressions", "RegexBoyerMoore");
