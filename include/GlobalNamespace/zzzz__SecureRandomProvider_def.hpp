#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecureRandomProvider)
namespace GlobalNamespace {
class __SecureRandomProvider__SecureRandomState;
}
namespace System::Security::Cryptography {
class RNGCryptoServiceProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class SecureRandomProvider;
}
namespace GlobalNamespace {
class __SecureRandomProvider__SecureRandomState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SecureRandomProvider);
MARK_REF_PTR_T(::GlobalNamespace::__SecureRandomProvider__SecureRandomState);
// Type: ::SecureRandomState
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12956))
// CS Name: ::SecureRandomProvider::SecureRandomState*
class CORDL_TYPE __SecureRandomProvider__SecureRandomState : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field kBufferSize offset 0x0
static constexpr int32_t  kBufferSize{static_cast<int32_t>(0x4000)};

/// @brief Field _random offset 0x10
 __declspec(property(get=__get__random, put=__set__random)) ::System::Security::Cryptography::RNGCryptoServiceProvider*  _random;

/// @brief Field _randomBuffer0 offset 0x18
 __declspec(property(get=__get__randomBuffer0, put=__set__randomBuffer0)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _randomBuffer0;

/// @brief Field _randomBuffer1 offset 0x20
 __declspec(property(get=__get__randomBuffer1, put=__set__randomBuffer1)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _randomBuffer1;

/// @brief Field _index offset 0x28
 __declspec(property(get=__get__index, put=__set__index)) int32_t  _index;

constexpr void __set__random(::System::Security::Cryptography::RNGCryptoServiceProvider*  value) ;

constexpr ::System::Security::Cryptography::RNGCryptoServiceProvider* __get__random() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RNGCryptoServiceProvider*> __get__random() const;

constexpr void __set__randomBuffer0(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__randomBuffer0() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__randomBuffer0() const;

constexpr void __set__randomBuffer1(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get__randomBuffer1() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get__randomBuffer1() const;

constexpr void __set__index(int32_t  value) ;

constexpr int32_t& __get__index() ;

constexpr int32_t const& __get__index() const;

/// @brief Method GetBytes addr 0xe567c8 size 0xb8 virtual false final false
inline void GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method GetByte addr 0xe568e0 size 0xa8 virtual false final false
inline uint8_t GetByte() ;

/// @brief Method FillBuffer addr 0xe56b94 size 0x114 virtual false final false
inline void FillBuffer() ;

static inline ::GlobalNamespace::__SecureRandomProvider__SecureRandomState* New_ctor() ;

/// @brief Method .ctor addr 0xe56af0 size 0xa4 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__SecureRandomProvider__SecureRandomState", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SecureRandomProvider__SecureRandomState(__SecureRandomProvider__SecureRandomState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SecureRandomProvider__SecureRandomState", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SecureRandomProvider__SecureRandomState(__SecureRandomProvider__SecureRandomState const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SecureRandomProvider__SecureRandomState()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SecureRandomProvider__SecureRandomState, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::SecureRandomProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12957))
// CS Name: ::SecureRandomProvider*
class CORDL_TYPE SecureRandomProvider : public ::System::Object {
public:
// Declarations
using SecureRandomState = ::GlobalNamespace::__SecureRandomProvider__SecureRandomState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__secureRandomState(::GlobalNamespace::__SecureRandomProvider__SecureRandomState*  value) ;

static inline ::GlobalNamespace::__SecureRandomProvider__SecureRandomState* getStaticF__secureRandomState() ;

/// @brief Method GetBytes addr 0xe56720 size 0xa8 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetBytes(int32_t  length) ;

/// @brief Method GetByte addr 0xe56880 size 0x60 virtual false final false
static inline uint8_t GetByte() ;

/// @brief Method GetBytes addr 0xe56988 size 0x80 virtual false final false
static inline void GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  length) ;

/// @brief Method GetBytes addr 0xe56a08 size 0x74 virtual false final false
static inline void GetBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecureRandomProvider(SecureRandomProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecureRandomProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecureRandomProvider(SecureRandomProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SecureRandomProvider()  = default;
public:


// Fields

// Static field _secureRandomState


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SecureRandomProvider, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SecureRandomProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SecureRandomProvider*, "", "SecureRandomProvider");
NEED_NO_BOX(::GlobalNamespace::__SecureRandomProvider__SecureRandomState);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SecureRandomProvider__SecureRandomState*, "", "SecureRandomProvider/SecureRandomState");
