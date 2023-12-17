#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Asn1SignatureFactory)
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class ISignatureFactory;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
namespace Org::BouncyCastle::Crypto {
class AsymmetricKeyParameter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class Asn1SignatureFactory;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
// Type: Org.BouncyCastle.Crypto.Operators::Asn1SignatureFactory
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(992))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::Asn1SignatureFactory*
class CORDL_TYPE Asn1SignatureFactory : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field algID offset 0x10
 __declspec(property(get=__get_algID, put=__set_algID)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  algID;

/// @brief Field algorithm offset 0x18
 __declspec(property(get=__get_algorithm, put=__set_algorithm)) ::StringW  algorithm;

/// @brief Field privateKey offset 0x20
 __declspec(property(get=__get_privateKey, put=__set_privateKey)) ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey;

/// @brief Field random offset 0x28
 __declspec(property(get=__get_random, put=__set_random)) ::Org::BouncyCastle::Security::SecureRandom*  random;

 __declspec(property(get=get_AlgorithmDetails)) ::System::Object*  AlgorithmDetails;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISignatureFactory"
constexpr operator  ::Org::BouncyCastle::Crypto::ISignatureFactory*() noexcept;

constexpr void __set_algID(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* __get_algID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> __get_algID() const;

constexpr void __set_algorithm(::StringW  value) ;

constexpr ::StringW& __get_algorithm() ;

constexpr ::StringW const& __get_algorithm() const;

constexpr void __set_privateKey(::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  value) ;

constexpr ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* __get_privateKey() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*> __get_privateKey() const;

constexpr void __set_random(::Org::BouncyCastle::Security::SecureRandom*  value) ;

constexpr ::Org::BouncyCastle::Security::SecureRandom* __get_random() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> __get_random() const;

static inline ::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory* New_ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

/// @brief Method .ctor addr 0xf2ca94 size 0x8 virtual false final false
inline void _ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey) ;

static inline ::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory* New_ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method .ctor addr 0xf2ca9c size 0x158 virtual false final false
inline void _ctor(::StringW  algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*  privateKey, ::Org::BouncyCastle::Security::SecureRandom*  random) ;

/// @brief Method get_AlgorithmDetails addr 0xf2cbf4 size 0x8 virtual true final true
inline ::System::Object* get_AlgorithmDetails() ;

/// @brief Method CreateCalculator addr 0xf2cbfc size 0xb4 virtual true final true
inline ::Org::BouncyCastle::Crypto::IStreamCalculator* CreateCalculator() ;

/// @brief Method get_SignatureAlgNames addr 0xf2cd2c size 0x4c virtual false final false
static inline ::System::Collections::IEnumerable* get_SignatureAlgNames() ;

// Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Asn1SignatureFactory(Asn1SignatureFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Asn1SignatureFactory", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Asn1SignatureFactory(Asn1SignatureFactory const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Asn1SignatureFactory()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::Asn1SignatureFactory*, "Org.BouncyCastle.Crypto.Operators", "Asn1SignatureFactory");
