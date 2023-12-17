#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRHeadsetEmulator)
namespace UnityEngine {
struct CursorLockMode;
}
namespace GlobalNamespace {
class OVRManager;
}
namespace UnityEngine {
struct KeyCode;
}
namespace GlobalNamespace {
struct __OVRHeadsetEmulator__OpMode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRHeadsetEmulator__OpMode;
}
namespace GlobalNamespace {
class OVRHeadsetEmulator;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRHeadsetEmulator__OpMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRHeadsetEmulator);
// Type: ::OpMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7578))
// CS Name: ::OVRHeadsetEmulator::OpMode
struct CORDL_TYPE __OVRHeadsetEmulator__OpMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRHeadsetEmulator__OpMode_Unwrapped
enum struct ____OVRHeadsetEmulator__OpMode_Unwrapped : int32_t {
__E_Off = static_cast<int32_t>(0x0),
__E_EditorOnly = static_cast<int32_t>(0x1),
__E_AlwaysOn = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Off value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const Off;

/// @brief Field EditorOnly value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const EditorOnly;

/// @brief Field AlwaysOn value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const AlwaysOn;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRHeadsetEmulator__OpMode_Unwrapped () const noexcept {
return std::bit_cast<____OVRHeadsetEmulator__OpMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRHeadsetEmulator__OpMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRHeadsetEmulator__OpMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRHeadsetEmulator__OpMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRHeadsetEmulator__OpMode, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRHeadsetEmulator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7579))
// CS Name: ::OVRHeadsetEmulator*
class CORDL_TYPE OVRHeadsetEmulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using OpMode = ::GlobalNamespace::__OVRHeadsetEmulator__OpMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field MOUSE_SCALE_X offset 0x0
static constexpr float_t  MOUSE_SCALE_X{-2.0};

/// @brief Field MOUSE_SCALE_X_PITCH offset 0x0
static constexpr float_t  MOUSE_SCALE_X_PITCH{-2.0};

/// @brief Field MOUSE_SCALE_Y offset 0x0
static constexpr float_t  MOUSE_SCALE_Y{2.0};

/// @brief Field MOUSE_SCALE_HEIGHT offset 0x0
static constexpr float_t  MOUSE_SCALE_HEIGHT{1.0};

/// @brief Field MAX_ROLL offset 0x0
static constexpr float_t  MAX_ROLL{85.0};

/// @brief Field opMode offset 0x18
 __declspec(property(get=__get_opMode, put=__set_opMode)) ::GlobalNamespace::__OVRHeadsetEmulator__OpMode  opMode;

/// @brief Field resetHmdPoseOnRelease offset 0x1c
 __declspec(property(get=__get_resetHmdPoseOnRelease, put=__set_resetHmdPoseOnRelease)) bool  resetHmdPoseOnRelease;

/// @brief Field resetHmdPoseByMiddleMouseButton offset 0x1d
 __declspec(property(get=__get_resetHmdPoseByMiddleMouseButton, put=__set_resetHmdPoseByMiddleMouseButton)) bool  resetHmdPoseByMiddleMouseButton;

/// @brief Field activateKeys offset 0x20
 __declspec(property(get=__get_activateKeys, put=__set_activateKeys)) ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>  activateKeys;

/// @brief Field pitchKeys offset 0x28
 __declspec(property(get=__get_pitchKeys, put=__set_pitchKeys)) ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>  pitchKeys;

/// @brief Field manager offset 0x30
 __declspec(property(get=__get_manager, put=__set_manager)) ::GlobalNamespace::OVRManager*  manager;

/// @brief Field lastFrameEmulationActivated offset 0x38
 __declspec(property(get=__get_lastFrameEmulationActivated, put=__set_lastFrameEmulationActivated)) bool  lastFrameEmulationActivated;

/// @brief Field recordedHeadPoseRelativeOffsetTranslation offset 0x3c
 __declspec(property(get=__get_recordedHeadPoseRelativeOffsetTranslation, put=__set_recordedHeadPoseRelativeOffsetTranslation)) ::UnityEngine::Vector3  recordedHeadPoseRelativeOffsetTranslation;

/// @brief Field recordedHeadPoseRelativeOffsetRotation offset 0x48
 __declspec(property(get=__get_recordedHeadPoseRelativeOffsetRotation, put=__set_recordedHeadPoseRelativeOffsetRotation)) ::UnityEngine::Vector3  recordedHeadPoseRelativeOffsetRotation;

