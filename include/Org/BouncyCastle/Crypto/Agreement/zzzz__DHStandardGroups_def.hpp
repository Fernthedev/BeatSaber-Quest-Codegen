#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DHStandardGroups)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class DHParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement {
class DHStandardGroups;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups);
// Type: Org.BouncyCastle.Crypto.Agreement::DHStandardGroups
namespace Org::BouncyCastle::Crypto::Agreement {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(735))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement::DHStandardGroups*
class CORDL_TYPE DHStandardGroups : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two() ;

static inline void setStaticF_rfc2409_768_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc2409_768_p() ;

static inline void setStaticF_rfc2409_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc2409_768() ;

static inline void setStaticF_rfc2409_1024_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc2409_1024_p() ;

static inline void setStaticF_rfc2409_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc2409_1024() ;

static inline void setStaticF_rfc3526_1536_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc3526_1536_p() ;

static inline void setStaticF_rfc3526_1536_l(int32_t  value) ;

static inline int32_t getStaticF_rfc3526_1536_l() ;

static inline void setStaticF_rfc3526_1536(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_1536() ;

static inline void setStaticF_rfc3526_2048_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc3526_2048_p() ;

static inline void setStaticF_rfc3526_2048_l(int32_t  value) ;

static inline int32_t getStaticF_rfc3526_2048_l() ;

static inline void setStaticF_rfc3526_2048(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_2048() ;

static inline void setStaticF_rfc3526_3072_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc3526_3072_p() ;

static inline void setStaticF_rfc3526_3072_l(int32_t  value) ;

static inline int32_t getStaticF_rfc3526_3072_l() ;

static inline void setStaticF_rfc3526_3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_3072() ;

static inline void setStaticF_rfc3526_4096_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc3526_4096_p() ;

static inline void setStaticF_rfc3526_4096_l(int32_t  value) ;

static inline int32_t getStaticF_rfc3526_4096_l() ;

static inline void setStaticF_rfc3526_4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_4096() ;

static inline void setStaticF_rfc3526_6144_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc3526_6144_p() ;

static inline void setStaticF_rfc3526_6144_l(int32_t  value) ;

static inline int32_t getStaticF_rfc3526_6144_l() ;

static inline void setStaticF_rfc3526_6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_6144() ;

static inline void setStaticF_rfc3526_8192_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc3526_8192_p() ;

static inline void setStaticF_rfc3526_8192_l(int32_t  value) ;

static inline int32_t getStaticF_rfc3526_8192_l() ;

static inline void setStaticF_rfc3526_8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc3526_8192() ;

static inline void setStaticF_rfc4306_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc4306_768() ;

static inline void setStaticF_rfc4306_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc4306_1024() ;

static inline void setStaticF_rfc5996_768(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc5996_768() ;

static inline void setStaticF_rfc5996_1024(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc5996_1024() ;

static inline void setStaticF_rfc7919_ffdhe2048_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc7919_ffdhe2048_p() ;

static inline void setStaticF_rfc7919_ffdhe2048_l(int32_t  value) ;

static inline int32_t getStaticF_rfc7919_ffdhe2048_l() ;

static inline void setStaticF_rfc7919_ffdhe2048(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe2048() ;

static inline void setStaticF_rfc7919_ffdhe3072_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc7919_ffdhe3072_p() ;

static inline void setStaticF_rfc7919_ffdhe3072_l(int32_t  value) ;

static inline int32_t getStaticF_rfc7919_ffdhe3072_l() ;

static inline void setStaticF_rfc7919_ffdhe3072(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe3072() ;

static inline void setStaticF_rfc7919_ffdhe4096_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc7919_ffdhe4096_p() ;

static inline void setStaticF_rfc7919_ffdhe4096_l(int32_t  value) ;

static inline int32_t getStaticF_rfc7919_ffdhe4096_l() ;

static inline void setStaticF_rfc7919_ffdhe4096(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe4096() ;

static inline void setStaticF_rfc7919_ffdhe6144_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc7919_ffdhe6144_p() ;

static inline void setStaticF_rfc7919_ffdhe6144_l(int32_t  value) ;

static inline int32_t getStaticF_rfc7919_ffdhe6144_l() ;

static inline void setStaticF_rfc7919_ffdhe6144(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe6144() ;

static inline void setStaticF_rfc7919_ffdhe8192_p(::StringW  value) ;

static inline ::StringW getStaticF_rfc7919_ffdhe8192_p() ;

static inline void setStaticF_rfc7919_ffdhe8192_l(int32_t  value) ;

static inline int32_t getStaticF_rfc7919_ffdhe8192_l() ;

static inline void setStaticF_rfc7919_ffdhe8192(::Org::BouncyCastle::Crypto::Parameters::DHParameters*  value) ;

static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* getStaticF_rfc7919_ffdhe8192() ;

/// @brief Method FromHex addr 0x1219d50 size 0xa0 virtual false final false
static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW  hex) ;

/// @brief Method FromPG addr 0x1219df0 size 0xb4 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* FromPG(::StringW  hexP, ::StringW  hexG) ;

/// @brief Method SafePrimeGen2 addr 0x1219ea4 size 0x58 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* SafePrimeGen2(::StringW  hexP) ;

/// @brief Method SafePrimeGen2 addr 0x1219efc size 0xd0 virtual false final false
static inline ::Org::BouncyCastle::Crypto::Parameters::DHParameters* SafePrimeGen2(::StringW  hexP, int32_t  l) ;

static inline ::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups* New_ctor() ;

/// @brief Method .ctor addr 0x121a460 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DHStandardGroups", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DHStandardGroups(DHStandardGroups && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DHStandardGroups", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DHStandardGroups(DHStandardGroups const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DHStandardGroups()  = default;
public:


// Fields

// Static field Two

// Static field rfc2409_768_p

// Static field rfc2409_768

// Static field rfc2409_1024_p

// Static field rfc2409_1024

// Static field rfc3526_1536_p

// Static field rfc3526_1536_l

// Static field rfc3526_1536

// Static field rfc3526_2048_p

// Static field rfc3526_2048_l

// Static field rfc3526_2048

// Static field rfc3526_3072_p

// Static field rfc3526_3072_l

// Static field rfc3526_3072

// Static field rfc3526_4096_p

// Static field rfc3526_4096_l

// Static field rfc3526_4096

// Static field rfc3526_6144_p

// Static field rfc3526_6144_l

// Static field rfc3526_6144

// Static field rfc3526_8192_p

// Static field rfc3526_8192_l

// Static field rfc3526_8192

// Static field rfc4306_768

// Static field rfc4306_1024

// Static field rfc5996_768

// Static field rfc5996_1024

// Static field rfc7919_ffdhe2048_p

// Static field rfc7919_ffdhe2048_l

// Static field rfc7919_ffdhe2048

// Static field rfc7919_ffdhe3072_p

// Static field rfc7919_ffdhe3072_l

// Static field rfc7919_ffdhe3072

// Static field rfc7919_ffdhe4096_p

// Static field rfc7919_ffdhe4096_l

// Static field rfc7919_ffdhe4096

// Static field rfc7919_ffdhe6144_p

// Static field rfc7919_ffdhe6144_l

// Static field rfc7919_ffdhe6144

// Static field rfc7919_ffdhe8192_p

// Static field rfc7919_ffdhe8192_l

// Static field rfc7919_ffdhe8192


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Agreement
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::DHStandardGroups*, "Org.BouncyCastle.Crypto.Agreement", "DHStandardGroups");
