#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BCrypt)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class BCrypt;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::BCrypt);
// Type: Org.BouncyCastle.Crypto.Generators::BCrypt
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(887))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::BCrypt*
class CORDL_TYPE BCrypt : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field MAGIC_STRING_LENGTH offset 0x0
static constexpr int32_t  MAGIC_STRING_LENGTH{static_cast<int32_t>(0x6)};

/// @brief Field ROUNDS offset 0x0
static constexpr int32_t  ROUNDS{static_cast<int32_t>(0x10)};

/// @brief Field SBOX_SK offset 0x0
static constexpr int32_t  SBOX_SK{static_cast<int32_t>(0x100)};

/// @brief Field SBOX_SK2 offset 0x0
static constexpr int32_t  SBOX_SK2{static_cast<int32_t>(0x200)};

/// @brief Field SBOX_SK3 offset 0x0
static constexpr int32_t  SBOX_SK3{static_cast<int32_t>(0x300)};

/// @brief Field P_SZ offset 0x0
static constexpr int32_t  P_SZ{static_cast<int32_t>(0x12)};

/// @brief Field SALT_SIZE_BYTES offset 0x0
static constexpr int32_t  SALT_SIZE_BYTES{static_cast<int32_t>(0x10)};

/// @brief Field MIN_COST offset 0x0
static constexpr int32_t  MIN_COST{static_cast<int32_t>(0x4)};

/// @brief Field MAX_COST offset 0x0
static constexpr int32_t  MAX_COST{static_cast<int32_t>(0x1f)};

/// @brief Field MAX_PASSWORD_BYTES offset 0x0
static constexpr int32_t  MAX_PASSWORD_BYTES{static_cast<int32_t>(0x48)};

/// @brief Field S offset 0x10
 __declspec(property(get=__get_S, put=__set_S)) ::ArrayW<uint32_t,::Array<uint32_t>*>  S;

/// @brief Field P offset 0x18
 __declspec(property(get=__get_P, put=__set_P)) ::ArrayW<uint32_t,::Array<uint32_t>*>  P;

static inline void setStaticF_MAGIC_STRING(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_MAGIC_STRING() ;

static inline void setStaticF_KP(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KP() ;

static inline void setStaticF_KS0(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS0() ;

static inline void setStaticF_KS1(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS1() ;

static inline void setStaticF_KS2(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS2() ;

static inline void setStaticF_KS3(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_KS3() ;

constexpr void __set_S(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_S() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_S() const;

constexpr void __set_P(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_P() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_P() const;

static inline ::Org::BouncyCastle::Crypto::Generators::BCrypt* New_ctor() ;

/// @brief Method .ctor addr 0xef5a9c size 0x6c virtual false final false
inline void _ctor() ;

/// @brief Method F addr 0xef5b08 size 0x84 virtual false final false
inline uint32_t F(uint32_t  x) ;

/// @brief Method ProcessTable addr 0xef5b8c size 0x134 virtual false final false
inline void ProcessTable(uint32_t  xl, uint32_t  xr, ::ArrayW<uint32_t,::Array<uint32_t>*>  table) ;

/// @brief Method InitState addr 0xef5cc0 size 0x100 virtual false final false
inline void InitState() ;

/// @brief Method CyclicXorKey addr 0xef5dc0 size 0x88 virtual false final false
inline void CyclicXorKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method EncryptMagicString addr 0xef5e48 size 0x2d0 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncryptMagicString() ;

/// @brief Method ProcessTableWithSalt addr 0xef6118 size 0x25c virtual false final false
inline void ProcessTableWithSalt(::ArrayW<uint32_t,::Array<uint32_t>*>  table, ::ArrayW<uint32_t,::Array<uint32_t>*>  salt32Bit, uint32_t  iv1, uint32_t  iv2) ;

/// @brief Method DeriveRawKey addr 0xef6374 size 0x320 virtual false final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> DeriveRawKey(int32_t  cost, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, ::ArrayW<uint8_t,::Array<uint8_t>*>  psw) ;

/// @brief Method PasswordToByteArray addr 0xef6694 size 0x70 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> PasswordToByteArray(::ArrayW<char16_t,::Array<char16_t>*>  password) ;

/// @brief Method Generate addr 0xef6704 size 0x1c8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Generate(::ArrayW<uint8_t,::Array<uint8_t>*>  password, ::ArrayW<uint8_t,::Array<uint8_t>*>  salt, int32_t  cost) ;

// Ctor Parameters [CppParam { name: "", ty: "BCrypt", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BCrypt(BCrypt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BCrypt", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BCrypt(BCrypt const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BCrypt()  = default;
public:


// Fields

// Static field MAGIC_STRING

// Static field KP

// Static field KS0

// Static field KS1

// Static field KS2

// Static field KS3


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::BCrypt, 0x20>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::BCrypt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::BCrypt*, "Org.BouncyCastle.Crypto.Generators", "BCrypt");
