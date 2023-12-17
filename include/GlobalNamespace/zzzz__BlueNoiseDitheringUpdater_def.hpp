#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BlueNoiseDitheringUpdater)
namespace GlobalNamespace {
class BlueNoiseDithering;
}
namespace GlobalNamespace {
class RandomValueToShader;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class BlueNoiseDitheringUpdater;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BlueNoiseDitheringUpdater);
// Type: ::BlueNoiseDitheringUpdater
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14494))
// CS Name: ::BlueNoiseDitheringUpdater*
class CORDL_TYPE BlueNoiseDitheringUpdater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _blueNoiseDithering offset 0x18
 __declspec(property(get=__get__blueNoiseDithering, put=__set__blueNoiseDithering)) ::GlobalNamespace::BlueNoiseDithering*  _blueNoiseDithering;

/// @brief Field _randomValueToShader offset 0x20
 __declspec(property(get=__get__randomValueToShader, put=__set__randomValueToShader)) ::GlobalNamespace::RandomValueToShader*  _randomValueToShader;

constexpr void __set__blueNoiseDithering(::GlobalNamespace::BlueNoiseDithering*  value) ;

constexpr ::GlobalNamespace::BlueNoiseDithering* __get__blueNoiseDithering() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlueNoiseDithering*> __get__blueNoiseDithering() const;

constexpr void __set__randomValueToShader(::GlobalNamespace::RandomValueToShader*  value) ;

constexpr ::GlobalNamespace::RandomValueToShader* __get__randomValueToShader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomValueToShader*> __get__randomValueToShader() const;

/// @brief Method OnEnable addr 0x210aed8 size 0x164 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x210b03c size 0xec virtual false final false
inline void OnDisable() ;

/// @brief Method HandleCameraPreRender addr 0x210b128 size 0x60 virtual false final false
inline void HandleCameraPreRender(::UnityEngine::Camera*  camera) ;

static inline ::GlobalNamespace::BlueNoiseDitheringUpdater* New_ctor() ;

/// @brief Method .ctor addr 0x210b214 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDitheringUpdater", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BlueNoiseDitheringUpdater(BlueNoiseDitheringUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BlueNoiseDitheringUpdater", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BlueNoiseDitheringUpdater(BlueNoiseDitheringUpdater const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BlueNoiseDitheringUpdater()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BlueNoiseDitheringUpdater, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BlueNoiseDitheringUpdater);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BlueNoiseDitheringUpdater*, "", "BlueNoiseDitheringUpdater");
