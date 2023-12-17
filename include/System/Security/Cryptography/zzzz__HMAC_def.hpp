#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__KeyedHashAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HMAC)
namespace System::Security::Cryptography {
class HashAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class HMAC;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::HMAC);
// Type: System.Security.Cryptography::HMAC
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2942))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2934))
// CS Name: ::System.Security.Cryptography::HMAC*
class CORDL_TYPE HMAC : public ::System::Security::Cryptography::KeyedHashAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::System::Security::Cryptography::KeyedHashAlgorithm)]{};

/// @brief Field blockSizeValue offset 0x30
 __declspec(property(get=__get_blockSizeValue, put=__set_blockSizeValue)) int32_t  blockSizeValue;

/// @brief Field m_hashName offset 0x38
 __declspec(property(get=__get_m_hashName, put=__set_m_hashName)) ::StringW  m_hashName;

/// @brief Field m_hash1 offset 0x40
 __declspec(property(get=__get_m_hash1, put=__set_m_hash1)) ::System::Security::Cryptography::HashAlgorithm*  m_hash1;

/// @brief Field m_hash2 offset 0x48
 __declspec(property(get=__get_m_hash2, put=__set_m_hash2)) ::System::Security::Cryptography::HashAlgorithm*  m_hash2;

/// @brief Field m_inner offset 0x50
 __declspec(property(get=__get_m_inner, put=__set_m_inner)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_inner;

/// @brief Field m_outer offset 0x58
 __declspec(property(get=__get_m_outer, put=__set_m_outer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  m_outer;

/// @brief Field m_hashing offset 0x60
 __declspec(property(get=__get_m_hashing, put=__set_m_hashing)) bool  m_hashing;

 __declspec(property(get=get_BlockSizeValue, put=set_BlockSizeValue)) int32_t  BlockSizeValue;

 __declspec(property(get=get_Key, put=set_Key)) ::ArrayW<uint8_t,::Array<uint8_t>*>  Key;

constexpr void __set_blockSizeValue(int32_t  value) ;

constexpr int32_t& __get_blockSizeValue() ;

constexpr int32_t const& __get_blockSizeValue() const;

constexpr void __set_m_hashName(::StringW  value) ;

constexpr ::StringW& __get_m_hashName() ;

constexpr ::StringW const& __get_m_hashName() const;

constexpr void __set_m_hash1(::System::Security::Cryptography::HashAlgorithm*  value) ;

constexpr ::System::Security::Cryptography::HashAlgorithm* __get_m_hash1() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> __get_m_hash1() const;

constexpr void __set_m_hash2(::System::Security::Cryptography::HashAlgorithm*  value) ;

constexpr ::System::Security::Cryptography::HashAlgorithm* __get_m_hash2() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::HashAlgorithm*> __get_m_hash2() const;

constexpr void __set_m_inner(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_m_inner() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_m_inner() const;

constexpr void __set_m_outer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_m_outer() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_m_outer() const;

constexpr void __set_m_hashing(bool  value) ;

constexpr bool& __get_m_hashing() ;

constexpr bool const& __get_m_hashing() const;

/// @brief Method get_BlockSizeValue addr 0x245e208 size 0x8 virtual false final false
inline int32_t get_BlockSizeValue() ;

/// @brief Method set_BlockSizeValue addr 0x245e210 size 0x8 virtual false final false
inline void set_BlockSizeValue(int32_t  value) ;

/// @brief Method UpdateIOPadBuffers addr 0x245e218 size 0x164 virtual false final false
inline void UpdateIOPadBuffers() ;

/// @brief Method InitializeKey addr 0x245e37c size 0xd4 virtual false final false
inline void InitializeKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method get_Key addr 0x245e450 size 0x78 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_Key() ;

/// @brief Method set_Key addr 0x245e4c8 size 0x74 virtual true final false
inline void set_Key(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method Create addr 0x245e53c size 0x70 virtual false final false
static inline ::System::Security::Cryptography::HMAC* Create() ;

/// @brief Method Initialize addr 0x245e5d4 size 0x48 virtual true final false
inline void Initialize() ;

/// @brief Method HashCore addr 0x245e61c size 0x88 virtual true final false
inline void HashCore(::ArrayW<uint8_t,::Array<uint8_t>*>  rgb, int32_t  ib, int32_t  cb) ;

/// @brief Method HashFinal addr 0x245e6a4 size 0x144 virtual true final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> HashFinal() ;

/// @brief Method Dispose addr 0x245e7e8 size 0x148 virtual true final false
inline void Dispose(bool  disposing) ;

static inline ::System::Security::Cryptography::HMAC* New_ctor() ;

/// @brief Method .ctor addr 0x245e978 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "HMAC", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HMAC(HMAC && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HMAC", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HMAC(HMAC const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 HMAC()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::HMAC, 0x68>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::HMAC);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::HMAC*, "System.Security.Cryptography", "HMAC");
