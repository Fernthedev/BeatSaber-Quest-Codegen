#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
CORDL_MODULE_EXPORT(AtlasSpriteProvider)
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class AtlasSpriteProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider);
// Type: UnityEngine.ResourceManagement.ResourceProviders::AtlasSpriteProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14013))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13995))
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::AtlasSpriteProvider*
class CORDL_TYPE AtlasSpriteProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase)]{};

/// @brief Method Provide addr 0x2bd5b34 size 0x34c virtual true final false
inline void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle  providerInterface) ;

static inline ::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2bd5e80 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AtlasSpriteProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AtlasSpriteProvider(AtlasSpriteProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AtlasSpriteProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AtlasSpriteProvider(AtlasSpriteProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AtlasSpriteProvider()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AtlasSpriteProvider");
