#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainEffectCore)
// Forward declare root types
namespace GlobalNamespace {
class MainEffectCore;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainEffectCore);
// Type: ::MainEffectCore
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15292))
// CS Name: ::MainEffectCore*
class CORDL_TYPE MainEffectCore : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__baseColorBoostID(int32_t  value) ;

static inline int32_t getStaticF__baseColorBoostID() ;

static inline void setStaticF__baseColorBoostThresholdID(int32_t  value) ;

static inline int32_t getStaticF__baseColorBoostThresholdID() ;

/// @brief Method SetGlobalShaderValues addr 0x2807f18 size 0x88 virtual false final false
static inline void SetGlobalShaderValues(float_t  baseColorBoost, float_t  baseColorBoostThreshold) ;

static inline ::GlobalNamespace::MainEffectCore* New_ctor() ;

/// @brief Method .ctor addr 0x280892c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectCore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainEffectCore(MainEffectCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainEffectCore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainEffectCore(MainEffectCore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainEffectCore()  = default;
public:


// Fields

// Static field _baseColorBoostID

// Static field _baseColorBoostThresholdID


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainEffectCore, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainEffectCore);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainEffectCore*, "", "MainEffectCore");
