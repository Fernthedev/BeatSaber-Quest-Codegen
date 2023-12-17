#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__SymmetricAlgorithm_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(Aes)
namespace System::Security::Cryptography {
class KeySizes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class Aes;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::Aes);
// Type: System.Security.Cryptography::Aes
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2973))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2917))
// CS Name: ::System.Security.Cryptography::Aes*
class CORDL_TYPE Aes : public ::System::Security::Cryptography::SymmetricAlgorithm {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Security::Cryptography::SymmetricAlgorithm)]{};

static inline void setStaticF_s_legalBlockSizes(::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  value) ;

static inline ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalBlockSizes() ;

static inline void setStaticF_s_legalKeySizes(::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*>  value) ;

static inline ::ArrayW<::System::Security::Cryptography::KeySizes*,::Array<::System::Security::Cryptography::KeySizes*>*> getStaticF_s_legalKeySizes() ;

static inline ::System::Security::Cryptography::Aes* New_ctor() ;

/// @brief Method .ctor addr 0x245bbd0 size 0x84 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Aes", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Aes(Aes && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Aes", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Aes(Aes const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Aes()  = default;
public:


// Fields

// Static field s_legalBlockSizes

// Static field s_legalKeySizes


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::Aes, 0x48>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::Aes);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::Aes*, "System.Security.Cryptography", "Aes");