/// @brief Field hasSentEvent offset 0x54
 __declspec(property(get=__get_hasSentEvent, put=__set_hasSentEvent)) bool  hasSentEvent;

/// @brief Field emulatorHasInitialized offset 0x55
 __declspec(property(get=__get_emulatorHasInitialized, put=__set_emulatorHasInitialized)) bool  emulatorHasInitialized;

/// @brief Field previousCursorLockMode offset 0x58
 __declspec(property(get=__get_previousCursorLockMode, put=__set_previousCursorLockMode)) ::UnityEngine::CursorLockMode  previousCursorLockMode;

constexpr void __set_opMode(::GlobalNamespace::__OVRHeadsetEmulator__OpMode  value) ;

constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode& __get_opMode() ;

constexpr ::GlobalNamespace::__OVRHeadsetEmulator__OpMode const& __get_opMode() const;

constexpr void __set_resetHmdPoseOnRelease(bool  value) ;

constexpr bool& __get_resetHmdPoseOnRelease() ;

constexpr bool const& __get_resetHmdPoseOnRelease() const;

constexpr void __set_resetHmdPoseByMiddleMouseButton(bool  value) ;

constexpr bool& __get_resetHmdPoseByMiddleMouseButton() ;

constexpr bool const& __get_resetHmdPoseByMiddleMouseButton() const;

constexpr void __set_activateKeys(::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>  value) ;

constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>& __get_activateKeys() ;

constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*> const& __get_activateKeys() const;

constexpr void __set_pitchKeys(::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>  value) ;

constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*>& __get_pitchKeys() ;

constexpr ::ArrayW<::UnityEngine::KeyCode,::Array<::UnityEngine::KeyCode>*> const& __get_pitchKeys() const;

constexpr void __set_manager(::GlobalNamespace::OVRManager*  value) ;

constexpr ::GlobalNamespace::OVRManager* __get_manager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRManager*> __get_manager() const;

constexpr void __set_lastFrameEmulationActivated(bool  value) ;

constexpr bool& __get_lastFrameEmulationActivated() ;

constexpr bool const& __get_lastFrameEmulationActivated() const;

constexpr void __set_recordedHeadPoseRelativeOffsetTranslation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_recordedHeadPoseRelativeOffsetTranslation() ;

constexpr ::UnityEngine::Vector3 const& __get_recordedHeadPoseRelativeOffsetTranslation() const;

constexpr void __set_recordedHeadPoseRelativeOffsetRotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_recordedHeadPoseRelativeOffsetRotation() ;

constexpr ::UnityEngine::Vector3 const& __get_recordedHeadPoseRelativeOffsetRotation() const;

constexpr void __set_hasSentEvent(bool  value) ;

constexpr bool& __get_hasSentEvent() ;

constexpr bool const& __get_hasSentEvent() const;

constexpr void __set_emulatorHasInitialized(bool  value) ;

constexpr bool& __get_emulatorHasInitialized() ;

constexpr bool const& __get_emulatorHasInitialized() const;

constexpr void __set_previousCursorLockMode(::UnityEngine::CursorLockMode  value) ;

constexpr ::UnityEngine::CursorLockMode& __get_previousCursorLockMode() ;

constexpr ::UnityEngine::CursorLockMode const& __get_previousCursorLockMode() const;

/// @brief Method Start addr 0x2729f60 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method Update addr 0x2729f64 size 0x464 virtual false final false
inline void Update() ;

/// @brief Method IsEmulationActivated addr 0x272a3c8 size 0x90 virtual false final false
inline bool IsEmulationActivated() ;

/// @brief Method IsTweakingPitch addr 0x272a458 size 0x7c virtual false final false
inline bool IsTweakingPitch() ;

static inline ::GlobalNamespace::OVRHeadsetEmulator* New_ctor() ;

/// @brief Method .ctor addr 0x272a4d4 size 0xc8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRHeadsetEmulator(OVRHeadsetEmulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRHeadsetEmulator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRHeadsetEmulator(OVRHeadsetEmulator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRHeadsetEmulator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRHeadsetEmulator, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRHeadsetEmulator__OpMode, "", "OVRHeadsetEmulator/OpMode");
NEED_NO_BOX(::GlobalNamespace::OVRHeadsetEmulator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRHeadsetEmulator*, "", "OVRHeadsetEmulator");
