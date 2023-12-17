#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfCounterBytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDigest;
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
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class KdfCounterBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::KdfCounterBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(910))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::KdfCounterBytesGenerator*
class CORDL_TYPE KdfCounterBytesGenerator : public ::System::Object {
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

/// @brief Field fixedInputDataCtrPrefix offset 0x20
 __declspec(property(get=__get_fixedInputDataCtrPrefix, put=__set_fixedInputDataCtrPrefix)) ::ArrayW<uint8_t,::Array<uint8_t>*>  fixedInputDataCtrPrefix;

/// @brief Field fixedInputData_afterCtr offset 0x28
 __declspec(property(get=__get_fixedInputData_afterCtr, put=__set_fixedInputData_afterCtr)) ::ArrayW<uint8_t,::Array<uint8_t>*>  fixedInputData_afterCtr;

/// @brief Field maxSizeExcl offset 0x30
 __declspec(property(get=__get_maxSizeExcl, put=__set_maxSizeExcl)) int32_t  maxSizeExcl;

/// @brief Field ios offset 0x38
 __declspec(property(get=__get_ios, put=__set_ios)) ::ArrayW<uint8_t,::Array<uint8_t>*>  ios;

/// @brief Field generatedBytes offset 0x40
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

constexpr void __set_fixedInputDataCtrPrefix(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_fixedInputDataCtrPrefix() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_fixedInputDataCtrPrefix() const;

constexpr void __set_fixedInputData_afterCtr(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_fixedInputData_afterCtr() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_fixedInputData_afterCtr() const;

constexpr void __set_maxSizeExcl(int32_t  value) ;

constexpr int32_t& __get_maxSizeExcl() ;

constexpr int32_t const& __get_maxSizeExcl() const;

constexpr void __set_ios(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_ios() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_ios() const;

constexpr void __set_generatedBytes(int32_t  value) ;

constexpr int32_t& __get_generatedBytes() ;

constexpr int32_t const& __get_generatedBytes() const;

constexpr void __set_k(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_k() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_k() const;

static inline ::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IMac*  prf) ;

/// @brief Method .ctor addr 0xefd344 size 0xe0 virtual false final false
inline void _ctor(::Org::BouncyCastle::Crypto::IMac*  prf) ;

/// @brief Method Init addr 0xefd424 size 0x2a4 virtual true final true
inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters*  param) ;

/// @brief Method GetMac addr 0xefd6c8 size 0x8 virtual true final true
inline ::Org::BouncyCastle::Crypto::IMac* GetMac() ;

/// @brief Method get_Digest addr 0xefd6d0 size 0x88 virtual true final true
inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest() ;

/// @brief Method GenerateBytes addr 0xefd758 size 0x208 virtual true final true
inline int32_t GenerateBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  length) ;

/// @brief Method generateNext addr 0xefd960 size 0x338 virtual false final false
inline void generateNext() ;

// Ctor Parameters [CppParam { name: "", ty: "KdfCounterBytesGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KdfCounterBytesGenerator(KdfCounterBytesGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KdfCounterBytesGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KdfCounterBytesGenerator(KdfCounterBytesGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 KdfCounterBytesGenerator()  = default;
public:


// Fields

// Static field IntegerMax

// Static field Two


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator, 0x50>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::KdfCounterBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "KdfCounterBytesGenerator");
