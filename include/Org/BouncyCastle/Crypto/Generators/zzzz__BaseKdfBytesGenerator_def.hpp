#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseKdfBytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class BaseKdfBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::BaseKdfBytesGenerator
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(886))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::BaseKdfBytesGenerator*
class CORDL_TYPE BaseKdfBytesGenerator : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field counterStart offset 0x10
 __declspec(property(get=__get_counterStart, put=__set_counterStart)) int32_t  counterStart;

/// @brief Field digest offset 0x18
 __declspec(property(get=__get_digest, put=__set_digest)) ::Org::BouncyCastle::Crypto::IDigest*  digest;

/// @brief Field shared offset 0x20
 __declspec(property(get=__get_shared, put=__set_shared)) ::ArrayW<uint8_t,::Array<uint8_t>*>  shared;

/// @brief Field iv offset 0x28
 __declspec(property(get=__get_iv, put=__set_iv)) ::ArrayW<uint8_t,::Array<uint8_t>*>  iv;

 __declspec(property(get=get_Digest)) ::Org::BouncyCastle::Crypto::IDigest*  Digest;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr operator  ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

constexpr void __set_counterStart(int32_t  value) ;

constexpr int32_t& __get_counterStart() ;

constexpr int32_t const& __get_counterStart() const;

constexpr void __set_digest(::Org::BouncyCastle::Crypto::IDigest*  value) ;

constexpr ::Org::BouncyCastle::Crypto::IDigest* __get_digest() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> __get_digest() const;

constexpr void __set_shared(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_shared() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_shared() const;

constexpr void __set_iv(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_iv() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_iv() const;

static inline ::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator* New_ctor(int32_t  counterStart, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method .ctor addr 0xef5420 size 0x30 virtual false final false
inline void _ctor(int32_t  counterStart, ::Org::BouncyCastle::Crypto::IDigest*  digest) ;

/// @brief Method Init addr 0xef5450 size 0x110 virtual true final false
inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters*  parameters) ;

/// @brief Method get_Digest addr 0xef5560 size 0x8 virtual true final false
inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest() ;

/// @brief Method GenerateBytes addr 0xef5568 size 0x534 virtual true final false
inline int32_t GenerateBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff, int32_t  length) ;

// Ctor Parameters [CppParam { name: "", ty: "BaseKdfBytesGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseKdfBytesGenerator(BaseKdfBytesGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseKdfBytesGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseKdfBytesGenerator(BaseKdfBytesGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BaseKdfBytesGenerator()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "BaseKdfBytesGenerator");
