#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VRInputModule)
namespace System {
template<typename T>
class Action_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace VRUIControls {
class MouseButtonEventData;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace VRUIControls {
class MouseState;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace VRUIControls {
class VRPointer;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace VRUIControls {
class VRInputModule;
}
// Write type traits
MARK_REF_PTR_T(::VRUIControls::VRInputModule);
// Type: VRUIControls::VRInputModule
namespace VRUIControls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13199))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15676))
// CS Name: ::VRUIControls::VRInputModule*
class CORDL_TYPE VRInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x88};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x88 - sizeof(::UnityEngine::EventSystems::BaseInputModule)]{};

/// @brief Field kMouseLeftId offset 0x0
static constexpr int32_t  kMouseLeftId{static_cast<int32_t>(0xffffffff)};

/// @brief Field kMinPressValue offset 0x0
static constexpr float_t  kMinPressValue{0.9};

/// @brief Field _vrPointer offset 0x50
 __declspec(property(get=__get__vrPointer, put=__set__vrPointer)) ::VRUIControls::VRPointer*  _vrPointer;

/// @brief Field _rumblePreset offset 0x58
 __declspec(property(get=__get__rumblePreset, put=__set__rumblePreset)) ::Libraries::HM::HMLib::VR::HapticPresetSO*  _rumblePreset;

/// @brief Field _hapticFeedbackManager offset 0x60
 __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager)) ::GlobalNamespace::HapticFeedbackManager*  _hapticFeedbackManager;

/// @brief Field onProcessMousePressEvent offset 0x68
 __declspec(property(get=__get_onProcessMousePressEvent, put=__set_onProcessMousePressEvent)) ::System::Action_1<::UnityEngine::GameObject*>*  onProcessMousePressEvent;

/// @brief Field _pointerData offset 0x70
 __declspec(property(get=__get__pointerData, put=__set__pointerData)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  _pointerData;

/// @brief Field _componentList offset 0x78
 __declspec(property(get=__get__componentList, put=__set__componentList)) ::System::Collections::Generic::List_1<::UnityEngine::Component*>*  _componentList;

/// @brief Field _mouseState offset 0x80
 __declspec(property(get=__get__mouseState, put=__set__mouseState)) ::VRUIControls::MouseState*  _mouseState;

constexpr void __set__vrPointer(::VRUIControls::VRPointer*  value) ;

constexpr ::VRUIControls::VRPointer* __get__vrPointer() ;

constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> __get__vrPointer() const;

constexpr void __set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  value) ;

constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO* __get__rumblePreset() ;

constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> __get__rumblePreset() const;

constexpr void __set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager*  value) ;

constexpr ::GlobalNamespace::HapticFeedbackManager* __get__hapticFeedbackManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> __get__hapticFeedbackManager() const;

constexpr void __set_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>*  value) ;

constexpr ::System::Action_1<::UnityEngine::GameObject*>* __get_onProcessMousePressEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::GameObject*>*> __get_onProcessMousePressEvent() const;

constexpr void __set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* __get__pointerData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*> __get__pointerData() const;

constexpr void __set__componentList(::System::Collections::Generic::List_1<::UnityEngine::Component*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Component*>* __get__componentList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Component*>*> __get__componentList() const;

constexpr void __set__mouseState(::VRUIControls::MouseState*  value) ;

constexpr ::VRUIControls::MouseState* __get__mouseState() ;

constexpr ::cordl_internals::to_const_pointer<::VRUIControls::MouseState*> __get__mouseState() const;

static inline void setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*  value) ;

static inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* getStaticF__raycastComparer() ;

/// @brief Method add_onProcessMousePressEvent addr 0x2eb5fe8 size 0xb0 virtual false final false
inline void add_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>*  value) ;

/// @brief Method remove_onProcessMousePressEvent addr 0x2eb6098 size 0xb0 virtual false final false
inline void remove_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>*  value) ;

/// @brief Method OnDisable addr 0x2eb6148 size 0x1c virtual true final false
inline void OnDisable() ;

/// @brief Method GetPointerData addr 0x2eb636c size 0xec virtual false final false
inline bool GetPointerData(int32_t  id, ByRef<::UnityEngine::EventSystems::PointerEventData*>  data, bool  create) ;

/// @brief Method GetMousePointerEventData addr 0x2eb6458 size 0x39c virtual true final false
inline ::VRUIControls::MouseState* GetMousePointerEventData(int32_t  id) ;

/// @brief Method GetLastPointerEventData addr 0x2eb67f4 size 0x20 virtual false final false
inline ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t  id) ;

/// @brief Method ShouldStartDrag addr 0x2eb6814 size 0x30 virtual false final false
inline bool ShouldStartDrag(::UnityEngine::Vector2  pressPos, ::UnityEngine::Vector2  currentPos, float_t  threshold, bool  useDragThreshold) ;

/// @brief Method ProcessMove addr 0x2eb6844 size 0x18 virtual true final false
inline void ProcessMove(::UnityEngine::EventSystems::PointerEventData*  pointerEvent) ;

/// @brief Method ProcessDrag addr 0x2eb7154 size 0x2c4 virtual true final false
inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData*  pointerEvent) ;

/// @brief Method IsPointerOverGameObject addr 0x2eb7418 size 0x9c virtual true final false
inline bool IsPointerOverGameObject(int32_t  pointerId) ;

/// @brief Method ClearSelection addr 0x2eb6164 size 0x208 virtual false final false
inline void ClearSelection() ;

/// @brief Method ToString addr 0x2eb74b4 size 0x270 virtual true final false
inline ::StringW ToString() ;

/// @brief Method DeselectIfSelectionChanged addr 0x2eb7724 size 0xf0 virtual false final false
inline void DeselectIfSelectionChanged(::UnityEngine::GameObject*  currentOverGo, ::UnityEngine::EventSystems::BaseEventData*  pointerEvent) ;

/// @brief Method Process addr 0x2eb7814 size 0x1fc virtual true final false
inline void Process() ;

/// @brief Method SendUpdateEventToSelectedObject addr 0x2eb8198 size 0x148 virtual false final false
inline bool SendUpdateEventToSelectedObject() ;

/// @brief Method ProcessMousePress addr 0x2eb7a10 size 0x720 virtual false final false
inline void ProcessMousePress(::VRUIControls::MouseButtonEventData*  data) ;

/// @brief Method HandlePointerExitAndEnter addr 0x2eb685c size 0x8f8 virtual false final false
inline void HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData*  currentPointerData, ::UnityEngine::GameObject*  newEnterTarget) ;

/// @brief Method RaycastComparer addr 0x2eb82e0 size 0x3e4 virtual false final false
static inline int32_t RaycastComparer(::UnityEngine::EventSystems::RaycastResult  lhs, ::UnityEngine::EventSystems::RaycastResult  rhs) ;

static inline ::VRUIControls::VRInputModule* New_ctor() ;

/// @brief Method .ctor addr 0x2eb86c4 size 0xf0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRInputModule(VRInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRInputModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRInputModule(VRInputModule const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 VRInputModule()  = default;
public:


// Fields

// Static field _raycastComparer


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::VRUIControls::VRInputModule, 0x88>, "Size mismatch!");

} // namespace end def VRUIControls
NEED_NO_BOX(::VRUIControls::VRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::VRUIControls::VRInputModule*, "VRUIControls", "VRInputModule");
