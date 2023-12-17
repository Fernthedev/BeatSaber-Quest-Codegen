#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Cast5Engine_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cast6Engine)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Cast6Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Cast6Engine);
// Type: Org.BouncyCastle.Crypto.Engines::Cast6Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(833))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(834))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Cast6Engine*
class CORDL_TYPE Cast6Engine : public ::Org::BouncyCastle::Crypto::Engines::Cast5Engine {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::Org::BouncyCastle::Crypto::Engines::Cast5Engine)]{};

/// @brief Field ROUNDS offset 0x0
static constexpr int32_t  ROUNDS{static_cast<int32_t>(0xc)};

/// @brief Field BLOCK_SIZE offset 0x0
static constexpr int32_t  BLOCK_SIZE{static_cast<int32_t>(0x10)};

/// @brief Field _Kr offset 0x38
 __declspec(property(get=__get__Kr, put=__set__Kr)) ::ArrayW<int32_t,::Array<int32_t>*>  _Kr;

/// @brief Field _Km offset 0x40
 __declspec(property(get=__get__Km, put=__set__Km)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _Km;

/// @brief Field _Tr offset 0x48
 __declspec(property(get=__get__Tr, put=__set__Tr)) ::ArrayW<int32_t,::Array<int32_t>*>  _Tr;

/// @brief Field _Tm offset 0x50
 __declspec(property(get=__get__Tm, put=__set__Tm)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _Tm;

/// @brief Field _workingKey offset 0x58
 __declspec(property(get=__get__workingKey, put=__set__workingKey)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _workingKey;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

constexpr void __set__Kr(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__Kr() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__Kr() const;

constexpr void __set__Km(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__Km() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__Km() const;

constexpr void __set__Tr(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get__Tr() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get__Tr() const;

constexpr void __set__Tm(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__Tm() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__Tm() const;

constexpr void __set__workingKey(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get__workingKey() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get__workingKey() const;

static inline ::Org::BouncyCastle::Crypto::Engines::Cast6Engine* New_ctor() ;

/// @brief Method .ctor addr 0xec5fd8 size 0xd4 virtual false final false
inline void _ctor() ;

/// @brief Method get_AlgorithmName addr 0xec60ac size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method Reset addr 0xec60ec size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method GetBlockSize addr 0xec60f0 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method SetKey addr 0xec60f8 size 0x9b8 virtual true final false
inline void SetKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method EncryptBlock addr 0xec6ab0 size 0x174 virtual true final false
inline int32_t EncryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcIndex, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstIndex) ;

/// @brief Method DecryptBlock addr 0xec6f68 size 0x174 virtual true final false
inline int32_t DecryptBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  src, int32_t  srcIndex, ::ArrayW<uint8_t,::Array<uint8_t>*>  dst, int32_t  dstIndex) ;

/// @brief Method CAST_Encipher addr 0xec6c24 size 0x344 virtual false final false
inline void CAST_Encipher(uint32_t  A, uint32_t  B, uint32_t  C, uint32_t  D, ::ArrayW<uint32_t,::Array<uint32_t>*>  result) ;

/// @brief Method CAST_Decipher addr 0xec70dc size 0x348 virtual false final false
inline void CAST_Decipher(uint32_t  A, uint32_t  B, uint32_t  C, uint32_t  D, ::ArrayW<uint32_t,::Array<uint32_t>*>  result) ;

// Ctor Parameters [CppParam { name: "", ty: "Cast6Engine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Cast6Engine(Cast6Engine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cast6Engine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cast6Engine(Cast6Engine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Cast6Engine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Cast6Engine, 0x60>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Cast6Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Cast6Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast6Engine");
