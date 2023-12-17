#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoConfig)
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Cryptography {
class CryptoConfig;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::CryptoConfig);
// Type: System.Security.Cryptography::CryptoConfig
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2977))
// CS Name: ::System.Security.Cryptography::CryptoConfig*
class CORDL_TYPE CryptoConfig : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_lockObject(::System::Object*  value) ;

static inline ::System::Object* getStaticF_lockObject() ;

static inline void setStaticF_algorithms(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* getStaticF_algorithms() ;

/// @brief Method CreateFromName addr 0x246ad04 size 0x58 virtual false final false
static inline ::System::Object* CreateFromName(::StringW  name) ;

/// @brief Method CreateFromName addr 0x246c4d8 size 0x1f14 virtual false final false
static inline ::System::Object* CreateFromName(::StringW  name, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method MapNameToOID addr 0x246e538 size 0x7b4 virtual false final false
static inline ::StringW MapNameToOID(::StringW  name) ;

/// @brief Method EncodeOID addr 0x246ecec size 0x40c virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncodeOID(::StringW  str) ;

/// @brief Method EncodeLongNumber addr 0x246f0f8 size 0x190 virtual false final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> EncodeLongNumber(int64_t  x) ;

/// @brief Method get_AllowOnlyFipsAlgorithms addr 0x24682c4 size 0x8 virtual false final false
static inline bool get_AllowOnlyFipsAlgorithms() ;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CryptoConfig(CryptoConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CryptoConfig", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CryptoConfig(CryptoConfig const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CryptoConfig()  = default;
public:


// Fields

// Static field lockObject

// Static field algorithms


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::CryptoConfig, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::CryptoConfig);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CryptoConfig*, "System.Security.Cryptography", "CryptoConfig");
