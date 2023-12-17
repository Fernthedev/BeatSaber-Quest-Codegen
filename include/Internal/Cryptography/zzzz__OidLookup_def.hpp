#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OidLookup)
namespace Internal::Cryptography {
class __OidLookup____c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Security::Cryptography {
struct OidGroup;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
// Forward declare root types
namespace Internal::Cryptography {
class OidLookup;
}
namespace Internal::Cryptography {
class __OidLookup____c;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Cryptography::OidLookup);
MARK_REF_PTR_T(::Internal::Cryptography::__OidLookup____c);
// Type: ::<>c
namespace Internal::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8853))
// CS Name: ::OidLookup::<>c*
class CORDL_TYPE __OidLookup____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::Internal::Cryptography::__OidLookup____c*  value) ;

static inline ::Internal::Cryptography::__OidLookup____c* getStaticF___9() ;

static inline ::Internal::Cryptography::__OidLookup____c* New_ctor() ;

/// @brief Method .ctor addr 0x2828fcc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <.cctor>b__10_0 addr 0x2828fd4 size 0x3c virtual false final false
inline ::StringW __cctor_b__10_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  kvp) ;

/// @brief Method <.cctor>b__10_1 addr 0x2829010 size 0x3c virtual false final false
inline ::StringW __cctor_b__10_1(::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>  kvp) ;

// Ctor Parameters [CppParam { name: "", ty: "__OidLookup____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OidLookup____c(__OidLookup____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OidLookup____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OidLookup____c(__OidLookup____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OidLookup____c()  = default;
public:


// Fields

// Static field <>9


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::__OidLookup____c, 0x10>, "Size mismatch!");

} // namespace end def Internal::Cryptography
// Type: Internal.Cryptography::OidLookup
namespace Internal::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8854))
// CS Name: ::Internal.Cryptography::OidLookup*
class CORDL_TYPE OidLookup : public ::System::Object {
public:
// Declarations
using __c = ::Internal::Cryptography::__OidLookup____c;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_lateBoundOidToFriendlyName(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW>* getStaticF_s_lateBoundOidToFriendlyName() ;

static inline void setStaticF_s_lateBoundFriendlyNameToOid(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::StringW>* getStaticF_s_lateBoundFriendlyNameToOid() ;

static inline void setStaticF_s_friendlyNameToOid(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_friendlyNameToOid() ;

static inline void setStaticF_s_oidToFriendlyName(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_oidToFriendlyName() ;

static inline void setStaticF_s_compatOids(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF_s_compatOids() ;

/// @brief Method ToFriendlyName addr 0x2826890 size 0x1e0 virtual false final false
static inline ::StringW ToFriendlyName(::StringW  oid, ::System::Security::Cryptography::OidGroup  oidGroup, bool  fallBackToAllGroups) ;

/// @brief Method ToOid addr 0x2826db0 size 0x1b4 virtual false final false
static inline ::StringW ToOid(::StringW  friendlyName, ::System::Security::Cryptography::OidGroup  oidGroup, bool  fallBackToAllGroups) ;

/// @brief Method ShouldUseCache addr 0x2826a70 size 0x8 virtual false final false
static inline bool ShouldUseCache(::System::Security::Cryptography::OidGroup  oidGroup) ;

/// @brief Method NativeOidToFriendlyName addr 0x2826a78 size 0x338 virtual false final false
static inline ::StringW NativeOidToFriendlyName(::StringW  oid, ::System::Security::Cryptography::OidGroup  oidGroup, bool  fallBackToAllGroups) ;

/// @brief Method NativeFriendlyNameToOid addr 0x2826f64 size 0x344 virtual false final false
static inline ::StringW NativeFriendlyNameToOid(::StringW  friendlyName, ::System::Security::Cryptography::OidGroup  oidGroup, bool  fallBackToAllGroups) ;

// Ctor Parameters [CppParam { name: "", ty: "OidLookup", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OidLookup(OidLookup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OidLookup", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OidLookup(OidLookup const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OidLookup()  = default;
public:


// Fields

// Static field s_lateBoundOidToFriendlyName

// Static field s_lateBoundFriendlyNameToOid

// Static field s_friendlyNameToOid

// Static field s_oidToFriendlyName

// Static field s_compatOids


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::OidLookup, 0x10>, "Size mismatch!");

} // namespace end def Internal::Cryptography
NEED_NO_BOX(::Internal::Cryptography::OidLookup);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::OidLookup*, "Internal.Cryptography", "OidLookup");
NEED_NO_BOX(::Internal::Cryptography::__OidLookup____c);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::__OidLookup____c*, "Internal.Cryptography", "OidLookup/<>c");
