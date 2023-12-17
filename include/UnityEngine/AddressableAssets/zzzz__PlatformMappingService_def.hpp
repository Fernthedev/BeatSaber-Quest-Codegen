#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlatformMappingService)
namespace UnityEngine::AddressableAssets {
struct AddressablesPlatform;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class PlatformMappingService;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::PlatformMappingService);
// Type: UnityEngine.AddressableAssets::PlatformMappingService
namespace UnityEngine::AddressableAssets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14099))
// CS Name: ::UnityEngine.AddressableAssets::PlatformMappingService*
class CORDL_TYPE PlatformMappingService : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_s_RuntimeTargetMapping(::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform,::UnityEngine::AddressableAssets::AddressablesPlatform>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::RuntimePlatform,::UnityEngine::AddressableAssets::AddressablesPlatform>* getStaticF_s_RuntimeTargetMapping() ;

/// @brief Method GetAddressablesPlatformInternal addr 0x2a28348 size 0xd4 virtual false final false
static inline ::UnityEngine::AddressableAssets::AddressablesPlatform GetAddressablesPlatformInternal(::UnityEngine::RuntimePlatform  platform) ;

/// @brief Method GetAddressablesPlatformPathInternal addr 0x2a2841c size 0x120 virtual false final false
static inline ::StringW GetAddressablesPlatformPathInternal(::UnityEngine::RuntimePlatform  platform) ;

/// @brief Method GetPlatform addr 0x2a2853c size 0x60 virtual false final false
static inline ::UnityEngine::AddressableAssets::AddressablesPlatform GetPlatform() ;

/// @brief Method GetPlatformPathSubFolder addr 0x2a1c1f4 size 0x60 virtual false final false
static inline ::StringW GetPlatformPathSubFolder() ;

static inline ::UnityEngine::AddressableAssets::PlatformMappingService* New_ctor() ;

/// @brief Method .ctor addr 0x2a2859c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformMappingService", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformMappingService(PlatformMappingService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformMappingService", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformMappingService(PlatformMappingService const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformMappingService()  = default;
public:


// Fields

// Static field s_RuntimeTargetMapping


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::PlatformMappingService, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::PlatformMappingService);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::PlatformMappingService*, "UnityEngine.AddressableAssets", "PlatformMappingService");
