#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XteaEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class XteaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::XteaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::XteaEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(885))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::XteaEngine*
class CORDL_TYPE XteaEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field rounds offset 0x0
static constexpr int32_t  rounds{static_cast<int32_t>(0x20)};

/// @brief Field block_size offset 0x0
static constexpr int32_t  block_size{static_cast<int32_t>(0x8)};

/// @brief Field delta offset 0x0
static constexpr int32_t  delta{static_cast<int32_t>(0x9e3779b9)};

/// @brief Field _S offset 0x10
 __declspec(property(get=__get__S, put=__set__S)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _S;

/// @brief Field _sum0 offset 0x18
 __declspec(property(get=__get__sum0, put=__set__sum0)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _sum0;

/// @brief Field _sum1 offset 0x20
 __declspec(property(get=__get__sum1, put=__set__sum1)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _sum1;

/// @brief Field _initialised offset 0x28
 __declspec(property(get=__get__initialised, put=__set__initialised)) bool  _initialised;

/// @brief Field _forEncryption offset 0x29
 __declspec(property(get=__get__forEncryption, put=__set__forEncryption)) bool  _forEncryption;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

constexpr void __set__S(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__S() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__S() const;

constexpr void __set__sum0(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__sum0() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__sum0() const;

constexpr void __set__sum1(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__sum1() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__sum1() const;

constexpr void __set__initialised(bool  value) ;

constexpr bool& __get__initialised() ;

constexpr bool const& __get__initialised() const;

constexpr void __set__forEncryption(bool  value) ;

constexpr bool& __get__forEncryption() ;

constexpr bool const& __get__forEncryption() const;

static inline ::Org::BouncyCastle::Crypto::Engines::XteaEngine* New_ctor() ;

/// @brief Method .ctor addr 0xef4d98 size 0x80 virtual false final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xef4e18 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xef4e58 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xef4e60 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method Init addr 0xef4e68 size 0x148 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method ProcessBlock addr 0xef50b8 size 0x160 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method Reset addr 0xef541c size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method setKey addr 0xef4fb0 size 0x108 virtual false final false
inline void setKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method encryptBlock addr 0xef5318 size 0x104 virtual false final false
inline int32_t encryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method decryptBlock addr 0xef5218 size 0x100 virtual false final false
inline int32_t decryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

// Ctor Parameters [CppParam { name: "", ty: "XteaEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XteaEngine(XteaEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XteaEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XteaEngine(XteaEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 XteaEngine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::XteaEngine, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::XteaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::XteaEngine*, "Org.BouncyCastle.Crypto.Engines", "XteaEngine");
