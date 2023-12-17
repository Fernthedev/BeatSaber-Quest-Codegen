#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509NameTokenizer)
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class X509NameTokenizer;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer);
// Type: Org.BouncyCastle.Asn1.X509::X509NameTokenizer
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(409))
// CS Name: ::Org.BouncyCastle.Asn1.X509::X509NameTokenizer*
class CORDL_TYPE X509NameTokenizer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field value offset 0x10
 __declspec(property(get=__get_value, put=__set_value)) ::StringW  value;

/// @brief Field index offset 0x18
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field separator offset 0x1c
 __declspec(property(get=__get_separator, put=__set_separator)) char16_t  separator;

/// @brief Field buffer offset 0x20
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::System::Text::StringBuilder*  buffer;

constexpr void __set_value(::StringW  value) ;

constexpr ::StringW& __get_value() ;

constexpr ::StringW const& __get_value() const;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_separator(char16_t  value) ;

constexpr char16_t& __get_separator() ;

constexpr char16_t const& __get_separator() const;

constexpr void __set_buffer(::System::Text::StringBuilder*  value) ;

constexpr ::System::Text::StringBuilder* __get_buffer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> __get_buffer() const;

static inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* New_ctor(::StringW  oid) ;

/// @brief Method .ctor addr 0x11a54f8 size 0x8 virtual false final false
inline void _ctor(::StringW  oid) ;

static inline ::Org::BouncyCastle::Asn1::X509::X509NameTokenizer* New_ctor(::StringW  oid, char16_t  separator) ;

/// @brief Method .ctor addr 0x11a56cc size 0x8c virtual false final false
inline void _ctor(::StringW  oid, char16_t  separator) ;

/// @brief Method HasMoreTokens addr 0x11a5758 size 0x28 virtual false final false
inline bool HasMoreTokens() ;

/// @brief Method NextToken addr 0x11a5500 size 0x1cc virtual false final false
inline ::StringW NextToken() ;

// Ctor Parameters [CppParam { name: "", ty: "X509NameTokenizer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509NameTokenizer(X509NameTokenizer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509NameTokenizer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509NameTokenizer(X509NameTokenizer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509NameTokenizer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::X509NameTokenizer, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::X509NameTokenizer*, "Org.BouncyCastle.Asn1.X509", "X509NameTokenizer");
