#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(CertOrEncCert)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class CmpCertificate;
}
namespace Org::BouncyCastle::Asn1::Crmf {
class EncryptedValue;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class CertOrEncCert;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
// Type: Org.BouncyCastle.Asn1.Cmp::CertOrEncCert
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::CertOrEncCert*
class CORDL_TYPE CertOrEncCert : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field certificate offset 0x10
 __declspec(property(get=__get_certificate, put=__set_certificate)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*  certificate;

/// @brief Field encryptedCert offset 0x18
 __declspec(property(get=__get_encryptedCert, put=__set_encryptedCert)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  encryptedCert;

 __declspec(property(get=get_Certificate)) ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*  Certificate;

 __declspec(property(get=get_EncryptedCert)) ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  EncryptedCert;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

constexpr void __set_certificate(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* __get_certificate() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*> __get_certificate() const;

constexpr void __set_encryptedCert(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* __get_encryptedCert() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*> __get_encryptedCert() const;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method .ctor addr 0xe64db4 size 0xf4 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  tagged) ;

/// @brief Method GetInstance addr 0xe648c8 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*  certificate) ;

/// @brief Method .ctor addr 0xe64ea8 size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::CmpCertificate*  certificate) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert* New_ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  encryptedCert) ;

/// @brief Method .ctor addr 0xe64f20 size 0x78 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Crmf::EncryptedValue*  encryptedCert) ;

/// @brief Method get_Certificate addr 0xe64f98 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Cmp::CmpCertificate* get_Certificate() ;

/// @brief Method get_EncryptedCert addr 0xe64fa0 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Asn1::Crmf::EncryptedValue* get_EncryptedCert() ;

/// @brief Method ToAsn1Object addr 0xe64fa8 size 0x94 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CertOrEncCert(CertOrEncCert && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CertOrEncCert", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CertOrEncCert(CertOrEncCert const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CertOrEncCert()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::CertOrEncCert*, "Org.BouncyCastle.Asn1.Cmp", "CertOrEncCert");
