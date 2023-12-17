#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AudioReferenceCountingCache)
// Forward declare root types
namespace GlobalNamespace {
class AudioReferenceCountingCache;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AudioReferenceCountingCache);
// Type: ::AudioReferenceCountingCache
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5912), inst: 3826 }), TypeDefinitionIndex(TypeDefinitionIndex(5912)), TypeDefinitionIndex(TypeDefinitionIndex(15594)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 276 }), TypeDefinitionIndex(TypeDefinitionIndex(2773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5889))
// CS Name: ::AudioReferenceCountingCache*
class CORDL_TYPE AudioReferenceCountingCache : public ::GlobalNamespace::ReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::GlobalNamespace::ReferenceCountingCache_2<int32_t,::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*>)]{};

static inline ::GlobalNamespace::AudioReferenceCountingCache* New_ctor() ;

/// @brief Method .ctor addr 0x22fbc9c size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioReferenceCountingCache(AudioReferenceCountingCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioReferenceCountingCache", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioReferenceCountingCache(AudioReferenceCountingCache const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AudioReferenceCountingCache()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AudioReferenceCountingCache, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AudioReferenceCountingCache);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AudioReferenceCountingCache*, "", "AudioReferenceCountingCache");
