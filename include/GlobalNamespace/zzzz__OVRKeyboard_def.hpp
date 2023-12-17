#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRKeyboard)
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardState;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardFlags;
}
namespace GlobalNamespace {
struct __OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRKeyboard;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardInfo;
}
namespace GlobalNamespace {
struct __OVRKeyboard__TrackedKeyboardState;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRKeyboard);
MARK_VAL_T(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo);
MARK_VAL_T(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState);
// Type: ::TrackedKeyboardState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8025))
// CS Name: ::OVRKeyboard::TrackedKeyboardState
struct CORDL_TYPE __OVRKeyboard__TrackedKeyboardState : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field isPositionValid offset 0x0
 __declspec(property(get=__get_isPositionValid, put=__set_isPositionValid)) bool  isPositionValid;

/// @brief Field isPositionTracked offset 0x1
 __declspec(property(get=__get_isPositionTracked, put=__set_isPositionTracked)) bool  isPositionTracked;

/// @brief Field isOrientationValid offset 0x2
 __declspec(property(get=__get_isOrientationValid, put=__set_isOrientationValid)) bool  isOrientationValid;

/// @brief Field isOrientationTracked offset 0x3
 __declspec(property(get=__get_isOrientationTracked, put=__set_isOrientationTracked)) bool  isOrientationTracked;

/// @brief Field position offset 0x4
 __declspec(property(get=__get_position, put=__set_position)) ::UnityEngine::Vector3  position;

/// @brief Field rotation offset 0x10
 __declspec(property(get=__get_rotation, put=__set_rotation)) ::UnityEngine::Quaternion  rotation;

/// @brief Field timeInSeconds offset 0x20
 __declspec(property(get=__get_timeInSeconds, put=__set_timeInSeconds)) double_t  timeInSeconds;

constexpr void __set_isPositionValid(bool  value) ;

constexpr bool& __get_isPositionValid() ;

constexpr bool const& __get_isPositionValid() const;

constexpr void __set_isPositionTracked(bool  value) ;

constexpr bool& __get_isPositionTracked() ;

constexpr bool const& __get_isPositionTracked() const;

constexpr void __set_isOrientationValid(bool  value) ;

constexpr bool& __get_isOrientationValid() ;

constexpr bool const& __get_isOrientationValid() const;

constexpr void __set_isOrientationTracked(bool  value) ;

constexpr bool& __get_isOrientationTracked() ;

constexpr bool const& __get_isOrientationTracked() const;

constexpr void __set_position(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_position() ;

constexpr ::UnityEngine::Vector3 const& __get_position() const;

constexpr void __set_rotation(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get_rotation() ;

constexpr ::UnityEngine::Quaternion const& __get_rotation() const;

constexpr void __set_timeInSeconds(double_t  value) ;

constexpr double_t& __get_timeInSeconds() ;

constexpr double_t const& __get_timeInSeconds() const;

// Ctor Parameters [CppParam { name: "isPositionValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isPositionTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOrientationValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isOrientationTracked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "timeInSeconds", ty: "double_t", modifiers: "", def_value: None }]
constexpr __OVRKeyboard__TrackedKeyboardState(bool  isPositionValid, bool  isPositionTracked, bool  isOrientationValid, bool  isOrientationTracked, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, double_t  timeInSeconds) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRKeyboard__TrackedKeyboardState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRKeyboard__TrackedKeyboardState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardInfo
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8026))
// CS Name: ::OVRKeyboard::TrackedKeyboardInfo
struct CORDL_TYPE __OVRKeyboard__TrackedKeyboardInfo : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field Name offset 0x0
 __declspec(property(get=__get_Name, put=__set_Name)) ::StringW  Name;

/// @brief Field Identifier offset 0x8
 __declspec(property(get=__get_Identifier, put=__set_Identifier)) uint64_t  Identifier;

/// @brief Field Dimensions offset 0x10
 __declspec(property(get=__get_Dimensions, put=__set_Dimensions)) ::UnityEngine::Vector3  Dimensions;

/// @brief Field KeyboardFlags offset 0x1c
 __declspec(property(get=__get_KeyboardFlags, put=__set_KeyboardFlags)) ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags  KeyboardFlags;

/// @brief Field SupportedPresentationStyles offset 0x20
 __declspec(property(get=__get_SupportedPresentationStyles, put=__set_SupportedPresentationStyles)) ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles  SupportedPresentationStyles;

constexpr void __set_Name(::StringW  value) ;

constexpr ::StringW& __get_Name() ;

constexpr ::StringW const& __get_Name() const;

constexpr void __set_Identifier(uint64_t  value) ;

constexpr uint64_t& __get_Identifier() ;

constexpr uint64_t const& __get_Identifier() const;

constexpr void __set_Dimensions(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get_Dimensions() ;

constexpr ::UnityEngine::Vector3 const& __get_Dimensions() const;

constexpr void __set_KeyboardFlags(::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags& __get_KeyboardFlags() ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags const& __get_KeyboardFlags() const;

constexpr void __set_SupportedPresentationStyles(::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles& __get_SupportedPresentationStyles() ;

constexpr ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles const& __get_SupportedPresentationStyles() const;

// Ctor Parameters [CppParam { name: "Name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Identifier", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "Dimensions", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "KeyboardFlags", ty: "::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags", modifiers: "", def_value: None }, CppParam { name: "SupportedPresentationStyles", ty: "::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles", modifiers: "", def_value: None }]
constexpr __OVRKeyboard__TrackedKeyboardInfo(::StringW  Name, uint64_t  Identifier, ::UnityEngine::Vector3  Dimensions, ::GlobalNamespace::__OVRPlugin__TrackedKeyboardFlags  KeyboardFlags, ::GlobalNamespace::__OVRPlugin__TrackedKeyboardPresentationStyles  SupportedPresentationStyles) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRKeyboard__TrackedKeyboardInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRKeyboard__TrackedKeyboardInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRKeyboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8027))
// CS Name: ::OVRKeyboard*
class CORDL_TYPE OVRKeyboard : public ::System::Object {
public:
// Declarations
using TrackedKeyboardInfo = ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo;

using TrackedKeyboardState = ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method GetKeyboardState addr 0x2793764 size 0x154 virtual false final false
static inline ::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState GetKeyboardState() ;

/// @brief Method GetSystemKeyboardInfo addr 0x27938b8 size 0xe4 virtual false final false
static inline bool GetSystemKeyboardInfo(::GlobalNamespace::__OVRPlugin__TrackedKeyboardQueryFlags  keyboardQueryFlags, ByRef<::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo>  keyboardInfo) ;

/// @brief Method StopKeyboardTracking addr 0x279399c size 0x50 virtual false final false
static inline bool StopKeyboardTracking(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo  keyboardInfo) ;

// Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRKeyboard(OVRKeyboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRKeyboard", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRKeyboard(OVRKeyboard const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRKeyboard()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRKeyboard, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRKeyboard);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRKeyboard*, "", "OVRKeyboard");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardInfo, "", "OVRKeyboard/TrackedKeyboardInfo");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRKeyboard__TrackedKeyboardState, "", "OVRKeyboard/TrackedKeyboardState");
