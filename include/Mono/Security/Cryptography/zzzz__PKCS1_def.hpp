#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PKCS1)
namespace System::Security::Cryptography {
class RSA;
}
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace Mono::Security::Cryptography {
class PKCS1;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::PKCS1);
// Type: Mono.Security.Cryptography::PKCS1
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2281))
// CS Name: ::Mono.Security.Cryptography::PKCS1*
class CORDL_TYPE PKCS1 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_emptySHA1(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_emptySHA1() ;

static inline void setStaticF_emptySHA256(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_emptySHA256() ;

static inline void setStaticF_emptySHA384(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_emptySHA384() ;

static inline void setStaticF_emptySHA512(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_emptySHA512() ;

/// @brief Method Compare addr 0x2421c90 size 0x74 virtual false final false
static inline bool Compare(::ArrayW<uint8_t,::Array<uint8_t>*>  array1, ::ArrayW<uint8_t,::Array<uint8_t>*>  array2) ;

/// @brief Method I2OSP addr 0x2421d04 size 0x8c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> I2OSP(::ArrayW<uint8_t,::Array<uint8_t>*>  x, int32_t  size) ;

/// @brief Method OS2IP addr 0x2421d90 size 0xbc virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> OS2IP(::ArrayW<uint8_t,::Array<uint8_t>*>  x) ;

/// @brief Method RSAVP1 addr 0x2421e4c size 0x1c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> RSAVP1(::System::Security::Cryptography::RSA*  rsa, ::ArrayW<uint8_t,::Array<uint8_t>*>  s) ;

/// @brief Method Verify_v15 addr 0x2421e68 size 0x80 virtual false final false
static inline bool Verify_v15(::System::Security::Cryptography::RSA*  rsa, ::System::Security::Cryptography::HashAlgorithm*  hash, ::ArrayW<uint8_t,::Array<uint8_t>*>  hashValue, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method Verify_v15 addr 0x24220c8 size 0x1dc virtual false final false
static inline bool Verify_v15(::System::Security::Cryptography::RSA*  rsa, ::StringW  hashName, ::ArrayW<uint8_t,::Array<uint8_t>*>  hashValue, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature) ;

/// @brief Method Verify_v15 addr 0x2421ee8 size 0x1e0 virtual false final false
static inline bool Verify_v15(::System::Security::Cryptography::RSA*  rsa, ::System::Security::Cryptography::HashAlgorithm*  hash, ::ArrayW<uint8_t,::Array<uint8_t>*>  hashValue, ::ArrayW<uint8_t,::Array<uint8_t>*>  signature, bool  tryNonStandardEncoding) ;

/// @brief Method Encode_v15 addr 0x24226b4 size 0x350 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode_v15(::System::Security::Cryptography::HashAlgorithm*  hash, ::ArrayW<uint8_t,::Array<uint8_t>*>  hashValue, int32_t  emLength) ;

/// @brief Method CreateFromName addr 0x24222a4 size 0x410 virtual false final false
static inline ::System::Security::Cryptography::HashAlgorithm* CreateFromName(::StringW  name) ;

// Ctor Parameters [CppParam { name: "", ty: "PKCS1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PKCS1(PKCS1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PKCS1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PKCS1(PKCS1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PKCS1()  = default;
public:


// Fields

// Static field emptySHA1

// Static field emptySHA256

// Static field emptySHA384

// Static field emptySHA512


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::PKCS1, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::PKCS1);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::PKCS1*, "Mono.Security.Cryptography", "PKCS1");
