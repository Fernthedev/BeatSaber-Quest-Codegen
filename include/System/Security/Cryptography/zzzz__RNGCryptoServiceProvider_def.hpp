#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RandomNumberGenerator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RNGCryptoServiceProvider)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RNGCryptoServiceProvider);
// Type: System.Security.Cryptography::RNGCryptoServiceProvider
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2946))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2982))
// CS Name: ::System.Security.Cryptography::RNGCryptoServiceProvider*
class CORDL_TYPE RNGCryptoServiceProvider : public ::System::Security::Cryptography::RandomNumberGenerator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Security::Cryptography::RandomNumberGenerator)]{};

/// @brief Field _handle offset 0x10
 __declspec(property(get=__get__handle, put=__set__handle)) ::cordl_internals::intptr_t  _handle;

static inline void setStaticF__lock(::System::Object*  value) ;

static inline ::System::Object* getStaticF__lock() ;

constexpr void __set__handle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get__handle() ;

constexpr ::cordl_internals::intptr_t const& __get__handle() const;

static inline ::System::Security::Cryptography::RNGCryptoServiceProvider* New_ctor() ;

/// @brief Method .ctor addr 0x246be20 size 0x98 virtual false final false
inline void _ctor() ;

/// @brief Method Check addr 0x2472d54 size 0xb4 virtual false final false
inline void Check() ;

/// @brief Method RngOpen addr 0x2472d4c size 0x4 virtual false final false
static inline bool RngOpen() ;

/// @brief Method RngInitialize addr 0x2472d50 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t RngInitialize(::cordl_internals::Ptr<uint8_t>  seed, ::cordl_internals::intptr_t  seed_length) ;

/// @brief Method RngGetBytes addr 0x2472e08 size 0x4 virtual false final false
static inline ::cordl_internals::intptr_t RngGetBytes(::cordl_internals::intptr_t  handle, ::cordl_internals::Ptr<uint8_t>  data, ::cordl_internals::intptr_t  data_length) ;

/// @brief Method RngClose addr 0x2472e0c size 0x4 virtual false final false
static inline void RngClose(::cordl_internals::intptr_t  handle) ;

/// @brief Method GetBytes addr 0x2472e10 size 0x21c virtual true final false
inline void GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Finalize addr 0x247302c size 0x118 virtual true final false
inline void Finalize() ;

/// @brief Method Dispose addr 0x2473144 size 0xc virtual true final false
inline void Dispose(bool  disposing) ;

// Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RNGCryptoServiceProvider(RNGCryptoServiceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RNGCryptoServiceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RNGCryptoServiceProvider(RNGCryptoServiceProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RNGCryptoServiceProvider()  = default;
public:


// Fields

// Static field _lock


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RNGCryptoServiceProvider, 0x18>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RNGCryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RNGCryptoServiceProvider*, "System.Security.Cryptography", "RNGCryptoServiceProvider");
