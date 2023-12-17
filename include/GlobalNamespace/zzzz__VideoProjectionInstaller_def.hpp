#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(VideoProjectionInstaller)
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionInstaller);
// Type: ::VideoProjectionInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4981))
// CS Name: ::VideoProjectionInstaller*
class CORDL_TYPE VideoProjectionInstaller : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::MonoInstaller)]{};

/// @brief Field _sceneSetupData offset 0x20
 __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData)) ::GlobalNamespace::EnvironmentSceneSetupData*  _sceneSetupData;

constexpr void __set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData*  value) ;

constexpr ::GlobalNamespace::EnvironmentSceneSetupData* __get__sceneSetupData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSceneSetupData*> __get__sceneSetupData() const;

/// @brief Method InstallBindings addr 0x23b3b40 size 0xc4 virtual true final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::VideoProjectionInstaller* New_ctor() ;

/// @brief Method .ctor addr 0x23b3c04 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VideoProjectionInstaller(VideoProjectionInstaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VideoProjectionInstaller(VideoProjectionInstaller const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VideoProjectionInstaller()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionInstaller, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionInstaller*, "", "VideoProjectionInstaller");
