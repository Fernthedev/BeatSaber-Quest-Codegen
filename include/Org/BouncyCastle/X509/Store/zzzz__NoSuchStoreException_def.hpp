#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/X509/Store/zzzz__X509StoreException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NoSuchStoreException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class NoSuchStoreException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::NoSuchStoreException);
// Type: Org.BouncyCastle.X509.Store::NoSuchStoreException
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(1844))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1845))
// CS Name: ::Org.BouncyCastle.X509.Store::NoSuchStoreException*
class CORDL_TYPE NoSuchStoreException : public ::Org::BouncyCastle::X509::Store::X509StoreException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::Org::BouncyCastle::X509::Store::X509StoreException)]{};

static inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* New_ctor() ;

/// @brief Method .ctor addr 0x1170208 size 0x4 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x117020c size 0x4 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::X509::Store::NoSuchStoreException* New_ctor(::StringW  message, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0x1170210 size 0x4 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchStoreException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoSuchStoreException(NoSuchStoreException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoSuchStoreException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoSuchStoreException(NoSuchStoreException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NoSuchStoreException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::NoSuchStoreException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::NoSuchStoreException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::NoSuchStoreException*, "Org.BouncyCastle.X509.Store", "NoSuchStoreException");
