#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OnScreenControl)
namespace UnityEngine::InputSystem::OnScreen {
struct __OnScreenControl__OnScreenDeviceInfo;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::OnScreen {
class OnScreenControl;
}
namespace UnityEngine::InputSystem::OnScreen {
struct __OnScreenControl__OnScreenDeviceInfo;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
MARK_VAL_T(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo);
// Type: ::OnScreenDeviceInfo
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6387))
// CS Name: ::OnScreenControl::OnScreenDeviceInfo
struct CORDL_TYPE __OnScreenControl__OnScreenDeviceInfo : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field eventPtr offset 0x0
 __declspec(property(get=__get_eventPtr, put=__set_eventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr;

/// @brief Field buffer offset 0x8
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::Unity::Collections::NativeArray_1<uint8_t>  buffer;

/// @brief Field device offset 0x18
 __declspec(property(get=__get_device, put=__set_device)) ::UnityEngine::InputSystem::InputDevice*  device;

/// @brief Field firstControl offset 0x20
 __declspec(property(get=__get_firstControl, put=__set_firstControl)) ::UnityEngine::InputSystem::OnScreen::OnScreenControl*  firstControl;

constexpr void __set_eventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __get_eventPtr() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __get_eventPtr() const;

constexpr void __set_buffer(::Unity::Collections::NativeArray_1<uint8_t>  value) ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __get_buffer() ;

constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __get_buffer() const;

constexpr void __set_device(::UnityEngine::InputSystem::InputDevice*  value) ;

constexpr ::UnityEngine::InputSystem::InputDevice* __get_device() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputDevice*> __get_device() const;

constexpr void __set_firstControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  value) ;

constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl* __get_firstControl() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::OnScreen::OnScreenControl*> __get_firstControl() const;

/// @brief Method AddControl addr 0x2ad9570 size 0x2c virtual false final false
inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo AddControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  control) ;

/// @brief Method RemoveControl addr 0x2ad98e8 size 0x110 virtual false final false
inline ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo RemoveControl(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  control) ;

/// @brief Method Destroy addr 0x2ad94bc size 0xb4 virtual false final false
inline void Destroy() ;

// Ctor Parameters [CppParam { name: "eventPtr", ty: "::UnityEngine::InputSystem::LowLevel::InputEventPtr", modifiers: "", def_value: None }, CppParam { name: "buffer", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::UnityEngine::InputSystem::InputDevice*", modifiers: "", def_value: None }, CppParam { name: "firstControl", ty: "::UnityEngine::InputSystem::OnScreen::OnScreenControl*", modifiers: "", def_value: None }]
constexpr __OnScreenControl__OnScreenDeviceInfo(::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, ::Unity::Collections::NativeArray_1<uint8_t>  buffer, ::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::OnScreen::OnScreenControl*  firstControl) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OnScreenControl__OnScreenDeviceInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OnScreenControl__OnScreenDeviceInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::OnScreen
// Type: UnityEngine.InputSystem.OnScreen::OnScreenControl
namespace UnityEngine::InputSystem::OnScreen {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6388))
// CS Name: ::UnityEngine.InputSystem.OnScreen::OnScreenControl*
class CORDL_TYPE OnScreenControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OnScreenDeviceInfo = ::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_Control offset 0x18
 __declspec(property(get=__get_m_Control, put=__set_m_Control)) ::UnityEngine::InputSystem::InputControl*  m_Control;

/// @brief Field m_NextControlOnDevice offset 0x20
 __declspec(property(get=__get_m_NextControlOnDevice, put=__set_m_NextControlOnDevice)) ::UnityEngine::InputSystem::OnScreen::OnScreenControl*  m_NextControlOnDevice;

/// @brief Field m_InputEventPtr offset 0x28
 __declspec(property(get=__get_m_InputEventPtr, put=__set_m_InputEventPtr)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_InputEventPtr;

 __declspec(property(get=get_controlPath, put=set_controlPath)) ::StringW  controlPath;

 __declspec(property(get=get_control)) ::UnityEngine::InputSystem::InputControl*  control;

 __declspec(property(get=get_controlPathInternal, put=set_controlPathInternal)) ::StringW  controlPathInternal;

constexpr void __set_m_Control(::UnityEngine::InputSystem::InputControl*  value) ;

constexpr ::UnityEngine::InputSystem::InputControl* __get_m_Control() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::InputControl*> __get_m_Control() const;

constexpr void __set_m_NextControlOnDevice(::UnityEngine::InputSystem::OnScreen::OnScreenControl*  value) ;

constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenControl* __get_m_NextControlOnDevice() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::OnScreen::OnScreenControl*> __get_m_NextControlOnDevice() const;

constexpr void __set_m_InputEventPtr(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __get_m_InputEventPtr() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __get_m_InputEventPtr() const;

static inline void setStaticF_s_OnScreenDevices(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo>  value) ;

static inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo> getStaticF_s_OnScreenDevices() ;

/// @brief Method get_controlPath addr 0x2ad8b80 size 0xc virtual false final false
inline ::StringW get_controlPath() ;

/// @brief Method set_controlPath addr 0x2ad8b8c size 0x38 virtual false final false
inline void set_controlPath(::StringW  value) ;

/// @brief Method get_control addr 0x2ad94b4 size 0x8 virtual false final false
inline ::UnityEngine::InputSystem::InputControl* get_control() ;

/// @brief Method get_controlPathInternal addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::StringW get_controlPathInternal() ;

/// @brief Method set_controlPathInternal addr 0x0 size 0xffffffffffffffff virtual true final false
inline void set_controlPathInternal(::StringW  value) ;

/// @brief Method SetupInputControl addr 0x2ad8bc4 size 0x8f0 virtual false final false
inline void SetupInputControl() ;

/// @brief Method SendValueToControl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
inline void SendValueToControl(TValue  value) ;

/// @brief Method SentDefaultValueToControl addr 0x2ad959c size 0x134 virtual false final false
inline void SentDefaultValueToControl() ;

/// @brief Method OnEnable addr 0x2ad96d0 size 0x4 virtual true final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2ad96d4 size 0x214 virtual true final false
inline void OnDisable() ;

static inline ::UnityEngine::InputSystem::OnScreen::OnScreenControl* New_ctor() ;

/// @brief Method .ctor addr 0x2ad8b78 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OnScreenControl(OnScreenControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OnScreenControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OnScreenControl(OnScreenControl const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OnScreenControl()  = default;
public:


// Fields

// Static field s_OnScreenDevices


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::OnScreen::OnScreenControl, 0x30>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::OnScreen
NEED_NO_BOX(::UnityEngine::InputSystem::OnScreen::OnScreenControl);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::OnScreenControl*, "UnityEngine.InputSystem.OnScreen", "OnScreenControl");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::OnScreen::__OnScreenControl__OnScreenDeviceInfo, "UnityEngine.InputSystem.OnScreen", "OnScreenControl/OnScreenDeviceInfo");
