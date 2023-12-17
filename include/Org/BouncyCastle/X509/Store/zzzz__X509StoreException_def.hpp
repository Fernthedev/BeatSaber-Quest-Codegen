#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509StoreException)
namespace System {
class Exception;
}
// Forward declare root types
namespace Org::BouncyCastle::X509::Store {
class X509StoreException;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::X509::Store::X509StoreException);
// Type: Org.BouncyCastle.X509.Store::X509StoreException
namespace Org::BouncyCastle::X509::Store {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1844))
// CS Name: ::Org.BouncyCastle.X509.Store::X509StoreException*
class CORDL_TYPE X509StoreException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x90};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x90 - sizeof(::System::Exception)]{};

static inline ::Org::BouncyCastle::X509::Store::X509StoreException* New_ctor() ;

/// @brief Method .ctor addr 0x11700d8 size 0x58 virtual false final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::X509::Store::X509StoreException* New_ctor(::StringW  message) ;

/// @brief Method .ctor addr 0x1170130 size 0x68 virtual false final false
inline void _ctor(::StringW  message) ;

static inline ::Org::BouncyCastle::X509::Store::X509StoreException* New_ctor(::StringW  message, ::System::Exception*  e) ;

/// @brief Method .ctor addr 0x1170198 size 0x70 virtual false final false
inline void _ctor(::StringW  message, ::System::Exception*  e) ;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509StoreException(X509StoreException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509StoreException(X509StoreException const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509StoreException()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::X509::Store::X509StoreException, 0x90>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::X509::Store
NEED_NO_BOX(::Org::BouncyCastle::X509::Store::X509StoreException);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::Store::X509StoreException*, "Org.BouncyCastle.X509.Store", "X509StoreException");
