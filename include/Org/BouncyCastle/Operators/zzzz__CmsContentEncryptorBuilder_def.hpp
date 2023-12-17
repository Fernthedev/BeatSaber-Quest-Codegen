#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsContentEncryptorBuilder)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class EnvelopedDataHelper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsContentEncryptorBuilder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
// Type: Org.BouncyCastle.Operators::CmsContentEncryptorBuilder
namespace Org::BouncyCastle::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(997))
// CS Name: ::Org.BouncyCastle.Operators::CmsContentEncryptorBuilder*
class CORDL_TYPE CmsContentEncryptorBuilder : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field encryptionOID offset 0x10
 __declspec(property(get=__get_encryptionOID, put=__set_encryptionOID)) ::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID;

/// @brief Field keySize offset 0x18
 __declspec(property(get=__get_keySize, put=__set_keySize)) int32_t  keySize;

/// @brief Field helper offset 0x20
 __declspec(property(get=__get_helper, put=__set_helper)) ::Org::BouncyCastle::Cms::EnvelopedDataHelper*  helper;

static inline void setStaticF_KeySizes(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_KeySizes() ;

constexpr void __set_encryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier* __get_encryptionOID() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerObjectIdentifier*> __get_encryptionOID() const;

constexpr void __set_keySize(int32_t  value) ;

constexpr int32_t& __get_keySize() ;

constexpr int32_t const& __get_keySize() const;

constexpr void __set_helper(::Org::BouncyCastle::Cms::EnvelopedDataHelper*  value) ;

constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper* __get_helper() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::EnvelopedDataHelper*> __get_helper() const;

/// @brief Method GetKeySize addr 0xf2d628 size 0x1a4 virtual false final false
static inline int32_t GetKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  oid) ;

static inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID) ;

/// @brief Method .ctor addr 0xf2d7cc size 0x70 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID) ;

static inline ::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder* New_ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID, int32_t  keySize) ;

/// @brief Method .ctor addr 0xf2d83c size 0x84 virtual false final false
inline void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier*  encryptionOID, int32_t  keySize) ;

/// @brief Method Build addr 0xf2d8c0 size 0x68 virtual false final false
inline ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey* Build() ;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CmsContentEncryptorBuilder(CmsContentEncryptorBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CmsContentEncryptorBuilder(CmsContentEncryptorBuilder const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CmsContentEncryptorBuilder()  = default;
public:


// Fields

// Static field KeySizes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Operators
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder*, "Org.BouncyCastle.Operators", "CmsContentEncryptorBuilder");
