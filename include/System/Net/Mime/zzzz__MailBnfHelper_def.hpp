#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MailBnfHelper)
// Forward declare root types
namespace System::Net::Mime {
class MailBnfHelper;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mime::MailBnfHelper);
// Type: System.Net.Mime::MailBnfHelper
namespace System::Net::Mime {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9374))
// CS Name: ::System.Net.Mime::MailBnfHelper*
class CORDL_TYPE MailBnfHelper : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Atext(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Atext() ;

static inline void setStaticF_Qtext(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Qtext() ;

static inline void setStaticF_Dtext(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Dtext() ;

static inline void setStaticF_Ftext(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Ftext() ;

static inline void setStaticF_Ttext(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Ttext() ;

static inline void setStaticF_Ctext(::ArrayW<bool,::Array<bool>*>  value) ;

static inline ::ArrayW<bool,::Array<bool>*> getStaticF_Ctext() ;

static inline void setStaticF_Ascii7bitMaxValue(int32_t  value) ;

static inline int32_t getStaticF_Ascii7bitMaxValue() ;

static inline void setStaticF_Quote(char16_t  value) ;

static inline char16_t getStaticF_Quote() ;

static inline void setStaticF_Space(char16_t  value) ;

static inline char16_t getStaticF_Space() ;

static inline void setStaticF_Tab(char16_t  value) ;

static inline char16_t getStaticF_Tab() ;

static inline void setStaticF_CR(char16_t  value) ;

static inline char16_t getStaticF_CR() ;

static inline void setStaticF_LF(char16_t  value) ;

static inline char16_t getStaticF_LF() ;

static inline void setStaticF_StartComment(char16_t  value) ;

static inline char16_t getStaticF_StartComment() ;

static inline void setStaticF_EndComment(char16_t  value) ;

static inline char16_t getStaticF_EndComment() ;

static inline void setStaticF_Backslash(char16_t  value) ;

static inline char16_t getStaticF_Backslash() ;

static inline void setStaticF_At(char16_t  value) ;

static inline char16_t getStaticF_At() ;

static inline void setStaticF_EndAngleBracket(char16_t  value) ;

static inline char16_t getStaticF_EndAngleBracket() ;

static inline void setStaticF_StartAngleBracket(char16_t  value) ;

static inline char16_t getStaticF_StartAngleBracket() ;

static inline void setStaticF_StartSquareBracket(char16_t  value) ;

static inline char16_t getStaticF_StartSquareBracket() ;

static inline void setStaticF_EndSquareBracket(char16_t  value) ;

static inline char16_t getStaticF_EndSquareBracket() ;

static inline void setStaticF_Comma(char16_t  value) ;

static inline char16_t getStaticF_Comma() ;

static inline void setStaticF_Dot(char16_t  value) ;

static inline char16_t getStaticF_Dot() ;

static inline void setStaticF_s_colonSeparator(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_s_colonSeparator() ;

static inline void setStaticF_s_months(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

static inline ::ArrayW<::StringW,::Array<::StringW>*> getStaticF_s_months() ;

/// @brief Method CreateCharactersAllowedInAtoms addr 0x2900b6c size 0x1dc virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> CreateCharactersAllowedInAtoms() ;

/// @brief Method CreateCharactersAllowedInQuotedStrings addr 0x2900d48 size 0x114 virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> CreateCharactersAllowedInQuotedStrings() ;

/// @brief Method CreateCharactersAllowedInDomainLiterals addr 0x2900e5c size 0x114 virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> CreateCharactersAllowedInDomainLiterals() ;

/// @brief Method CreateCharactersAllowedInHeaderNames addr 0x2900f70 size 0xa8 virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> CreateCharactersAllowedInHeaderNames() ;

/// @brief Method CreateCharactersAllowedInTokens addr 0x2901018 size 0xf0 virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> CreateCharactersAllowedInTokens() ;

/// @brief Method CreateCharactersAllowedInComments addr 0x2901108 size 0x13c virtual false final false
static inline ::ArrayW<bool,::Array<bool>*> CreateCharactersAllowedInComments() ;

/// @brief Method IsAllowedWhiteSpace addr 0x2901244 size 0xcc virtual false final false
static inline bool IsAllowedWhiteSpace(char16_t  c) ;

// Ctor Parameters [CppParam { name: "", ty: "MailBnfHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MailBnfHelper(MailBnfHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MailBnfHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MailBnfHelper(MailBnfHelper const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MailBnfHelper()  = default;
public:


// Fields

// Static field Atext

// Static field Qtext

// Static field Dtext

// Static field Ftext

// Static field Ttext

// Static field Ctext

// Static field Ascii7bitMaxValue

// Static field Quote

// Static field Space

// Static field Tab

// Static field CR

// Static field LF

// Static field StartComment

// Static field EndComment

// Static field Backslash

// Static field At

// Static field EndAngleBracket

// Static field StartAngleBracket

// Static field StartSquareBracket

// Static field EndSquareBracket

// Static field Comma

// Static field Dot

// Static field s_colonSeparator

// Static field s_months


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mime::MailBnfHelper, 0x10>, "Size mismatch!");

} // namespace end def System::Net::Mime
NEED_NO_BOX(::System::Net::Mime::MailBnfHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mime::MailBnfHelper*, "System.Net.Mime", "MailBnfHelper");
