#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LayerMasks)
namespace UnityEngine {
struct LayerMask;
}
// Forward declare root types
namespace GlobalNamespace {
class LayerMasks;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LayerMasks);
// Type: ::LayerMasks
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16245))
// CS Name: ::LayerMasks*
class CORDL_TYPE LayerMasks : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF_saberLayerMask(::UnityEngine::LayerMask  value) ;

static inline ::UnityEngine::LayerMask getStaticF_saberLayerMask() ;

static inline void setStaticF_noteLayerMask(::UnityEngine::LayerMask  value) ;

static inline ::UnityEngine::LayerMask getStaticF_noteLayerMask() ;

static inline void setStaticF_noteDebrisLayerMask(::UnityEngine::LayerMask  value) ;

static inline ::UnityEngine::LayerMask getStaticF_noteDebrisLayerMask() ;

static inline void setStaticF_cutEffectParticlesLayerMask(::UnityEngine::LayerMask  value) ;

static inline ::UnityEngine::LayerMask getStaticF_cutEffectParticlesLayerMask() ;

static inline void setStaticF_noteDebrisLayer(int32_t  value) ;

static inline int32_t getStaticF_noteDebrisLayer() ;

static inline void setStaticF_cutEffectParticlesLayer(int32_t  value) ;

static inline int32_t getStaticF_cutEffectParticlesLayer() ;

/// @brief Method GetLayerMask addr 0x122da84 size 0x30 virtual false final false
static inline ::UnityEngine::LayerMask GetLayerMask(::StringW  layerName) ;

/// @brief Method GetLayerMask addr 0x122dab4 size 0x28 virtual false final false
static inline ::UnityEngine::LayerMask GetLayerMask(int32_t  layerNum) ;

/// @brief Method GetLayer addr 0x122dadc size 0x8 virtual false final false
static inline int32_t GetLayer(::StringW  layerName) ;

static inline ::GlobalNamespace::LayerMasks* New_ctor() ;

/// @brief Method .ctor addr 0x122dae4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LayerMasks(LayerMasks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LayerMasks", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LayerMasks(LayerMasks const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LayerMasks()  = default;
public:


// Fields

// Static field saberLayerMask

// Static field noteLayerMask

// Static field noteDebrisLayerMask

// Static field cutEffectParticlesLayerMask

// Static field noteDebrisLayer

// Static field cutEffectParticlesLayer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LayerMasks, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LayerMasks);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LayerMasks*, "", "LayerMasks");
