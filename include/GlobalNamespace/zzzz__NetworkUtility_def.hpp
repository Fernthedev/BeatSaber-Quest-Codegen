#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkUtility)
namespace GlobalNamespace {
struct __AuthenticationToken__Platform;
}
// Forward declare root types
namespace GlobalNamespace {
class NetworkUtility;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NetworkUtility);
// Type: ::NetworkUtility
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12902))
// CS Name: ::NetworkUtility*
class CORDL_TYPE NetworkUtility : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__nameEncryptionKey(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF__nameEncryptionKey() ;

static inline void setStaticF__nameEncryptionIv(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF__nameEncryptionIv() ;

/// @brief Method Init addr 0xe4d248 size 0xe0 virtual false final false
static inline void Init() ;

/// @brief Method GetHashedUserId addr 0xe4d328 size 0xcc virtual false final false
static inline ::StringW GetHashedUserId(::StringW  userId, ::GlobalNamespace::__AuthenticationToken__Platform  platform) ;

/// @brief Method EncryptName addr 0xe4d600 size 0x420 virtual false final false
static inline ::StringW EncryptName(::StringW  text) ;

/// @brief Method DecryptName addr 0xe4da20 size 0x424 virtual false final false
static inline ::StringW DecryptName(::StringW  text) ;

/// @brief Method GenerateId addr 0xe4de44 size 0x98 virtual false final false
static inline ::StringW GenerateId() ;

/// @brief Method GetHashBase64 addr 0xe4d3f4 size 0x20c virtual false final false
static inline ::StringW GetHashBase64(::StringW  input) ;

// Ctor Parameters [CppParam { name: "", ty: "NetworkUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkUtility(NetworkUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkUtility(NetworkUtility const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetworkUtility()  = default;
public:


// Fields

// Static field _nameEncryptionKey

// Static field _nameEncryptionIv


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NetworkUtility, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NetworkUtility);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkUtility*, "", "NetworkUtility");
