#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullEngine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class NullEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::NullEngine);
// Type: Org.BouncyCastle.Crypto.Engines::NullEngine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(853))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::NullEngine*
class CORDL_TYPE NullEngine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field BlockSize offset 0x0
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x1)};

/// @brief Field initialised offset 0x10
 __declspec(property(get=__get_initialised, put=__set_initialised)) bool  initialised;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

constexpr void __set_initialised(bool  value) ;

constexpr bool& __get_initialised() ;

constexpr bool const& __get_initialised() const;

static inline ::Org::BouncyCastle::Crypto::Engines::NullEngine* New_ctor() ;

/// @brief Method .ctor addr 0xed8470 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0xed8478 size 0xc virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xed8484 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xed84c4 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xed84cc size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xed84d4 size 0x138 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xed860c size 0x4 virtual true final false
inline void Reset() ;

// Ctor Parameters [CppParam { name: "", ty: "NullEngine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullEngine(NullEngine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullEngine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullEngine(NullEngine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NullEngine()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::NullEngine, 0x18>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::NullEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::NullEngine*, "Org.BouncyCastle.Crypto.Engines", "NullEngine");
