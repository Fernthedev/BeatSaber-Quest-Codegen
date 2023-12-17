#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(EncryptedData)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Pkcs {
class EncryptedData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Pkcs::EncryptedData);
// Type: Org.BouncyCastle.Asn1.Pkcs::EncryptedData
namespace Org::BouncyCastle::Asn1::Pkcs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(233))
// CS Name: ::Org.BouncyCastle.Asn1.Pkcs::EncryptedData*
class CORDL_TYPE EncryptedData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::Org::BouncyCastle::Asn1::Asn1Encodable)]{};

/// @brief Field data offset 0x10
 __declspec(property(get=__get_data, put=__set_data)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  data;

 __declspec(property(get=get_ContentType)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  ContentType;

 __declspec(property(get=get_EncryptionAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  EncryptionAlgorithm;

 __declspec(property(get=get_Content)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  Content;

constexpr void __set_data(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence* __get_data() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> __get_data() const;

/// @brief Method GetInstance addr 0xf876f0 size 0x188 virtual false final false
static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedData* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method .ctor addr 0xf87878 size 0x1e0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

static inline ::Org::BouncyCastle::Asn1::Pkcs::EncryptedData* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  encryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable*  content) ;

/// @brief Method .ctor addr 0xf87a58 size 0x184 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  contentType, ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  encryptionAlgorithm, ::Org::BouncyCastle::Asn1::Asn1Encodable*  content) ;

/// @brief Method get_ContentType addr 0xf87bdc size 0x90 virtual false final false
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_ContentType() ;

/// @brief Method get_EncryptionAlgorithm addr 0xf87c6c size 0x28 virtual false final false
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_EncryptionAlgorithm() ;

/// @brief Method get_Content addr 0xf87c94 size 0xc8 virtual false final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Content() ;

/// @brief Method ToAsn1Object addr 0xf87d5c size 0x124 virtual true final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EncryptedData(EncryptedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EncryptedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EncryptedData(EncryptedData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 EncryptedData()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Pkcs::EncryptedData, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Pkcs
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::EncryptedData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::EncryptedData*, "Org.BouncyCastle.Asn1.Pkcs", "EncryptedData");
