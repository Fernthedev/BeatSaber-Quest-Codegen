#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost28147Engine)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class Gost28147Engine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine);
// Type: Org.BouncyCastle.Crypto.Engines::Gost28147Engine
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(845))
// CS Name: ::Org.BouncyCastle.Crypto.Engines::Gost28147Engine*
class CORDL_TYPE Gost28147Engine : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field BlockSize offset 0x0
static constexpr int32_t  BlockSize{static_cast<int32_t>(0x8)};

/// @brief Field workingKey offset 0x10
 __declspec(property(get=__get_workingKey, put=__set_workingKey)) ::ArrayW<int32_t,::Array<int32_t>*>  workingKey;

/// @brief Field forEncryption offset 0x18
 __declspec(property(get=__get_forEncryption, put=__set_forEncryption)) bool  forEncryption;

/// @brief Field S offset 0x20
 __declspec(property(get=__get_S, put=__set_S)) ::ArrayW<uint8_t,::Array<uint8_t>*>  S;

 __declspec(property(get=get_AlgorithmName)) ::StringW  AlgorithmName;

 __declspec(property(get=get_IsPartialBlockOkay)) bool  IsPartialBlockOkay;

/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
constexpr operator  ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

constexpr void __set_workingKey(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*>& __get_workingKey() ;

constexpr ::ArrayW<int32_t,::Array<int32_t>*> const& __get_workingKey() const;

constexpr void __set_forEncryption(bool  value) ;

constexpr bool& __get_forEncryption() ;

constexpr bool const& __get_forEncryption() const;

constexpr void __set_S(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_S() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_S() const;

static inline void setStaticF_Sbox_Default(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_Sbox_Default() ;

static inline void setStaticF_ESbox_Test(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ESbox_Test() ;

static inline void setStaticF_ESbox_A(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ESbox_A() ;

static inline void setStaticF_ESbox_B(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ESbox_B() ;

static inline void setStaticF_ESbox_C(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ESbox_C() ;

static inline void setStaticF_ESbox_D(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_ESbox_D() ;

static inline void setStaticF_DSbox_Test(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_DSbox_Test() ;

static inline void setStaticF_DSbox_A(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_DSbox_A() ;

static inline void setStaticF_sBoxes(::System::Collections::IDictionary*  value) ;

static inline ::System::Collections::IDictionary* getStaticF_sBoxes() ;

/// @brief Method AddSBox addr 0xed0ed0 size 0x11c virtual false final false
static inline void AddSBox(::StringW  sBoxName, ::ArrayW<uint8_t,::Array<uint8_t>*>  sBox) ;

static inline ::Org::BouncyCastle::Crypto::Engines::Gost28147Engine* New_ctor() ;

/// @brief Method .ctor addr 0xed0fec size 0x6c virtual false final false
inline void _ctor() ;

/// @brief Method Init addr 0xed1058 size 0x264 virtual true final false
inline void Init(bool  forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters*  parameters) ;

/// @brief Method get_AlgorithmName addr 0xed13f0 size 0x40 virtual true final false
inline ::StringW get_AlgorithmName() ;

/// @brief Method get_IsPartialBlockOkay addr 0xed1430 size 0x8 virtual true final false
inline bool get_IsPartialBlockOkay() ;

/// @brief Method GetBlockSize addr 0xed1438 size 0x8 virtual true final false
inline int32_t GetBlockSize() ;

/// @brief Method ProcessBlock addr 0xed1440 size 0x118 virtual true final false
inline int32_t ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, int32_t  outOff) ;

/// @brief Method Reset addr 0xed179c size 0x4 virtual true final false
inline void Reset() ;

/// @brief Method generateWorkingKey addr 0xed12bc size 0x134 virtual false final false
inline ::ArrayW<int32_t,::Array<int32_t>*> generateWorkingKey(bool  forEncryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  userKey) ;

/// @brief Method Gost28147_mainStep addr 0xed1814 size 0xe8 virtual false final false
inline int32_t Gost28147_mainStep(int32_t  n1, int32_t  key) ;

/// @brief Method Gost28147Func addr 0xed1558 size 0x244 virtual false final false
inline void Gost28147Func(::ArrayW<int32_t,::Array<int32_t>*>  workingKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method bytesToint addr 0xed17a0 size 0x74 virtual false final false
static inline int32_t bytesToint(::ArrayW<uint8_t,::Array<uint8_t>*>  inBytes, int32_t  inOff) ;

/// @brief Method intTobytes addr 0xed18fc size 0x80 virtual false final false
static inline void intTobytes(int32_t  num, ::ArrayW<uint8_t,::Array<uint8_t>*>  outBytes, int32_t  outOff) ;

/// @brief Method GetSBox addr 0xed197c size 0x1c0 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetSBox(::StringW  sBoxName) ;

/// @brief Method GetSBoxName addr 0xed1b3c size 0x55c virtual false final false
static inline ::StringW GetSBoxName(::ArrayW<uint8_t,::Array<uint8_t>*>  sBox) ;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Engine", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Gost28147Engine(Gost28147Engine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Gost28147Engine", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Gost28147Engine(Gost28147Engine const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Gost28147Engine()  = default;
public:


// Fields

// Static field Sbox_Default

// Static field ESbox_Test

// Static field ESbox_A

// Static field ESbox_B

// Static field ESbox_C

// Static field ESbox_D

// Static field DSbox_Test

// Static field DSbox_A

// Static field sBoxes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::Gost28147Engine, 0x28>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::Gost28147Engine*, "Org.BouncyCastle.Crypto.Engines", "Gost28147Engine");
