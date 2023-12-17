#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRCubemapCapture)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
struct KeyCode;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRCubemapCapture;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRCubemapCapture);
// Type: ::OVRCubemapCapture
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8085))
// CS Name: ::OVRCubemapCapture*
class CORDL_TYPE OVRCubemapCapture : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field autoTriggerAfterLaunch offset 0x18
 __declspec(property(get=__get_autoTriggerAfterLaunch, put=__set_autoTriggerAfterLaunch)) bool  autoTriggerAfterLaunch;

/// @brief Field autoTriggerDelay offset 0x1c
 __declspec(property(get=__get_autoTriggerDelay, put=__set_autoTriggerDelay)) float_t  autoTriggerDelay;

/// @brief Field autoTriggerElapse offset 0x20
 __declspec(property(get=__get_autoTriggerElapse, put=__set_autoTriggerElapse)) float_t  autoTriggerElapse;

/// @brief Field triggeredByKey offset 0x24
 __declspec(property(get=__get_triggeredByKey, put=__set_triggeredByKey)) ::UnityEngine::KeyCode  triggeredByKey;

/// @brief Field pathName offset 0x28
 __declspec(property(get=__get_pathName, put=__set_pathName)) ::StringW  pathName;

/// @brief Field cubemapSize offset 0x30
 __declspec(property(get=__get_cubemapSize, put=__set_cubemapSize)) int32_t  cubemapSize;

constexpr void __set_autoTriggerAfterLaunch(bool  value) ;

constexpr bool& __get_autoTriggerAfterLaunch() ;

constexpr bool const& __get_autoTriggerAfterLaunch() const;

constexpr void __set_autoTriggerDelay(float_t  value) ;

constexpr float_t& __get_autoTriggerDelay() ;

constexpr float_t const& __get_autoTriggerDelay() const;

constexpr void __set_autoTriggerElapse(float_t  value) ;

constexpr float_t& __get_autoTriggerElapse() ;

constexpr float_t const& __get_autoTriggerElapse() const;

constexpr void __set_triggeredByKey(::UnityEngine::KeyCode  value) ;

constexpr ::UnityEngine::KeyCode& __get_triggeredByKey() ;

constexpr ::UnityEngine::KeyCode const& __get_triggeredByKey() const;

constexpr void __set_pathName(::StringW  value) ;

constexpr ::StringW& __get_pathName() ;

constexpr ::StringW const& __get_pathName() const;

constexpr void __set_cubemapSize(int32_t  value) ;

constexpr int32_t& __get_cubemapSize() ;

constexpr int32_t const& __get_cubemapSize() const;

/// @brief Method Update addr 0x27a7c08 size 0xa8 virtual false final false
inline void Update() ;

/// @brief Method TriggerCubemapCapture addr 0x27a7cb0 size 0x2b0 virtual false final false
static inline void TriggerCubemapCapture(::UnityEngine::Vector3  capturePos, int32_t  cubemapSize, ::StringW  pathName) ;

/// @brief Method RenderIntoCubemap addr 0x27a7f60 size 0x580 virtual false final false
static inline void RenderIntoCubemap(::UnityEngine::Camera*  ownerCamera, ::UnityEngine::Cubemap*  outCubemap) ;

/// @brief Method SaveCubemapCapture addr 0x27a84e0 size 0x774 virtual false final false
static inline bool SaveCubemapCapture(::UnityEngine::Cubemap*  cubemap, ::StringW  pathName) ;

static inline ::GlobalNamespace::OVRCubemapCapture* New_ctor() ;

/// @brief Method .ctor addr 0x27a8c54 size 0x28 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRCubemapCapture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRCubemapCapture(OVRCubemapCapture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRCubemapCapture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRCubemapCapture(OVRCubemapCapture const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRCubemapCapture()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRCubemapCapture, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRCubemapCapture);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCubemapCapture*, "", "OVRCubemapCapture");
