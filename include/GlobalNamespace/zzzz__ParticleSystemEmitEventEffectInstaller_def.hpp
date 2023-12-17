#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleSystemEmitEventEffectInstaller)
namespace GlobalNamespace {
class ParticleSystemEventController;
}
// Forward declare root types
namespace GlobalNamespace {
class ParticleSystemEmitEventEffectInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller);
// Type: ::ParticleSystemEmitEventEffectInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4964))
// CS Name: ::ParticleSystemEmitEventEffectInstaller*
class CORDL_TYPE ParticleSystemEmitEventEffectInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _particleSystemEventControllerPrefab offset 0x20
 __declspec(property(get=__get__particleSystemEventControllerPrefab, put=__set__particleSystemEventControllerPrefab)) ::GlobalNamespace::ParticleSystemEventController*  _particleSystemEventControllerPrefab;

/// @brief Field _particleSystemEventControllerInitialSize offset 0x28
 __declspec(property(get=__get__particleSystemEventControllerInitialSize, put=__set__particleSystemEventControllerInitialSize)) int32_t  _particleSystemEventControllerInitialSize;

constexpr void __set__particleSystemEventControllerPrefab(::GlobalNamespace::ParticleSystemEventController*  value) ;

constexpr ::GlobalNamespace::ParticleSystemEventController* __get__particleSystemEventControllerPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ParticleSystemEventController*> __get__particleSystemEventControllerPrefab() const;

constexpr void __set__particleSystemEventControllerInitialSize(int32_t  value) ;

constexpr int32_t& __get__particleSystemEventControllerInitialSize() ;

constexpr int32_t const& __get__particleSystemEventControllerInitialSize() const;

/// @brief Method InstallBindings addr 0x23b0214 size 0xa8 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::ParticleSystemEmitEventEffectInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x23b02bc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ParticleSystemEmitEventEffectInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ParticleSystemEmitEventEffectInstaller(ParticleSystemEmitEventEffectInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ParticleSystemEmitEventEffectInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ParticleSystemEmitEventEffectInstaller, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ParticleSystemEmitEventEffectInstaller*, "", "ParticleSystemEmitEventEffectInstaller");
