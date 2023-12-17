#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfFeedbackBytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class KdfFeedbackBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::KdfFeedbackBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(912))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::KdfFeedbackBytesGenerator*
class CORDL_TYPE KdfFeedbackBytesGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Object)]{};

/// @brief Field prf offset 0x10
 __declspec(property(get=__get_prf, put=__set_prf)) ::Org::BouncyCastle::Crypto::IMac*  prf;

/// @brief Field h offset 0x18
 __declspec(property(get=__get_h, put=__set_h)) int32_t  h;

/// @brief Field fixedInputData offset 0x20
 __declspec(property(get=__get_fixedInputData, put=__set_fixedInputData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  fixedInputData;

/// @brief Field maxSizeExcl offset 0x28
 __declspec(property(get=__get_maxSizeExcl, put=__set_maxSizeExcl)) int32_t  maxSizeExcl;

/// @brief Field ios offset 0x30
 __declspec(property(get=__get_ios, put=__set_ios)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ios;

/// @brief Field iv offset 0x38
 __declspec(property(get=__get_iv, put=__set_iv)) ::ArrayW<uint8_t,::Array<uint8_t>*>  iv;

/// @brief Field useCounter offset 0x40
 __declspec(property(get=__get_useCounter, put=__set_useCounter)) bool  useCounter;

/// @brief Field generatedBytes offset 0x44
 __declspec(property(get=__get_generatedBytes, put=__set_generatedBytes)) int32_t  generatedBytes;

/// @brief Field k offset 0x48
 __declspec(property(get=__get_k, put=__set_k)) ::ArrayW<uint8_t,::Array<uint8_t>*>  k;

 __declspec(property(get=get_Digest)) ::Org::BouncyCastle::Crypto::IDigest*  Digest;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
constexpr operator  ::Org::BouncyCastle::Crypto::IMacDerivationFunction*() noexcept;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

static inline void setStaticF_IntegerMax(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_IntegerMax() ;

static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger*  value) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two() ;

constexpr void __set_prf(::Org::BouncyCastle::Crypto::IMac*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac* __get_prf() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> __get_prf() const;

constexpr void __set_h(int32_t  value) ;

constexpr int32_t& __get_h() ;

constexpr int32_t const& __get_h() const;

constexpr void __set_fixedInputData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_fixedInputData() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_fixedInputData() const;

constexpr void __set_maxSizeExcl(int32_t  value) ;

constexpr int32_t& __get_maxSizeExcl() ;

constexpr int32_t const& __get_maxSizeExcl() const;

constexpr void __set_ios(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_ios() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_ios() const;

constexpr void __set_iv(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_iv() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_iv() const;

constexpr void __set_useCounter(bool  value) ;

constexpr bool& __get_useCounter() ;

constexpr bool const& __get_useCounter() const;

constexpr void __set_generatedBytes(int32_t  value) ;

constexpr int32_t& __get_generatedBytes() ;

constexpr int32_t const& __get_generatedBytes() const;

constexpr void __set_k(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_k() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_k() const;

static inline ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IMac*  prf) ;

/// @brief Method .ctor addr 0xefe8e8 size 0xe0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IMac*  prf) ;

/// @brief Method Init addr 0xefe9c8 size 0x2bc virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters*  parameters) ;

/// @brief Method get_Digest addr 0xefec84 size 0x88 virtual true final true
inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest() ;

/// @brief Method GenerateBytes addr 0xefed0c size 0x208 virtual true final true
inline int32_t GenerateBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  length) ;

/// @brief Method generateNext addr 0xefef14 size 0x38c virtual false final false
inline void generateNext() ;

/// @brief Method GetMac addr 0xeff2a0 size 0x8 virtual true final true
inline ::Org::BouncyCastle::Crypto::IMac* GetMac() ;

// Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackBytesGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KdfFeedbackBytesGenerator(KdfFeedbackBytesGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackBytesGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KdfFeedbackBytesGenerator(KdfFeedbackBytesGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KdfFeedbackBytesGenerator()  = default;
public:


// Fields

// Static field IntegerMax

// Static field Two


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, 0x50>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "KdfFeedbackBytesGenerator");
