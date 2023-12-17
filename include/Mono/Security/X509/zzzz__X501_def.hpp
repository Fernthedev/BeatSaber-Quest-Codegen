#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X501)
namespace Mono::Security {
class ASN1;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X501;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X501);
// Type: Mono.Security.X509::X501
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13748))
// CS Name: ::Mono.Security.X509::X501*
class CORDL_TYPE X501 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_countryName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_countryName() ;

static inline void setStaticF_organizationName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_organizationName() ;

static inline void setStaticF_organizationalUnitName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_organizationalUnitName() ;

static inline void setStaticF_commonName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_commonName() ;

static inline void setStaticF_localityName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_localityName() ;

static inline void setStaticF_stateOrProvinceName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_stateOrProvinceName() ;

static inline void setStaticF_streetAddress(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_streetAddress() ;

static inline void setStaticF_serialNumber(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_serialNumber() ;

static inline void setStaticF_domainComponent(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_domainComponent() ;

static inline void setStaticF_userid(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_userid() ;

static inline void setStaticF_email(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_email() ;

static inline void setStaticF_dnQualifier(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_dnQualifier() ;

static inline void setStaticF_title(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_title() ;

static inline void setStaticF_surname(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_surname() ;

static inline void setStaticF_givenName(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_givenName() ;

static inline void setStaticF_initial(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_initial() ;

/// @brief Method ToString addr 0x23f0300 size 0x138 virtual false final false
static inline ::StringW ToString(::Mono::Security::ASN1*  seq) ;

/// @brief Method ToString addr 0x23f82d4 size 0x1a8 virtual false final false
static inline ::StringW ToString(::Mono::Security::ASN1*  seq, bool  reversed, ::StringW  separator, bool  quotes) ;

/// @brief Method AppendEntry addr 0x23f7b10 size 0x7c4 virtual false final false
static inline void AppendEntry(::System::Text::StringBuilder*  sb, ::Mono::Security::ASN1*  entry, bool  quotes) ;

// Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X501(X501 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X501", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X501(X501 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X501()  = default;
public:


// Fields

// Static field countryName

// Static field organizationName

// Static field organizationalUnitName

// Static field commonName

// Static field localityName

// Static field stateOrProvinceName

// Static field streetAddress

// Static field serialNumber

// Static field domainComponent

// Static field userid

// Static field email

// Static field dnQualifier

// Static field title

// Static field surname

// Static field givenName

// Static field initial


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X501, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X501);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X501*, "Mono.Security.X509", "X501");
