#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NamingAuthority)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X500 {
class DirectoryString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
class NamingAuthority;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority);
// Type: Org.BouncyCastle.Asn1.IsisMtt.X509::NamingAuthority
namespace Org::BouncyCastle::Asn1::IsisMtt::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(188))
// CS Name: ::Org.BouncyCastle.Asn1.IsisMtt.X509::NamingAuthority*
class CORDL_TYPE NamingAuthority : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field namingAuthorityID offset 0x10
 __declspec(property(get=__get_namingAuthorityID, put=__set_namingAuthorityID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  namingAuthorityID;

/// @brief Field namingAuthorityUrl offset 0x18
 __declspec(property(get=__get_namingAuthorityUrl, put=__set_namingAuthorityUrl)) ::StringW  namingAuthorityUrl;

/// @brief Field namingAuthorityText offset 0x20
 __declspec(property(get=__get_namingAuthorityText, put=__set_namingAuthorityText)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  namingAuthorityText;

 __declspec(property(get=get_NamingAuthorityID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  NamingAuthorityID;

 __declspec(property(get=get_NamingAuthorityText)) ::Org::BouncyCastle::Asn1::X500::DirectoryString*  NamingAuthorityText;

 __declspec(property(get=get_NamingAuthorityUrl)) ::StringW  NamingAuthorityUrl;

static inline void setStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* getStaticF_IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern() ;

constexpr void __set_namingAuthorityID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_namingAuthorityID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_namingAuthorityID() const;

constexpr void __set_namingAuthorityUrl(::StringW  value) ;

constexpr ::StringW& __get_namingAuthorityUrl() ;

constexpr ::StringW const& __get_namingAuthorityUrl() const;

constexpr void __set_namingAuthorityText(::Org::BouncyCastle::Asn1::X500::DirectoryString*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X500::DirectoryString* __get_namingAuthorityText() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X500::DirectoryString*> __get_namingAuthorityText() const;

/// @brief Method GetInstance addr 0xf789e8 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* GetInstance(::System::Object*  obj) ;

/// @brief Method GetInstance addr 0xf7723c size 0x78 virtual false final false
static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf78b70 size 0x5c8 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method get_NamingAuthorityID addr 0xf79228 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_NamingAuthorityID() ;

/// @brief Method get_NamingAuthorityText addr 0xf79230 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::X500::DirectoryString* get_NamingAuthorityText() ;

/// @brief Method get_NamingAuthorityUrl addr 0xf79238 size 0x8 virtual true final false
inline ::StringW get_NamingAuthorityUrl() ;

static inline ::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  namingAuthorityID, ::StringW  namingAuthorityUrl, ::Org::BouncyCastle::Asn1::X500::DirectoryString*  namingAuthorityText) ;

/// @brief Method .ctor addr 0xf79240 size 0x3c virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  namingAuthorityID, ::StringW  namingAuthorityUrl, ::Org::BouncyCastle::Asn1::X500::DirectoryString*  namingAuthorityText) ;

/// @brief Method ToAsn1Object addr 0xf7927c size 0x19c virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "NamingAuthority", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NamingAuthority(NamingAuthority && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NamingAuthority", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NamingAuthority(NamingAuthority const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NamingAuthority()  = default;
public:


// Fields

// Static field IdIsisMttATNamingAuthoritiesRechtWirtschaftSteuern


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::IsisMtt::X509
NEED_NO_BOX(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::IsisMtt::X509::NamingAuthority*, "Org.BouncyCastle.Asn1.IsisMtt.X509", "NamingAuthority");
