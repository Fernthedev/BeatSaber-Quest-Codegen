#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CookieParser)
namespace System::Net {
class CookieTokenizer;
}
namespace System::Net {
class Cookie;
}
// Forward declare root types
namespace System::Net {
class CookieParser;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CookieParser);
// Type: System.Net::CookieParser
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9124))
// CS Name: ::System.Net::CookieParser*
class CORDL_TYPE CookieParser : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field m_tokenizer offset 0x10
 __declspec(property(get=__get_m_tokenizer, put=__set_m_tokenizer)) ::System::Net::CookieTokenizer*  m_tokenizer;

constexpr void __set_m_tokenizer(::System::Net::CookieTokenizer*  value) ;

constexpr ::System::Net::CookieTokenizer* __get_m_tokenizer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::CookieTokenizer*> __get_m_tokenizer() const;

static inline ::System::Net::CookieParser* New_ctor(::StringW  cookieString) ;

/// @brief Method .ctor addr 0x29ad644 size 0x78 virtual false final false
inline void _ctor(::StringW  cookieString) ;

/// @brief Method Get addr 0x29ad6bc size 0x55c virtual false final false
inline ::System::Net::Cookie* Get() ;

/// @brief Method CheckQuoted addr 0x29abd24 size 0xc4 virtual false final false
static inline ::StringW CheckQuoted(::StringW  value) ;

// Ctor Parameters [CppParam { name: "", ty: "CookieParser", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CookieParser(CookieParser && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CookieParser", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CookieParser(CookieParser const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CookieParser()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieParser, 0x18>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::CookieParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieParser*, "System.Net", "CookieParser");
