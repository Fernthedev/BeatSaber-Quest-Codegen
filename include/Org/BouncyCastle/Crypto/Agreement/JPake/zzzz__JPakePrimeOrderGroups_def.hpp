#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JPakePrimeOrderGroups)
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroup;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
class JPakePrimeOrderGroups;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups);
// Type: Org.BouncyCastle.Crypto.Agreement.JPake::JPakePrimeOrderGroups
namespace Org::BouncyCastle::Crypto::Agreement::JPake {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(716))
// CS Name: ::Org.BouncyCastle.Crypto.Agreement.JPake::JPakePrimeOrderGroups*
class CORDL_TYPE JPakePrimeOrderGroups : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_SUN_JCE_1024(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*  value) ;

static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* getStaticF_SUN_JCE_1024() ;

static inline void setStaticF_NIST_2048(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*  value) ;

static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* getStaticF_NIST_2048() ;

static inline void setStaticF_NIST_3072(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup*  value) ;

static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroup* getStaticF_NIST_3072() ;

static inline ::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups* New_ctor() ;

/// @brief Method .ctor addr 0x1215a74 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroups", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JPakePrimeOrderGroups(JPakePrimeOrderGroups && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JPakePrimeOrderGroups", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JPakePrimeOrderGroups(JPakePrimeOrderGroups const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 JPakePrimeOrderGroups()  = default;
public:


// Fields

// Static field SUN_JCE_1024

// Static field NIST_2048

// Static field NIST_3072


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Agreement::JPake
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Agreement::JPake::JPakePrimeOrderGroups*, "Org.BouncyCastle.Crypto.Agreement.JPake", "JPakePrimeOrderGroups");
