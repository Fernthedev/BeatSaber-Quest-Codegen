#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRVirtualKeyboardSampleInputHandler)
namespace GlobalNamespace {
class OVRRaycaster;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::EventSystems {
class OVRInputModule;
}
namespace GlobalNamespace {
struct __OVRInput__Controller;
}
namespace GlobalNamespace {
class OVRVirtualKeyboard;
}
namespace UnityEngine {
struct Quaternion;
}
namespace GlobalNamespace {
struct __OVRVirtualKeyboard__InputSource;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRVirtualKeyboardSampleInputHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler);
// Type: ::OVRVirtualKeyboardSampleInputHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8062))
// CS Name: ::OVRVirtualKeyboardSampleInputHandler*
class CORDL_TYPE OVRVirtualKeyboardSampleInputHandler : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field RAY_MAX_DISTANCE offset 0x0
static constexpr float_t  RAY_MAX_DISTANCE{100.0};

/// @brief Field THUMBSTICK_DEADZONE offset 0x0
static constexpr float_t  THUMBSTICK_DEADZONE{0.2};

/// @brief Field COLLISION_BOUNDS_ADDED_BLEED_PERCENT offset 0x0
static constexpr float_t  COLLISION_BOUNDS_ADDED_BLEED_PERCENT{0.1};

/// @brief Field LINEPOINTER_THINNING_THRESHOLD offset 0x0
static constexpr float_t  LINEPOINTER_THINNING_THRESHOLD{0.015};

/// @brief Field OVRVirtualKeyboard offset 0x18
 __declspec(property(get=__get_OVRVirtualKeyboard, put=__set_OVRVirtualKeyboard)) ::GlobalNamespace::OVRVirtualKeyboard*  OVRVirtualKeyboard;

/// @brief Field raycaster offset 0x20
 __declspec(property(get=__get_raycaster, put=__set_raycaster)) ::GlobalNamespace::OVRRaycaster*  raycaster;

/// @brief Field inputModule offset 0x28
 __declspec(property(get=__get_inputModule, put=__set_inputModule)) ::UnityEngine::EventSystems::OVRInputModule*  inputModule;

/// @brief Field leftLinePointer offset 0x30
 __declspec(property(get=__get_leftLinePointer, put=__set_leftLinePointer)) ::UnityEngine::LineRenderer*  leftLinePointer;

/// @brief Field rightLinePointer offset 0x38
 __declspec(property(get=__get_rightLinePointer, put=__set_rightLinePointer)) ::UnityEngine::LineRenderer*  rightLinePointer;

/// @brief Field interactionDevice_ offset 0x40
 __declspec(property(get=__get_interactionDevice_, put=__set_interactionDevice_)) ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller>  interactionDevice_;

/// @brief Field linePointerInitialWidth_ offset 0x48
 __declspec(property(get=__get_linePointerInitialWidth_, put=__set_linePointerInitialWidth_)) float_t  linePointerInitialWidth_;

 __declspec(property(get=get_AnalogStickX)) float_t  AnalogStickX;

 __declspec(property(get=get_AnalogStickY)) float_t  AnalogStickY;

 __declspec(property(get=get_InputRayPosition)) ::UnityEngine::Vector3  InputRayPosition;

 __declspec(property(get=get_InputRayRotation)) ::UnityEngine::Quaternion  InputRayRotation;

constexpr void __set_OVRVirtualKeyboard(::GlobalNamespace::OVRVirtualKeyboard*  value) ;

constexpr ::GlobalNamespace::OVRVirtualKeyboard* __get_OVRVirtualKeyboard() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRVirtualKeyboard*> __get_OVRVirtualKeyboard() const;

constexpr void __set_raycaster(::GlobalNamespace::OVRRaycaster*  value) ;

constexpr ::GlobalNamespace::OVRRaycaster* __get_raycaster() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRRaycaster*> __get_raycaster() const;

constexpr void __set_inputModule(::UnityEngine::EventSystems::OVRInputModule*  value) ;

constexpr ::UnityEngine::EventSystems::OVRInputModule* __get_inputModule() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::OVRInputModule*> __get_inputModule() const;

constexpr void __set_leftLinePointer(::UnityEngine::LineRenderer*  value) ;

constexpr ::UnityEngine::LineRenderer* __get_leftLinePointer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> __get_leftLinePointer() const;

constexpr void __set_rightLinePointer(::UnityEngine::LineRenderer*  value) ;

constexpr ::UnityEngine::LineRenderer* __get_rightLinePointer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::LineRenderer*> __get_rightLinePointer() const;

constexpr void __set_interactionDevice_(::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller>  value) ;

constexpr ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller>& __get_interactionDevice_() ;

constexpr ::System::Nullable_1<::GlobalNamespace::__OVRInput__Controller> const& __get_interactionDevice_() const;

constexpr void __set_linePointerInitialWidth_(float_t  value) ;

constexpr float_t& __get_linePointerInitialWidth_() ;

constexpr float_t const& __get_linePointerInitialWidth_() const;

/// @brief Method ApplyDeadzone addr 0x27a0040 size 0x50 virtual false final false
static inline float_t ApplyDeadzone(float_t  value) ;

/// @brief Method get_AnalogStickX addr 0x279fdd4 size 0xc4 virtual false final false
inline float_t get_AnalogStickX() ;

/// @brief Method get_AnalogStickY addr 0x279fd10 size 0xc4 virtual false final false
inline float_t get_AnalogStickY() ;

/// @brief Method get_InputRayPosition addr 0x279f7e8 size 0x24 virtual false final false
inline ::UnityEngine::Vector3 get_InputRayPosition() ;

/// @brief Method get_InputRayRotation addr 0x279fe98 size 0x198 virtual false final false
inline ::UnityEngine::Quaternion get_InputRayRotation() ;

/// @brief Method Start addr 0x27a0090 size 0xc4 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x27a0154 size 0x18 virtual false final false
inline void Update() ;

/// @brief Method UpdateLineRenderer addr 0x27a0424 size 0x68 virtual false final false
inline void UpdateLineRenderer() ;

/// @brief Method UpdateLineRendererFromSource addr 0x27a048c size 0x6e0 virtual false final false
inline void UpdateLineRendererFromSource(::GlobalNamespace::__OVRVirtualKeyboard__InputSource  source) ;

/// @brief Method UpdateInteractionAnchor addr 0x27a016c size 0x2b8 virtual false final false
inline void UpdateInteractionAnchor() ;

static inline ::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler* New_ctor() ;

/// @brief Method .ctor addr 0x27a0b6c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleInputHandler", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRVirtualKeyboardSampleInputHandler(OVRVirtualKeyboardSampleInputHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRVirtualKeyboardSampleInputHandler", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRVirtualKeyboardSampleInputHandler(OVRVirtualKeyboardSampleInputHandler const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRVirtualKeyboardSampleInputHandler()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*, "", "OVRVirtualKeyboardSampleInputHandler");
