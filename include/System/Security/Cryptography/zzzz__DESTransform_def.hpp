#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DESTransform)
namespace System::Security::Cryptography {
class SymmetricAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DESTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DESTransform);
// Type: System.Security.Cryptography::DESTransform
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2978))
// CS Name: ::System.Security.Cryptography::DESTransform*
class CORDL_TYPE DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::Mono::Security::Cryptography::SymmetricTransform)]{};

/// @brief Field keySchedule offset 0x58
 __declspec(property(get=__get_keySchedule, put=__set_keySchedule)) ::ArrayW<uint8_t,::Array<uint8_t>*>  keySchedule;

/// @brief Field byteBuff offset 0x60
 __declspec(property(get=__get_byteBuff, put=__set_byteBuff)) ::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuff;

/// @brief Field dwordBuff offset 0x68
 __declspec(property(get=__get_dwordBuff, put=__set_dwordBuff)) ::ArrayW<uint32_t,::Array<uint32_t>*>  dwordBuff;

static inline void setStaticF_KEY_BIT_SIZE(int32_t  value) ;

static inline int32_t getStaticF_KEY_BIT_SIZE() ;

static inline void setStaticF_KEY_BYTE_SIZE(int32_t  value) ;

static inline int32_t getStaticF_KEY_BYTE_SIZE() ;

static inline void setStaticF_BLOCK_BIT_SIZE(int32_t  value) ;

static inline int32_t getStaticF_BLOCK_BIT_SIZE() ;

static inline void setStaticF_BLOCK_BYTE_SIZE(int32_t  value) ;

static inline int32_t getStaticF_BLOCK_BYTE_SIZE() ;

constexpr void __set_keySchedule(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_keySchedule() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_keySchedule() const;

constexpr void __set_byteBuff(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_byteBuff() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_byteBuff() const;

constexpr void __set_dwordBuff(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __get_dwordBuff() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __get_dwordBuff() const;

static inline void setStaticF_spBoxes(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_spBoxes() ;

static inline void setStaticF_PC1(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_PC1() ;

static inline void setStaticF_leftRotTotal(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_leftRotTotal() ;

static inline void setStaticF_PC2(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_PC2() ;

static inline void setStaticF_ipTab(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_ipTab() ;

static inline void setStaticF_fpTab(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

static inline ::ArrayW<uint32_t,::Array<uint32_t>*> getStaticF_fpTab() ;

static inline ::System::Security::Cryptography::DESTransform* New_ctor(::System::Security::Cryptography::SymmetricAlgorithm*  symmAlgo, bool  encryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv) ;

/// @brief Method .ctor addr 0x246f300 size 0x228 virtual false final false
inline void _ctor(::System::Security::Cryptography::SymmetricAlgorithm*  symmAlgo, bool  encryption, ::ArrayW<uint8_t,::Array<uint8_t>*>  key, ::ArrayW<uint8_t,::Array<uint8_t>*>  iv) ;

/// @brief Method CipherFunct addr 0x246f98c size 0x230 virtual false final false
inline uint32_t CipherFunct(uint32_t  r, int32_t  n) ;

/// @brief Method Permutation addr 0x246fbbc size 0x324 virtual false final false
static inline void Permutation(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output, ::ArrayW<uint32_t,::Array<uint32_t>*>  permTab, bool  preSwap) ;

/// @brief Method BSwap addr 0x246fee0 size 0x78 virtual false final false
static inline void BSwap(::ArrayW<uint8_t,::Array<uint8_t>*>  byteBuff) ;

/// @brief Method SetKey addr 0x246f600 size 0x38c virtual false final false
inline void SetKey(::ArrayW<uint8_t,::Array<uint8_t>*>  key) ;

/// @brief Method ProcessBlock addr 0x246ff58 size 0x388 virtual false final false
inline void ProcessBlock(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output) ;

/// @brief Method ECB addr 0x24702e0 size 0xa4 virtual true final false
inline void ECB(::ArrayW<uint8_t,::Array<uint8_t>*>  input, ::ArrayW<uint8_t,::Array<uint8_t>*>  output) ;

/// @brief Method GetStrongKey addr 0x246f528 size 0xd8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetStrongKey() ;

// Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DESTransform(DESTransform && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DESTransform", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DESTransform(DESTransform const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DESTransform()  = default;
public:


// Fields

// Static field KEY_BIT_SIZE

// Static field KEY_BYTE_SIZE

// Static field BLOCK_BIT_SIZE

// Static field BLOCK_BYTE_SIZE

// Static field spBoxes

// Static field PC1

// Static field leftRotTotal

// Static field PC2

// Static field ipTab

// Static field fpTab


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DESTransform, 0x70>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DESTransform*, "System.Security.Cryptography", "DESTransform");
