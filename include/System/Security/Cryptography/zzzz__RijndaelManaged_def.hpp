#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__Rijndael_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RijndaelManaged)
namespace System::Security::Cryptography {
struct RijndaelManagedTransformMode;
}
namespace System::Security::Cryptography {
struct CipherMode;
}
namespace System::Security::Cryptography {
class ICryptoTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RijndaelManaged;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RijndaelManaged);
// Type: System.Security.Cryptography::RijndaelManaged
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2949))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2950))
// CS Name: ::System.Security.Cryptography::RijndaelManaged*
class CORDL_TYPE RijndaelManaged : public ::System::Security::Cryptography::Rijndael {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Security::Cryptography::Rijndael)]{};

static inline ::System::Security::Cryptography::RijndaelManaged* New_ctor() ;

/// @brief Method .ctor addr 0x2460954 size 0xe0 virtual false final false
inline void _ctor() ;

/// @brief Method CreateEncryptor addr 0x2460a34 size 0x14 virtual true final false
inline ::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV) ;

/// @brief Method CreateDecryptor addr 0x2460b44 size 0x14 virtual true final false
inline ::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV) ;

/// @brief Method GenerateKey addr 0x2460b58 size 0x30 virtual true final false
inline void GenerateKey() ;

/// @brief Method GenerateIV addr 0x2460b88 size 0x30 virtual true final false
inline void GenerateIV() ;

/// @brief Method NewEncryptor addr 0x2460a48 size 0xfc virtual false final false
inline ::System::Security::Cryptography::ICryptoTransform* NewEncryptor(::ArrayW<uint8_t,::Array<uint8_t>*>  rgbKey, ::System::Security::Cryptography::CipherMode  mode, ::ArrayW<uint8_t,::Array<uint8_t>*>  rgbIV, int32_t  feedbackSize, ::System::Security::Cryptography::RijndaelManagedTransformMode  encryptMode) ;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelManaged", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RijndaelManaged(RijndaelManaged && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RijndaelManaged", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RijndaelManaged(RijndaelManaged const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RijndaelManaged()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RijndaelManaged, 0x48>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RijndaelManaged);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RijndaelManaged*, "System.Security.Cryptography", "RijndaelManaged");
