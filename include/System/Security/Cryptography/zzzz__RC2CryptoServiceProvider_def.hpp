#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RC2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2CryptoServiceProvider)
namespace System::Security::Cryptography {
class ICryptoTransform;
}
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2CryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RC2CryptoServiceProvider);
// Type: System.Security.Cryptography::RC2CryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2947))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2948))
// CS Name: ::System.Security.Cryptography::RC2CryptoServiceProvider*
class CORDL_TYPE RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2 {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::System::Security::Cryptography::RC2)]{};

/// @brief Field m_use40bitSalt offset 0x48
 __declspec(property(get=__get_m_use40bitSalt, put=__set_m_use40bitSalt)) bool  m_use40bitSalt;

 __declspec(property(get=get_EffectiveKeySize)) int32_t  EffectiveKeySize;

constexpr void __set_m_use40bitSalt(bool  value) ;

constexpr bool& __get_m_use40bitSalt() ;

constexpr bool const& __get_m_use40bitSalt() const;

static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  value) ;

static inline ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes() ;

static inline ::System::Security::Cryptography::RC2CryptoServiceProvider* New_ctor() ;

/// @brief Method .ctor addr 0x246029c size 0x174 virtual false final false
inline void _ctor() ;

/// @brief Method get_EffectiveKeySize addr 0x2460410 size 0x8 virtual true final false
inline int32_t get_EffectiveKeySize() ;

/// @brief Method CreateEncryptor addr 0x2460418 size 0xd4 virtual true final false
inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV) ;

/// @brief Method CreateDecryptor addr 0x24604ec size 0xd4 virtual true final false
inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV) ;

/// @brief Method GenerateKey addr 0x24605c0 size 0x7c virtual true final false
inline void GenerateKey() ;

/// @brief Method GenerateIV addr 0x246063c size 0x6c virtual true final false
inline void GenerateIV() ;

// Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RC2CryptoServiceProvider(RC2CryptoServiceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RC2CryptoServiceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RC2CryptoServiceProvider(RC2CryptoServiceProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RC2CryptoServiceProvider()  = default;
public:


// Fields

// Static field s_legalKeySizes


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RC2CryptoServiceProvider, 0x50>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RC2CryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2CryptoServiceProvider*, "System.Security.Cryptography", "RC2CryptoServiceProvider");
